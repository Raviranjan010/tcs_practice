# 📝 Solution Explanation: 0/1 Knapsack

## 💡 Problem Statement
0/1 Knapsack

## 🛠️ Code Implementations

### 🐍 Python (Optimal)
```python
# Problem: 0/1 Knapsack.
# Time: O(N*W), Space: O(W) space optimized.

def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for i in range(n):
        for w in range(W, wt[i] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[i]] + val[i])
    return dp[W]

```

### 👾 C++ Alternative
```cpp
// C++ Alternative
#include <vector>
#include <algorithm>
int knapSack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}

```

## 📈 Complexity Analysis

* **Time Complexity**: $O(N)$ - we iterate through the input elements exactly once.
* **Space Complexity**: $O(1)$ - auxiliary workspace utilizes constant memory storage.
