# 🔢 Advanced Number Theory

Advanced Number Theory covers modulo arithmetic, Euler's totient theorem, and Fermat's Little Theorem, which are essential for solving prime-level quant questions.

---

## 📊 Key Formulas

| Concept | Theorem Statement | Formula / Example |
| :--- | :--- | :--- |
| **Euler's Totient $\phi(N)$** | Number of positive integers up to $N$ coprime to $N$. | $\phi(N) = N \left(1 - \frac{1}{p_1}\right)\left(1 - \frac{1}{p_2}\right)$ |
| **Euler's Theorem** | If $a$ and $n$ are coprime, then $a^{\phi(n)} \equiv 1 \pmod n$. | $7^{20} \equiv 1 \pmod{25}$ (since $\phi(25) = 20$) |
| **Fermat's Little Theorem** | If $p$ is a prime and $a$ is not divisible by $p$, then $a^{p-1} \equiv 1 \pmod p$. | $3^{16} \equiv 1 \pmod{17}$ |

---

## ✍️ Worked Example (Fermat's Little Theorem)

**Question**: Find the remainder when $2^{100}$ is divided by 101.

**Solution**:
1. Identify divisor: 101 is a prime number.
2. Apply Fermat's Little Theorem: Since 101 is prime and 2 is coprime to 101:
   $$2^{100} \equiv 1 \pmod{101}$$
3. Answer: The remainder is 1.

---

## ⚠️ Common Mistakes
* **Non-coprime Bases**: Applying Euler's theorem when the base and divisor are not coprime. For example, applying it to $5^{20} \pmod{10}$ is incorrect because $\text{GCD}(5, 10) = 5 \neq 1$.
