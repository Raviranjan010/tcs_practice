# Problem: Count occurrences of each character.
# Time: O(N), Space: O(K) where K is unique characters.

def count_frequency(s):
    freq = {}
    for char in s:
        freq[char] = freq.get(char, 0) + 1
    return freq
