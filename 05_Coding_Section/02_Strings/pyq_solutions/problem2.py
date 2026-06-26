# Problem: Check if two strings are anagrams of each other.
# Test Case 1: 'listen', 'silent' -> True
# Test Case 2: 'hello', 'world' -> False
# Test Case 3: '', '' -> True
# Edge cases: Case sensitivity, space handling.

def is_anagram_optimal(s1, s2):
    # Time: O(N), Space: O(1) since charset is constant size (256)
    if len(s1) != len(s2): return False
    count = [0] * 256
    for char in s1:
        count[ord(char)] += 1
    for char in s2:
        count[ord(char)] -= 1
        if count[ord(char)] < 0:
            return False
    return True
