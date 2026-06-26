# 📝 Pseudo Code - Concept & Rules

> **Concept Definition**:
> Pseudocode is an informal high-level description of programming steps. TCS NQT tests your ability to dry-run loops, conditionals, and bitwise logic in pseudocode.

## 📊 Key Logic / Concept Table

| Concept / Pattern | Meaning / Expression |
| :--- | :--- |
| Bitwise XOR Rule | $x \wedge x = 0$, $x \wedge 0 = x$ |
| Modulo Arithmetic | $x \% y$ gives the remainder of division. |

## ✍️ Worked Examples (Step-by-Step)

### Example 1:
**Question**: What is the output of the following pseudocode?
Integer a, b, c
a = 5, b = 10, c = 2
a = a ^ b
b = a ^ b
a = a ^ b
print a, b

**Solution**:
Step 1: Analyze sequence of XOR operations. This is a standard XOR swap pattern.
Step 2: $a = 5 \wedge 10 = 15$. Then $b = 15 \wedge 10 = 5$. Then $a = 15 \wedge 5 = 10$.
Step 3: Value of $a$ becomes 10, $b$ becomes 5.
Step 4: Answer: 10, 5.

### Example 2:
**Question**: Trace the loop: 
Integer x = 1
while (x < 5)
  x = x + 2
end while
print x

**Solution**:
Step 1: Init $x = 1$. Loop check $1 < 5$ is True.
Step 2: Cycle 1: $x = 1 + 2 = 3$. Loop check $3 < 5$ is True.
Step 3: Cycle 2: $x = 3 + 2 = 5$. Loop check $5 < 5$ is False.
Step 4: Output is 5.

### Example 3:
**Question**: Evaluate: $12 \& 7$.

**Solution**:
Step 1: Write in binary: $12 = 1100_2$, $7 = 0111_2$.
Step 2: Bitwise AND: $1100_2 \& 0111_2 = 0100_2$.
Step 3: Convert $0100_2$ back to decimal: 4.
Step 4: Answer is 4.

## ⚠️ Common Mistakes

❌ **Pitfall**: Confusing logical operators (`&&`, `||`) with bitwise operators (`&`, `|`). Logical operators return boolean True/False; bitwise operators operate on bits.

## 💡 Clue / Shortcut Trick

🔥 **Shortcut**: XORing any number with itself yields 0. XORing with 0 preserves the number.

## 🔗 Relation to Other Topics

💡 Essential for debugging compiler logs and dry-running backend algorithms.

## 🔗 PYQ Link

Check out past year questions on this topic: [Previous Year Questions](pyq.md)
