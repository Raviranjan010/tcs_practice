# 📝 Solution Explanation: Check Palindrome String

## 💡 Problem Statement
Check Palindrome String

## 🛠️ Code Implementations

### 🐍 Python (Optimal)
```python
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

```

### 👾 C++ Alternative
```cpp
// C++ Alternative
#include <string>
bool isPalindrome(std::string s) {
    int l = 0, r = s.length() - 1;
    while(l < r) {
        if(s[l++] != s[r--]) return false;
    }
    return true;
}

```

## 📈 Complexity Analysis

* **Time Complexity**: $O(N)$ - we iterate through the input elements exactly once.
* **Space Complexity**: $O(1)$ - auxiliary workspace utilizes constant memory storage.
