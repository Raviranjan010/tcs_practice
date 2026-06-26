# 📝 Number System - Concept & Shortcuts

> **Concept Definition**:
> Number System deals with the properties, classification, divisibility, and arithmetic operations on numbers. It forms the bedrock of quantitative aptitude, covering concepts like LCM, GCD, unit digits, remainders, and factors.

## 📊 Formula / Trick Table

| Concept / Formula | Mathematical Expression |
| :--- | :--- |
| Sum of first n natural numbers | $S = n(n+1)/2$ |
| Sum of first n odd numbers | $S = n^2$ |
| Sum of first n even numbers | $S = n(n+1)$ |
| Divisibility Rule of 11 | $|\text{Sum(Odd places)} - \text{Sum(Even places)}| = 0 \text{ or } 11k$ |
| Product of two numbers | $LCM(a, b) \times GCD(a, b) = a \times b$ |
| Number of factors of $N = p^a q^b r^c$ | $(a+1)(b+1)(c+1)$ where $p, q, r$ are prime factors |

## ✍️ Worked Examples (Step-by-Step)

### Example 1:
**Question**: Find the unit digit of $2023^{401} \times 2024^{402}$.

**Solution**:
Step 1: Simplify bases to their unit digits. We need the unit digit of $3^{401} \times 4^{402}$.
Step 2: Check cyclicity of 3. The cyclicity of 3 is 4 ($3^1=3, 3^2=9, 3^3=7, 3^4=1$). Divide power 401 by 4: remainder is 1. Thus, unit digit of $3^{401}$ is $3^1 = 3$.
Step 3: Check cyclicity of 4. $4^{\text{odd}} \to 4$, $4^{\text{even}} \to 6$. Since 402 is even, the unit digit of $4^{402}$ is 6.
Step 4: Multiply unit digits: $3 \times 6 = 18$. The unit digit is 8.

### Example 2:
**Question**: What is the remainder when $7^{105}$ is divided by 48?

**Solution**:
Step 1: Express 7 in terms of 48. Notice that $7^2 = 49 = 48 + 1$.
Step 2: Rewrite the expression: $7^{105} = 7 \times (7^2)^{52} = 7 \times 49^{52}$.
Step 3: Use modular arithmetic: $49 \equiv 1 \pmod{48}$.
Step 4: Remainder = $7 \times (1)^{52} = 7 \times 1 = 7$.

### Example 3:
**Question**: Two numbers are in the ratio 3:4. If their LCM is 240, find their HCF and the numbers.

**Solution**:
Step 1: Let the numbers be $3x$ and $4x$, where $x$ is their HCF.
Step 2: The LCM of $3x$ and $4x$ is $3 \times 4 \times x = 12x$.
Step 3: Given $12x = 240 \implies x = 20$.
Step 4: HCF is 20. The numbers are $3(20) = 60$ and $4(20) = 80$.

## ⚠️ Common Mistakes

❌ **Pitfall**: Candidates often confuse the cyclicity of 4 and 9 (which is 2) with other numbers (which is 4). Remember that powers of 4 and 9 toggle based on whether the exponent is odd or even, saving calculation time. Another common mistake is dividing by LCM instead of HCF in grouping problems.

## 💡 Shortcut / Vedic Trick

🔥 **Vedic Shortcut**: To find the number of zeros at the end of $N!$, divide $N$ repeatedly by 5 and sum the quotients. Example: Zeros in $100! = 100/5 + 20/5 = 20 + 4 = 24$ zeros.

## 🔗 Relation to Other Topics

💡 Directly linked to Simplify Expressions, Algebra, and Pattern Coding problems. Divisibility logic is crucial for Sieve of Eratosthenes and GCD/LCM algorithms.

## 🔗 PYQ Link

Check out past year questions on this topic: [Previous Year Questions](pyq.md)
