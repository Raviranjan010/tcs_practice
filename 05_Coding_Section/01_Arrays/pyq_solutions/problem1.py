# Problem: Reverse an array in place.
# Test Case 1: [1, 2, 3] -> [3, 2, 1]
# Test Case 2: [5] -> [5]
# Test Case 3: [] -> []
# Edge cases: Empty array, single element.

def reverse_array_brute(arr):
    # Time: O(N), Space: O(N)
    return arr[::-1]

def reverse_array_optimal(arr):
    # Time: O(N), Space: O(1) in-place swap
    left, right = 0, len(arr) - 1
    while left < right:
        arr[left], arr[right] = arr[right], arr[left]
        left += 1
        right -= 1
    return arr
