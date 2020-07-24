
import entropy_calculator

my_data = [
    ["A", "B", "C", "Y"],
    [0, 0, 0, 0],
    [0, 0, 1, 0],
    [0, 1, 0, 0],
    [0, 1, 1, 1],
    [1, 0, 0, 1],
    [1, 0, 1, 1],
    [1, 1, 0, 1],
    [1, 1, 1, 1]
]


attributes = my_data[0][0:-1]
number_of_attributes = len(attributes)
m_attributes_with_partitions = {}


def classify_attributes():
    global attributes, number_of_attributes, my_data, m_attributes_with_partitions

    for nr in range(0, number_of_attributes):
        m_attributes_with_partitions.setdefault(attributes[nr], get_partitions_of_feature(attributes[nr], my_data))

    for item in m_attributes_with_partitions:
        print(item, m_attributes_with_partitions[item])


def get_output_values(my_data):
    values = []

    for i in my_data[1:]:
        for j in i[-1:]:
            values.append(j)

    return values


def get_partitions_of_feature(feature, some_data):
    global attributes
    class_labels = get_output_labels(some_data)
    position = [index for index, m_feature in enumerate(attributes) if m_feature == feature][0]
    output_values = get_output_values(some_data)
    children_partitions_list = []

    for label in class_labels:
        child_partition = []
        for l in class_labels:
            pos = 0
            number = 0
            for i in my_data[1:]:
                for j in i[position:position + 1]:
                    if j == label and output_values[pos] == l:
                        number += 1
                    pos += 1
            child_partition.append(number)
        children_partitions_list.append(tuple(child_partition))

    return children_partitions_list


def get_output_labels(my_data):
    class_labels = []
    for i in my_data[1:]:
        for j in i[-1:]:
            class_labels.append(j)

    return set(class_labels)

current_root = -1


def get_root(some_data):
    global current_root,attributes
    classify_attributes()
    output_partitions = []
    for i in get_output_labels(some_data):
        number = 0
        for j in get_output_values(some_data):
            if i is j:
                number += 1
        output_partitions.append(number)

    ig_max = 0
    for item in m_attributes_with_partitions:
        current_ig = entropy_calculator.information_gain(tuple(output_partitions), tuple(m_attributes_with_partitions[item]))
        print(current_ig)
        if ig_max <= current_ig:
            ig_max = current_ig
            current_root = item

    attributes.remove(current_root)
    print(attributes)
    print(current_root, "ROOT WITH", m_attributes_with_partitions[current_root])

get_root(my_data)
#
# def build_tree(current_root, ):
#