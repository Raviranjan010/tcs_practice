# 📘 Comprehensive Theory & Formula Reference (TCS NQT 2026 Pattern)

> **Exam Weights**: The Number System constitutes **15-20%** of the total questions in the Numerical Ability section. It acts as a primary filter for the **Ninja track (Foundation)** and a scoring base for the **Digital/Prime tracks (Advanced)**.

---

## 📊 Core Concepts & Mathematical Formulations

### 1. Classification of Numbers
* **Real Numbers**: Divided into Rational (terminating/recurring decimals) and Irrational ($\sqrt{2}, \pi, e$, non-terminating/non-recurring decimals).
* **Prime Numbers**: Numbers with exactly 2 distinct factors (1 and itself). 
  > **TCS Trap**: 1 is neither prime nor composite. 2 is the only even prime number.
* **Co-prime Numbers**: A pair of numbers $(a, b)$ is co-prime if their $\text{HCF}(a, b) = 1$. They do not need to be individual prime numbers (e.g., 8 and 9).

### 2. Series Summation Theorems
* Sum of first $n$ natural numbers: 
  $$\sum n = \frac{n(n+1)}{2}$$
* Sum of squares of first $n$ natural numbers: 
  $$\sum n^2 = \frac{n(n+1)(2n+1)}{6}$$
* Sum of cubes of first $n$ natural numbers: 
  $$\sum n^3 = \left[\frac{n(n+1)}{2}\right]^2$$
* Sum of first $n$ odd numbers: $n^2$
* Sum of first $n$ even numbers: $n(n+1)$

### 3. Divisibility Rules & Factor Constraints
* **LCM & HCF Fraction Property**:
  $$\text{HCF of Fractions} = \frac{\text{HCF of Numerators}}{\text{LCM of Denominators}}$$
  $$\text{LCM of Fractions} = \frac{\text{LCM of Numerators}}{\text{HCF of Denominators}}$$
* **Fundamental Rule**: $\text{LCM}(a,b) \times \text{HCF}(a,b) = a \times b$ *(Only valid for exactly two numbers).*

### 4. Advanced Factorization Properties
For any composite number expressed in its unique prime factorization: $N = p^a \times q^b \times r^c$ (where $p, q, r$ are prime bases):

| Property | Exact Formula |
| :--- | :--- |
| **Total Number of Factors** | $T(N) = (a+1)(b+1)(c+1)$ |
| **Sum of All Factors** | $S(N) = \left(\frac{p^{a+1}-1}{p-1}\right) \times \left(\frac{q^{b+1}-1}{q-1}\right) \times \left(\frac{r^{b+1}-1}{r-1}\right)$ |
| **Product of All Factors** | $P(N) = N^{\frac{T(N)}{2}}$ |
| **Number of Odd Factors** | Product of $(power+1)$ of only odd prime bases. |
| **Number of Even Factors** | $\text{Total Factors} - \text{Odd Factors} = a \times (b+1)(c+1)$ *(assuming $p=2$)* |
| **Perfect Square Factors** | $\left(\lfloor\frac{a}{2}\rfloor + 1\right) \times \left(\lfloor\frac{b}{2}\rfloor + 1\right) \times \left(\lfloor\frac{c}{2}\rfloor + 1\right)$ |

---

## ⭕ Unit Digit Rules & Cyclicity

The unit digit of a number $K^x$ is entirely determined by the unit digit of the base $K$ and the property of its power cycle.

| Digit Group | Cycle Length | Pattern Behavior | Operational Shortcut |
| :---: | :---: | :--- | :--- |
| **0, 1, 5, 6** | 1 | Stays invariant ($5^n \rightarrow 5$) | No calculation required. |
| **4, 9** | 2 | $4^{\text{odd}} \rightarrow 4$, $4^{\text{even}} \rightarrow 6$<br>$9^{\text{odd}} \rightarrow 9$, $9^{\text{even}} \rightarrow 1$ | Check whether the power is odd or even. |
| **2, 3, 7, 8** | 4 | Cycles systematically every 4 iterations. | Divide power by 4; use the remainder as the new exponent. If remainder is 0, use power 4. |

---

## 📐 Advanced Remainder Theorems

### 1. Fermat's Little Theorem
If $p$ is a prime number and $\text{gcd}(a, p) = 1$, then:
$$a^{p-1} \equiv 1 \pmod p$$

### 2. Euler's Totient Theorem
If $\text{gcd}(a, n) = 1$, then:
$$a^{\phi(n)} \equiv 1 \pmod n$$
Where $\phi(n)$ is Euler's Totient function: $n \times (1 - \frac{1}{p})(1 - \frac{1}{q})\dots$ for prime factors $p, q$.

### 3. Wilson's Theorem
If $p$ is a prime number, then:
$$(p-1)! \equiv -1 \pmod p \equiv (p-1) \pmod p$$

### 4. Legendre's Formula (Trailing Zeros & Highest Prime Powers)
The highest power of a prime $p$ that divides $N!$ is given by:
$$E_p(N!) = \lfloor\frac{N}{p}\rfloor + \lfloor\frac{N}{p^2}\rfloor + \lfloor\frac{N}{p^3}\rfloor + \dots$$
*Note: Trailing zeros in $N!$ are calculated by checking the highest power of $p=5$.*

---

## ⚠️ TCS NQT Specific Traps & Speed Shortcuts

1. **The Prime Base Trap**: Before executing any factorization formulas, ensure your bases are completely broken down into prime numbers. For example, do not use $N = 6^2 \times 5^3$. Rewrite it as $2^2 \times 3^2 \times 5^3$.
2. **Proper vs. Total Factors**: "Proper factors" exclude the number itself. If a question asks for proper factors, calculate the total number of factors and subtract 1.
3. **The Universal Base Cycle**: If you ever forget the specific cyclicity of any number during the exam pressure, remember that **4** is a universal cycle length for all digits. Dividing any power by 4 will always yield the correct unit digit match.
