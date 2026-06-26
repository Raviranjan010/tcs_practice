# 📝 Probability - Concept & Shortcuts

> **Concept Definition**:
> Probability measures the likelihood of an event occurring, calculated as the ratio of favorable outcomes to the total number of possible outcomes in a sample space.

## 📊 Formula / Trick Table

| Concept / Formula | Mathematical Expression |
| :--- | :--- |
| Probability of Event E | $P(E) = \frac{n(E)}{n(S)}$ where $n(E)$ is favorable, $n(S)$ is total outcomes. |
| Addition Theorem | $P(A \cup B) = P(A) + P(B) - P(A \cap B)$ |
| Conditional Probability | $P(A|B) = \frac{P(A \cap B)}{P(B)}$ |
| Complement Rule | $P(E') = 1 - P(E)$ |

## ✍️ Worked Examples (Step-by-Step)

### Example 1:
**Question**: Three coins are tossed simultaneously. What is the probability of getting at least two heads?

**Solution**:
Step 1: Sample space $S$ = {{HHH, HHT, HTH, HTT, THH, THT, TTH, TTT}}. $n(S) = 2^3 = 8$.
Step 2: Favorable outcomes for 'at least two heads' ($E$) = {{HHH, HHT, HTH, THH}}. $n(E) = 4$.
Step 3: $P(E) = n(E) / n(S) = 4 / 8 = 1/2$.
Step 4: The probability is 1/2.

### Example 2:
**Question**: A card is drawn from a pack of 52 cards. What is the probability that it is a king or a club?

**Solution**:
Step 1: Total cards $n(S) = 52$.
Step 2: Kings in pack $n(K) = 4$. Clubs in pack $n(C) = 13$.
Step 3: King of clubs $n(K \cap C) = 1$.
Step 4: $P(K \cup C) = P(K) + P(C) - P(K \cap C) = \frac{4}{52} + \frac{13}{52} - \frac{1}{52} = \frac{16}{52} = \frac{4}{13}$.

### Example 3:
**Question**: A bag contains 5 red and 7 blue balls. If two balls are drawn at random, what is the probability that they are of different colors?

**Solution**:
Step 1: Total balls = 12. Ways to draw 2 balls = $^{12}C_2 = \frac{12 \times 11}{2} = 66$.
Step 2: Favorable ways (1 Red AND 1 Blue) = $^5C_1 \times ^7C_1 = 5 \times 7 = 35$.
Step 3: Probability = 35 / 66.
Step 4: The probability is 35/66.

## ⚠️ Common Mistakes

❌ **Pitfall**: In 'at least' probability questions, candidates often try to list all positive cases, which is prone to omission. Instead, calculate the probability of the opposite case (e.g. 'none' or 'at most one') and subtract it from 1.

## 💡 Shortcut / Vedic Trick

🔥 **Vedic Shortcut**: For coin toss problems, the sample space size is always $2^n$. Use Pascal's Triangle to quickly find combinations of heads/tails.

## 🔗 Relation to Other Topics

💡 Pre-requisite for Machine Learning theory, randomized algorithms, and advanced probability distributions (Bayes' Theorem).

## 🔗 PYQ Link

Check out past year questions on this topic: [Previous Year Questions](pyq.md)
