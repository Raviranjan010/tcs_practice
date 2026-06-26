# 📚 Pseudo Code - Previous Year Questions (PYQs)

This file contains actual past questions asked in TCS NQT exams, with complete explanations.

## [2024] [DIFFICULTY: Medium] [CATEGORY: Ninja]
**Question 1**:
What is the output of the following pseudocode?
Integer a = 8, b = 12
a = a & b
b = b | a
print a + b

**Options**:
- A) 20
- B) 16
- C) 12
- D) 8

**Correct Answer**: **A) 20**

### Explanation:
a = 8 (1000 in binary), b = 12 (1100 in binary).
a = a & b = 1000 & 1100 = 1000 (8 in decimal).
b = b | a = 1100 | 1000 = 1100 (12 in decimal).
Print a + b = 8 + 12 = 20.

### 🔥 Under-60-Seconds Trick:
Since 'a' is 8 (subset of bits in 12), a & b is 8. Then 12 | 8 remains 12. Sum is 8 + 12 = 20.

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

