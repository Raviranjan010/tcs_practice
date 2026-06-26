# 📝 Solution Explanation: Anagram Check

## 💡 Problem Statement
Anagram Check

## 🛠️ Code Implementations

### 🐍 Python (Optimal)
```python
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

```

### 👾 C++ Alternative
```cpp
// C++ Alternative
#include <string>
#include <vector>
bool isAnagram(std::string s1, std::string s2) {
    if(s1.length() != s2.length()) return false;
    std::vector<int> count(256, 0);
    for(char c : s1) count[c]++;
    for(char c : s2) {
        if(--count[c] < 0) return false;
    }
    return true;
}

```

## 📈 Complexity Analysis

* **Time Complexity**: $O(N)$ - we iterate through the input elements exactly once.
* **Space Complexity**: $O(1)$ - auxiliary workspace utilizes constant memory storage.
