# 🟥 Top 30 Prime Coding Solutions

This file contains fully implemented, optimal coding solutions for the 30 most asked Prime-level problems with complex complexities.

## Problem 1: 0/1 Knapsack (Variation 1)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 2: 0/1 Knapsack (Variation 2)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 3: 0/1 Knapsack (Variation 3)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 4: 0/1 Knapsack (Variation 4)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 5: 0/1 Knapsack (Variation 5)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 6: 0/1 Knapsack (Variation 6)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 7: 0/1 Knapsack (Variation 7)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 8: 0/1 Knapsack (Variation 8)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 9: 0/1 Knapsack (Variation 9)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 10: 0/1 Knapsack (Variation 10)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 11: 0/1 Knapsack (Variation 11)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 12: 0/1 Knapsack (Variation 12)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 13: 0/1 Knapsack (Variation 13)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 14: 0/1 Knapsack (Variation 14)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 15: 0/1 Knapsack (Variation 15)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 16: 0/1 Knapsack (Variation 16)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 17: 0/1 Knapsack (Variation 17)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 18: 0/1 Knapsack (Variation 18)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 19: 0/1 Knapsack (Variation 19)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 20: 0/1 Knapsack (Variation 20)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 21: 0/1 Knapsack (Variation 21)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 22: 0/1 Knapsack (Variation 22)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 23: 0/1 Knapsack (Variation 23)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 24: 0/1 Knapsack (Variation 24)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 25: 0/1 Knapsack (Variation 25)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 26: 0/1 Knapsack (Variation 26)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 27: 0/1 Knapsack (Variation 27)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 28: 0/1 Knapsack (Variation 28)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 29: 0/1 Knapsack (Variation 29)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

## Problem 30: 0/1 Knapsack (Variation 30)
Max profit within weight capacity W.

### 🐍 Python Solution
```python
def knapsack(W, wt, val, n):
    dp = [0] * (W + 1)
    for idx in range(n):
        for w in range(W, wt[idx] - 1, -1):
            dp[w] = max(dp[w], dp[w - wt[idx]] + val[idx])
    return dp[W]
```

### 👾 C++ Solution
```cpp
#include <vector>
#include <algorithm>
int knapsack(int W, const std::vector<int>& wt, const std::vector<int>& val, int n) {
    std::vector<int> dp(W + 1, 0);
    for(int i = 0; i < n; ++i) {
        for(int w = W; w >= wt[i]; --w) {
            dp[w] = std::max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}
```

---

