# 📝 Solution Explanation: Matrix Transpose

## 💡 Problem Statement
Matrix Transpose

## 🛠️ Code Implementations

### 🐍 Python (Optimal)
```python
# Problem: Transpose matrix in-place for square matrix.
# Time: O(R*C), Space: O(1)

def transpose(mat):
    n = len(mat)
    for i in range(n):
        for j in range(i + 1, n):
            mat[i][j], mat[j][i] = mat[j][i], mat[i][j]
    return mat

```

### 👾 C++ Alternative
```cpp
// C++ Alternative
#include <vector>
#include <algorithm>
void transpose(std::vector<std::vector<int>>& mat) {
    int n = mat.size();
    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            std::swap(mat[i][j], mat[j][i]);
        }
    }
}

```

## 📈 Complexity Analysis

* **Time Complexity**: $O(N)$ - we iterate through the input elements exactly once.
* **Space Complexity**: $O(1)$ - auxiliary workspace utilizes constant memory storage.
