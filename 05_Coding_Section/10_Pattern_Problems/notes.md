# 📝 15 Standard Coding Pattern Implementations

This notes file compiles the 15 standard pattern printing programs asked in the TCS NQT coding rounds.

---

## 📊 Summary of Patterns

1. **Right Triangle (Stars)**
   - *Logic*: Row $i$ has $i$ stars.
2. **Inverted Right Triangle**
   - *Logic*: Row $i$ has $N-i+1$ stars.
3. **Pyramid (Centered)**
   - *Logic*: Row $i$ has $N-i$ spaces and $2i-1$ stars.
4. **Inverted Pyramid**
   - *Logic*: Row $i$ has $i-1$ spaces and $2(N-i)+1$ stars.
5. **Diamond**
   - *Logic*: Centered pyramid followed by inverted pyramid.
6. **Hollow Rectangle**
   - *Logic*: Stars only at boundary indices ($i=0, i=R-1, j=0, j=C-1$).
7. **Hollow Square**
   - *Logic*: Stars only at boundary indices of $N \times N$ grid.
8. **Pascal's Triangle**
   - *Logic*: Element $C(n, k) = C(n, k-1) \times (n-k)/k$.
9. **Floyd's Triangle**
   - *Logic*: Accumulator prints numbers sequentially starting at 1.
10. **Number Pyramid**
    - *Logic*: Row $i$ has numbers increasing up to $i$ and decreasing.
11. **Alphabet Triangle**
    - *Logic*: Print characters based on ASCII offset.
12. **Butterfly Pattern**
    - *Logic*: Stars at boundaries, spaces in middle.
13. **Zigzag Pattern**
    - *Logic*: Coordinates satisfying specific mod constraints.
14. **Spiral Matrix Print**
    - *Logic*: Four pointers (top, bottom, left, right) traversing boundaries inward.
15. **Sandglass Pattern**
    - *Logic*: Inverted pyramid followed by upright pyramid.

---

## 🛠️ Code Implementations (Python + C++)

### 1. Right Triangle (Stars)
*Python*:
```python
def pattern1(n):
    for i in range(1, n + 1):
        print('*' * i)
```
*C++*:
```cpp
#include <iostream>
void pattern1(int n) {
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= i; ++j) std::cout << "*";
        std::cout << "\n";
    }
}
```

### 8. Pascal's Triangle
*Python*:
```python
def pascal_triangle(n):
    for i in range(n):
        val = 1
        print(" " * (n - i - 1), end="")
        for j in range(i + 1):
            print(f"{val} ", end="")
            val = val * (i - j) // (j + 1)
        print()
```
*C++*:
```cpp
#include <iostream>
void pascalTriangle(int n) {
    for (int i = 0; i < n; i++) {
        int val = 1;
        for(int s = 0; s < n - i - 1; ++s) std::cout << " ";
        for (int j = 0; j <= i; j++) {
            std::cout << val << " ";
            val = val * (i - j) / (j + 1);
        }
        std::cout << "\n";
    }
}
```

*(Refer to code solution files for all 15 pattern codes)*
