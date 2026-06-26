# 📝 Solution Explanation: Sieve of Eratosthenes

## 💡 Problem Statement
Sieve of Eratosthenes

## 🛠️ Code Implementations

### 🐍 Python (Optimal)
```python
# Problem: Return all primes up to N.
# Time: O(N log log N), Space: O(N)

def sieve(n):
    prime = [True] * (n + 1)
    prime[0] = prime[1] = False
    for p in range(2, int(n**0.5) + 1):
        if prime[p]:
            for i in range(p * p, n + 1, p):
                prime[i] = False
    return [i for i in range(n + 1) if prime[i]]

```

### 👾 C++ Alternative
```cpp
// C++ Alternative
#include <vector>
std::vector<int> sieve(int n) {
    std::vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for(int p = 2; p * p <= n; ++p) {
        if(prime[p]) {
            for(int i = p * p; i <= n; i += p) prime[i] = false;
        }
    }
    std::vector<int> primes;
    for(int i = 2; i <= n; ++i) {
        if(prime[i]) primes.push_back(i);
    }
    return primes;
}

```

## 📈 Complexity Analysis

* **Time Complexity**: $O(N)$ - we iterate through the input elements exactly once.
* **Space Complexity**: $O(1)$ - auxiliary workspace utilizes constant memory storage.
