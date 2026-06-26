# 📝 Solution Explanation: Star Pyramid

## 💡 Problem Statement
Star Pyramid

## 🛠️ Code Implementations

### 🐍 Python (Optimal)
```python
# Problem: Print pyramid of height N.
# Test Case: N=3:
#   *
#  ***
# *****

def print_pyramid(n):
    for i in range(n):
        # Print leading spaces
        print(' ' * (n - i - 1) + '*' * (2 * i + 1))

```

### 👾 C++ Alternative
```cpp
// C++ Alternative
#include <iostream>
void printPyramid(int n) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n - i - 1; ++j) std::cout << " ";
        for(int j = 0; j < 2 * i + 1; ++j) std::cout << "*";
        std::cout << "\n";
    }
}

```

## 📈 Complexity Analysis

* **Time Complexity**: $O(N)$ - we iterate through the input elements exactly once.
* **Space Complexity**: $O(1)$ - auxiliary workspace utilizes constant memory storage.
