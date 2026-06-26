# 🎲 Advanced Probability

Advanced Probability expands on basic probability, introducing conditional probability systems (Bayes' Theorem) and discrete distributions.

---

## 📊 Formulas & Probability Systems

| Probability Concept | Formula Expression |
| :--- | :--- |
| **Conditional Probability** | $P(A|B) = \frac{P(A \cap B)}{P(B)}$ |
| **Bayes' Theorem** | $P(E_i|A) = \frac{P(E_i)P(A|E_i)}{\sum P(E_j)P(A|E_j)}$ |
| **Binomial Distribution** | $P(X = k) = \binom{n}{k} p^k (1-p)^{n-k}$ |

---

## ✍️ Worked Example (Bayes' Theorem)

**Question**: A bag A contains 3 red and 5 black balls. Bag B contains 5 red and 3 black balls. A bag is selected at random and a ball is drawn. If the ball drawn is red, find the probability that it was drawn from Bag A.

**Solution**:
1. Let $E_1$ be selecting Bag A, $E_2$ be selecting Bag B. $P(E_1) = P(E_2) = 1/2$.
2. Let $R$ be drawing a red ball.
   - $P(R|E_1) = 3/8$
   - $P(R|E_2) = 5/8$
3. Apply Bayes' Theorem:
   $$P(E_1|R) = \frac{P(E_1)P(R|E_1)}{P(E_1)P(R|E_1) + P(E_2)P(R|E_2)} = \frac{\frac{1}{2} \times \frac{3}{8}}{\frac{1}{2} \times \frac{3}{8} + \frac{1}{2} \times \frac{5}{8}} = \frac{3}{8} \times \frac{8}{8} = \frac{3}{8}$$
4. Answer: Probability is 3/8 (0.375).
