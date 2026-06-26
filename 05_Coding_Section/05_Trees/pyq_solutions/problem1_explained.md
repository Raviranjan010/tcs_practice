# 📝 Solution Explanation: Height of Binary Tree

## 💡 Problem Statement
Height of Binary Tree

## 🛠️ Code Implementations

### 🐍 Python (Optimal)
```python
# Problem: Find depth/height of binary tree.
# Time: O(N), Space: O(H) recursive stack space.

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def max_depth(root):
    if not root: return 0
    return max(max_depth(root.left), max_depth(root.right)) + 1

```

### 👾 C++ Alternative
```cpp
// C++ Alternative
#include <algorithm>
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
int maxDepth(TreeNode* root) {
    if(!root) return 0;
    return std::max(maxDepth(root->left), maxDepth(root->right)) + 1;
}

```

## 📈 Complexity Analysis

* **Time Complexity**: $O(N)$ - we iterate through the input elements exactly once.
* **Space Complexity**: $O(1)$ - auxiliary workspace utilizes constant memory storage.
