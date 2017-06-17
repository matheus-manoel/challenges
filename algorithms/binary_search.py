# Implementation of binary search in python.
from random import randint


def binary_search(a_list, element):
    lo = 0
    hi = len(a_list) - 1

    while lo <= hi:
        mid = (lo + hi)//2

        if a_list[mid] == element:
            return mid
        elif a_list[mid] < element:
            lo = mid + 1
        elif a_list[mid] > element:
            hi = mid - 1

    return -1

a_list = sorted([randint(0, 100) for x in range(0, 100)])
print(a_list)
print(binary_search(a_list, 8))
