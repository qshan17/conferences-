
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