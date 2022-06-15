import sys

def binary_search(arr, target, low=None, high=None):
    low, high = low or 0, high or len(arr) - 1
    if low > high:
        return -1
    mid = (low + high) // 2
    if arr[mid] > target:
        return binary_search(arr, target, low, mid)
    if arr[mid] == target:
        return mid
    if arr[mid] < target:
        return binary_search(arr, target, mid + 1, high)

def init():
    N = int(sys.stdin.readline())
    raw = list(map(int,sys.stdin.readline().split()))
    sortedList = sorted(list(dict.fromkeys(raw)))

    for i in raw:
        print(binary_search(sortedList, i, 0, len(sortedList)), end = ' ')
    
                
init()
