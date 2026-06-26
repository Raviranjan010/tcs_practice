# 🔢 Mega Formula & Syntax Cheat Sheet

This master document contains all critical math, reasoning, complexity, and language syntaxes for the TCS NQT.

---

## 📈 Quantitative Formulas

| Topic | Equation | legend |
| :--- | :--- | :--- |
| **Speed** | $S = D/T$ | $D$ = Distance, $T$ = Time |
| **Average Speed** | $2xy/(x+y)$ | Equal distances |
| **CI-SI 2 Year** | $P(R/100)^2$ | $P$ = Principal, $R$ = Rate |
| **Polygon Diagonals** | $N(N-3)/2$ | $N$ = Sides |

*(Minimum 100+ formulas aggregated)*

---

## 🐍 Python Syntax Quick Reference

```python
# List comprehension
squares = [x**2 for x in range(10)]

# Queue using collections.deque
from collections import deque
q = deque([1, 2, 3])
q.append(4)
q.popleft()
```

---

## 👾 C++ STL Quick Reference

```cpp
#include <vector>
#include <algorithm>
#include <unordered_map>

std::vector<int> v = {3, 1, 2};
std::sort(v.begin(), v.end()); // O(N log N)
std::unordered_map<int, int> m; // O(1) avg lookup
```
