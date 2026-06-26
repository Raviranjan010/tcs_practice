# 📚 Algorithms Basics - Previous Year Questions (PYQs)

This file contains actual past questions asked in TCS NQT exams, with complete explanations.

## [2024] [DIFFICULTY: Medium] [CATEGORY: Ninja]
**Question 1**:
What is the worst-case space complexity of Quick Sort?

**Options**:
- A) O(1)
- B) O(n)
- C) O(log n)
- D) O(n^2)

**Correct Answer**: **B) O(n)**

### Explanation:
The space complexity of quicksort is determined by the recursion stack. In the worst case (already sorted array with worst pivot choice), the recursion tree has height N, leading to $O(N)$ auxiliary stack space. Average space complexity is $O(\log N)$.

### 🔥 Under-60-Seconds Trick:
Worst-case quicksort recursion behaves like linear search, consuming $O(N)$ stack frames. Select B.

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

