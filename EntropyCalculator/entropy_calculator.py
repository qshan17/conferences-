import math


def entropy_x(*probs):
    _all_sum = 0.0
    final_sum = 0.0
    normal = False

    for i in probs:
        for j in i:
            if isinstance(j, tuple):
                normal = False
                for k in j:
                    _all_sum += k
                for k in j:
                    if k is not 0:
                        final_sum += - 1 * (k / _all_sum) * math.log(k / _all_sum, 2)
            else:
                _all_sum += j
                normal = True

    if normal:
        for i in probs:
            for j in i:
                if j is not 0:
                    final_sum += - 1 * (j/_all_sum) * math.log(j/_all_sum, 2)

    return final_sum

print(entropy_x((1, 2)))


def entropy_conditional_mean(parent_probs, *child_probs):

    parent_sum = 0.0
    final_sum = 0.0
    normal = False

    for i in parent_probs:
        parent_sum += i

    m_children = []

    if isinstance(child_probs[0][0], tuple):
        for j in child_probs:
            for i in j:
                m_children.append(i)
        m_children = tuple(m_children)

    else:
        m_children = tuple(child_probs)

    for i in m_children:
        child_sum = 0.0
        for j in i:
            if isinstance(j, tuple):
                normal = False
                for k in j:
                    child_sum += k
                final_sum += child_sum / parent_sum * entropy_x(j)
            else:
                normal = True
                child_sum += j
        if normal:
            final_sum += child_sum / parent_sum * entropy_x(i)

    return final_sum

# print(entropy_conditional_mean((3, 5), ((2, 2), (1, 3))))


def information_gain(parent_probs, *child_probs):
    normal = True
    m_children = []
    for i in child_probs:
        if isinstance(i[0], tuple):
            normal = False
            for j in i:
                m_children.append(j)
    if normal:
        return entropy_x(parent_probs) - entropy_conditional_mean(parent_probs, child_probs)
    else:
        return entropy_x(parent_probs) - ent