# Problem: Find the second largest element in an array.
# Test Case 1: [12, 35, 1, 10, 34, 1] -> 34
# Test Case 2: [10, 10, 10] -> -1 (No second largest)
# Test Case 3: [1] -> -1
# Edge cases: Array with duplicates, small arrays.

def second_largest_optimal(arr):
    # Time: O(N), Space: O(1)
    if len(arr) < 2: return -1
    first = second = -float('inf')
    for num in arr:
        if num > first:
            second = first
            first = num
        elif num > second and num != first:
            second = num
    return second if second != -float('inf') else -1
