# 📝 Solution Explanation: Balanced Parentheses

## 💡 Problem Statement
Balanced Parentheses

## 🛠️ Code Implementations

### 🐍 Python (Optimal)
```python
# Problem: Check if brackets are balanced.
# Test Case: '{[()]}' -> True, '{[(])}' -> False

def is_balanced(s):
    # Time: O(N), Space: O(N)
    stack = []
    mapping = {')': '(', '}': '{', ']': '['}
    for char in s:
        if char in mapping.values():
            stack.append(char)
        elif char in mapping.keys():
            if not stack or stack.pop() != mapping[char]:
                return False
    return len(stack) == 0

```

### 👾 C++ Alternative
```cpp
// C++ Alternative
#include <string>
#include <stack>
bool isValid(std::string s) {
    std::stack<char> st;
    for(char c : s) {
        if(c == '(' || c == '{' || c == '[') st.push(c);
        else {
            if(st.empty()) return false;
            if(c == ')' && st.top() != '(') return false;
            if(c == '}' && st.top() != '{') return false;
            if(c == ']' && st.top() != '[') return false;
            st.pop();
        }
    }
    return st.empty();
}

```

## 📈 Complexity Analysis

* **Time Complexity**: $O(N)$ - we iterate through the input elements exactly once.
* **Space Complexity**: $O(1)$ - auxiliary workspace utilizes constant memory storage.
