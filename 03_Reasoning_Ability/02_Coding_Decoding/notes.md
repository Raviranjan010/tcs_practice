# 📝 Coding & Decoding - Concept & Short Tricks

> **Concept Definition**:
> Coding & Decoding tests your ability to decipher the rules governing code strings. Sentences, words, or numbers are mapped to alternates using structured rules.

## 📊 Key Logic / Concept Table

| Reasoning Concept | Analytical Rule |
| :--- | :--- |
| A-Z Numerical Positions | A=1, B=2 ... Z=26. (Remember EJOTY: E=5, J=10, O=15, T=20, Y=25) |
| Reverse Pairs | A <-> Z, B <-> Y (Sum of positions is always 27). |

## ✍️ Worked Examples (Step-by-Step)

### Example 1:
**Question**: If 'HELLO' is coded as 'IFMMP', how is 'WORLD' coded?

**Solution**:
Step 1: Check pattern of HELLO -> IFMMP. H+1=I, E+1=F, L+1=M, L+1=M, O+1=P.
Step 2: The pattern is simple +1 shifting.
Step 3: Apply to WORLD: W+1=X, O+1=P, R+1=S, L+1=M, D+1=E.
Step 4: Coded word is XPSME.

### Example 2:
**Question**: If 'CAT' is coded as 24, how is 'SAD' coded?

**Solution**:
Step 1: Sum the positions of letters in CAT. C=3, A=1, T=20. Sum = 3+1+20 = 24.
Step 2: Apply to SAD. S=19, A=1, D=4.
Step 3: Sum = 19+1+4 = 24.

### Example 3:
**Question**: In a code, 'sky is blue' is '1 2 3', 'blue is good' is '3 2 4'. What is the code for 'sky'?

**Solution**:
Step 1: Find common words. 'is blue' is common. Common numbers are '2 3'.
Step 2: From the first sentence, 'sky' must be mapped to '1'.
Step 3: Answer: 1.

## ⚠️ Common Mistakes

❌ **Pitfall**: Forgetting that letter positions wrap around (Z + 1 = A; A - 1 = Z).

## 💡 Clue / Shortcut Trick

🔥 **Shortcut**: Write the alphabet with positions on your rough sheet during the initial login time to avoid recalculating mid-exam.

## 🔗 Relation to Other Topics

💡 Directly related to cryptography algorithms, hashing functions, and Caesar cipher coding tasks.

## 🔗 PYQ Link

Check out past year questions on this topic: [Previous Year Questions](pyq.md)
