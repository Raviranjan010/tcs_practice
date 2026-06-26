# 📝 Permutation & Combination - Concept & Shortcuts

> **Concept Definition**:
> Permutations refer to the arrangements of items where order matters. Combinations refer to the selection of items from a group where order does not matter.

## 📊 Formula / Trick Table

| Concept / Formula | Mathematical Expression |
| :--- | :--- |
| Permutations of n items taken r at a time | $^nP_r = \frac{n!}{(n-r)!}$ |
| Combinations of n items taken r at a time | $^nC_r = \frac{n!}{r!(n-r)!}$ |
| Permutations with repetitions | $P = \frac{n!}{p!q!r!}$ where $p,q,r$ are repetitions of identical items. |
| Circular Permutations | $P = (n-1)!$ |

## ✍️ Worked Examples (Step-by-Step)

### Example 1:
**Question**: In how many different ways can the letters of the word 'LEADING' be arranged so that the vowels always come together?

**Solution**:
Step 1: Identify vowels in 'LEADING': E, A, I. Consonants are L, D, N, G.
Step 2: Group the vowels as one entity: (EAI), L, D, N, G. Now we have 5 entities to arrange.
Step 3: Arrange 5 entities: $5! = 120$ ways.
Step 4: Arrange vowels inside the group: $3! = 6$ ways. Total arrangements = $120 \times 6 = 720$.

### Example 2:
**Question**: Out of 7 men and 10 women, a committee of 5 is to be formed. In how many ways can this be done if the committee must contain exactly 3 men?

**Solution**:
Step 1: Select 3 men out of 7: $^7C_3 = \frac{7 \times 6 \times 5}{3 \times 2 \times 1} = 35$ ways.
Step 2: Since committee needs 5, select 2 women out of 10: $^{10}C_2 = \frac{10 \times 9}{2 \times 1} = 45$ ways.
Step 3: Total ways = $35 \times 45 = 1575$.
Step 4: The number of ways is 1575.

### Example 3:
**Question**: How many 3-digit numbers can be formed from the digits 2, 3, 5, 6, 7, 9 if repetition of digits is not allowed?

**Solution**:
Step 1: Total digits available = 6. We need to choose and arrange 3 digits.
Step 2: Ways = $^6P_3 = \frac{6!}{(6-3)!} = 6 \times 5 \times 4 = 120$ ways.
Step 3: The number of ways is 120.

## ⚠️ Common Mistakes

❌ **Pitfall**: Students often fail to differentiate between permutation (arranging letters/seating) and combination (picking cards/forming committees). Remember: if swap changes the meaning, order matters (permutation).

## 💡 Shortcut / Vedic Trick

🔥 **Vedic Shortcut**: $^nC_r = ^nC_{n-r}$. Always calculate using the smaller index to save time (e.g. $^{100}C_{98} = ^{100}C_2 = (100 \times 99) / 2 = 4950$).

## 🔗 Relation to Other Topics

💡 Basis for probability, combinations optimization in dynamic programming, and brute-force backtracking search algorithms.

## 🔗 PYQ Link

Check out past year questions on this topic: [Previous Year Questions](pyq.md)
