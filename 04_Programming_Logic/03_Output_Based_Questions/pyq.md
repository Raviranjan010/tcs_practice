# 📚 Output Based Questions - Previous Year Questions (PYQs)

This file contains actual past questions asked in TCS NQT exams, with complete explanations.

## [2024] [DIFFICULTY: Medium] [CATEGORY: Digital]
**Question 1**:
What is the output of this C program?
```c
#include <stdio.h>
int main() {
  int i = 5;
  printf("%d", i++ + ++i);
  return 0;
}
```

**Options**:
- A) 10
- B) 12
- C) 11
- D) Undefined behavior

**Correct Answer**: **B) 12**

### Explanation:
The expression invokes pre and post increment on same variable. On standard GCC compilers: `i++` evaluates to 5, then i increments to 6. `++i` increments i to 7 and evaluates to 7. Sum is 5 + 7 = 12. Note: Strictly, this is undefined behavior in C/C++ prior to C++17, but NQT asks this expecting 12.

### 🔥 Under-60-Seconds Trick:
Replace left side with 5 (post) -> value is 5, i becomes 6. Right side pre-increments 6 to 7 -> value is 7. Sum = 5 + 7 = 12.

---

## [2023] [DIFFICULTY: Medium] [CATEGORY: Ninja]
**Question 2**:
What is the output of the following pseudocode?
Integer x = 4
Integer y = x >> 1
print y

**Options**:
- A) 8
- B) 2
- C) 1
- D) 4

**Correct Answer**: **B) 2**

### Explanation:
Right shift by 1 is equivalent to division by 2. 4 / 2 = 2.

### 🔥 Under-60-Seconds Trick:
$x \gg 1$ divides the number by 2. $4/2 = 2$. Instant solve.

