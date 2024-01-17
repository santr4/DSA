# brute force approach
from typing import List


def sortArr(arr: List[int]) -> int:
    arr.sort()
    return arr[-1]


if __name__ == "__main__":
    arr1 = [2, 5, 1, 3, 0]
    arr2 = [8, 10, 5, 7, 9]
    print("the largest element in the arr1: ", sortArr(arr1))
    print("the largest element in the arr2: ", sortArr(arr2))


# optimal approach
def findTheLargestElement(arr, n):
    max = arr[0]
    for i in range(0, n):
        if max < arr[i]:
            max = arr[i]
    return max


if __name__ == "__main__":
    arr1 = [2, 5, 1, 3, 0]
    n = 5
    max = findTheLargestElement(arr1, n)
    print("the largest element in the array: ", max)
