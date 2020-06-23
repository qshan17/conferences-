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