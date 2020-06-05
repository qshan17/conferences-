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
                        final_sum += - 1 * (k / _all_sum) * mat