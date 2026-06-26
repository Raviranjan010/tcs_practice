# 📝 Logarithms - Concept & Shortcuts

> **Concept Definition**:
> Logarithms represent the inverse operation of exponentiation. The logarithm of a number is the exponent to which another fixed number (the base) must be raised to produce that number.

## 📊 Formula / Trick Table

| Concept / Formula | Mathematical Expression |
| :--- | :--- |
| Product Rule | $\log_b(xy) = \log_b(x) + \log_b(y)$ |
| Quotient Rule | $\log_b(x/y) = \log_b(x) - \log_b(y)$ |
| Power Rule | $\log_b(x^k) = k \log_b(x)$ |
| Change of Base Rule | $\log_b(x) = \frac{\log_a(x)}{\log_a(b)}$ |
| Identity Rule | $\log_b(b) = 1$, $\log_b(1) = 0$ |
| Exponential form | $\log_b(x) = y \iff b^y = x$ |

## ✍️ Worked Examples (Step-by-Step)

### Example 1:
**Question**: Evaluate: $\log_2 64$.

**Solution**:
Step 1: Let $\log_2 64 = x$.
Step 2: Convert to exponential form: $2^x = 64$.
Step 3: Since $64 = 2^6$, we have $2^x = 2^6$.
Step 4: Therefore, $x = 6$.

### Example 2:
**Question**: If $\log_2 x + \log_2 (x-2) = 3$, find the value of $x$.

**Solution**:
Step 1: Apply product rule: $\log_2 [x(x-2)] = 3$.
Step 2: Convert to exponential form: $x(x-2) = 2^3 = 8$.
Step 3: $x^2 - 2x - 8 = 0 \implies (x-4)(x+2) = 0$.
Step 4: Since log is defined only for positive numbers, $x = 4$ (discarding $x = -2$).

### Example 3:
**Question**: Simplify: $\log 5 + \log 20$.

**Solution**:
Step 1: The base is assumed to be 10.
Step 2: Apply product rule: $\log_{10} 5 + \log_{10} 20 = \log_{10} (5 \times 20)$.
Step 3: $\log_{10} 100 = \log_{10} 10^2 = 2 \log_{10} 10 = 2 \times 1 = 2$.
Step 4: The value is 2.

## ⚠️ Common Mistakes

❌ **Pitfall**: Students frequently apply logarithmic properties incorrectly, such as thinking $\log(x+y) = \log x + \log y$. Remember that $\log(x+y)$ cannot be simplified this way; it is $\log(xy) = \log x + \log y$. Also, base checks are critical.

## 💡 Shortcut / Vedic Trick

🔥 **Vedic Shortcut**: To find the number of digits in $a^b$, calculate $D = \lfloor b \log_{10} a \rfloor + 1$. Useful in large-power arithmetic.

## 🔗 Relation to Other Topics

💡 Fundamental for analyzing algorithm time complexity ($O(\log n)$), binary search algorithms, and divide-and-conquer strategies.

## 🔗 PYQ Link

Check out past year questions on this topic: [Previous Year Questions](pyq.md)
