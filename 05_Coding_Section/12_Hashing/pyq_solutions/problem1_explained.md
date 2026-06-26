# 📝 Solution Explanation: Char Frequency Count

## 💡 Problem Statement
Char Frequency Count

## 🛠️ Code Implementations

### 🐍 Python (Optimal)
```python
# Problem: Count occurrences of each character.
# Time: O(N), Space: O(K) where K is unique characters.

def count_frequency(s):
    freq = {}
    for char in s:
        freq[char] = freq.get(char, 0) + 1
    return freq

```

### 👾 C++ Alternative
```cpp
// C++ Alternative
#include <string>
#include <unordered_map>
std::unordered_map<char, int> countFrequency(std::string s) {
    std::unordered_map<char, int> freq;
    for(char c : s) freq[c]++;
    return freq;
}

```

## 📈 Complexity Analysis

* **Time Complexity**: $O(N)$ - we iterate through the input elements exactly once.
* **Space Complexity**: $O(1)$ - auxiliary workspace utilizes constant memory storage.
