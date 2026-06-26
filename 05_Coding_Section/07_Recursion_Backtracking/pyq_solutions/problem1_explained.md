# 📝 Solution Explanation: Fibonacci

## 💡 Problem Statement
Fibonacci

## 🛠️ Code Implementations

### 🐍 Python (Optimal)
```python
# Problem: Find N-th Fibonacci number.
# Time: O(N) iterative / O(N) memoized.

def fib_iterative(n):
    if n <= 1: return n
    a, b = 0, 1
    for _ in range(2, n + 1):
        a, b = b, a + b
    return b

```

### 👾 C++ Alternative
```cpp
// C++ Alternative
int fib(int n) {
    if(n <= 1) return n;
    int a = 0, b = 1;
    for(int i = 2; i <= n; ++i) {
        int temp = b;
        b = a + b;
        a = temp;
    }
    return b;
}

```

## 📈 Complexity Analysis

* **Time Complexity**: $O(N)$ - we iterate through the input elements exactly once.
* **Space Complexity**: $O(1)$ - auxiliary workspace utilizes constant memory storage.
