# 📝 Output Based Questions - Concept & Rules

> **Concept Definition**:
> Output Based Questions test your understanding of language-specific details in C, C++, Java, and Python. Focus areas include pointer arithmetic, scope rules, class inheritance, and string slicing.

## 📊 Key Logic / Concept Table

| Concept / Pattern | Meaning / Expression |
| :--- | :--- |
| C Pointers | `*ptr` accesses the value; `&var` accesses the address. |
| Python Slicing | `arr[start:end:step]` |
| Java Statics | Static methods/variables belong to the class, not instances. |

## ✍️ Worked Examples (Step-by-Step)

### Example 1:
**Question**: What is the output of the C snippet?
```c
#include <stdio.h>
int main() {
  int arr[] = {10, 20, 30};
  int *ptr = arr;
  printf("%d ", *(ptr + 2));
  return 0;
}
```

**Solution**:
Step 1: Pointer `ptr` points to the start of `arr` (value 10).
Step 2: `ptr + 2` offsets pointer by 2 integers, pointing to `arr[2]` (value 30).
Step 3: `*(ptr + 2)` dereferences this pointer to yield 30.
Step 4: Output: 30.

### Example 2:
**Question**: What is the output of the Python code?
```python
s = "TCSNQT"
print(s[1:4])
```

**Solution**:
Step 1: In Python, slicing index starts at 0. 'T'=0, 'C'=1, 'S'=2, 'N'=3, 'Q'=4.
Step 2: `s[1:4]` slices from index 1 (inclusive) to 4 (exclusive). Indices are 1, 2, 3.
Step 3: Characters at these indices are 'C', 'S', 'N'.
Step 4: Output: CSN.

### Example 3:
**Question**: What is the output of the C++ code?
```cpp
#include <iostream>
using namespace std;
int main() {
  int x = 5;
  cout << x++ + ++x;
  return 0;
}
```

**Solution**:
Step 1: In `x++ + ++x`, order of evaluation of operands in C++ is undefined before C++17, but standard compiler trace: `x++` evaluates to 5, post-increments to 6. `++x` pre-increments to 7, evaluates to 7. Sum = 5 + 7 = 12.
Step 2: Output: 12.

## ⚠️ Common Mistakes

❌ **Pitfall**: Ignoring pre-increment vs. post-increment rules. `x++` uses the current value and then increments; `++x` increments first and then uses the new value.

## 💡 Clue / Shortcut Trick

🔥 **Shortcut**: In Python slicing, if step is negative (e.g. `s[::-1]`), it reverses the string.

## 🔗 Relation to Other Topics

💡 Directly evaluates production debugging skills in multiple programming languages.

## 🔗 PYQ Link

Check out past year questions on this topic: [Previous Year Questions](pyq.md)
