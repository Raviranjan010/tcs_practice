# Problem: Check if a string is a palindrome.
# Test Case 1: 'radar' -> True
# Test Case 2: 'hello' -> False
# Test Case 3: '' -> True
# Edge cases: Empty string, case sensitivity.

def is_palindrome_optimal(s):
    # Time: O(N), Space: O(1)
    left, right = 0, len(s) - 1
    while left < right:
        if s[left] != s[right]:
            return False
        left += 1
        right -= 1
    return True
