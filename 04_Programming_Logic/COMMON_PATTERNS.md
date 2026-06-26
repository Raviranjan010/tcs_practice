# 💻 Programming Logic Common Patterns

This sheet details standard pseudocode notation, flowchart symbols, and common bitwise tricks used in the TCS NQT.

---

## 📐 Flowchart Symbols Table

| Symbol Shape | Name | Function in Flowchart |
| :---: | :--- | :--- |
| **Oval** | Start / End | Denotes the entry and exit points of the algorithm. |
| **Parallelogram** | Input / Output | Represents reading inputs or printing outputs to screen. |
| **Rectangle** | Process | Represents calculations, variable assignments, or database updates. |
| **Diamond** | Decision / Condition | Represents boolean statements leading to True/False branches. |
| **Arrows** | Flow Line | Indicates the execution path of the process. |

---

## 🔢 Bitwise Operations Cheat Sheet

* **AND (`&`)**: Returns 1 if both bits are 1. (e.g., $5 \& 3 = 101_2 \& 011_2 = 001_2 = 1$).
* **OR (`|`)**: Returns 1 if at least one bit is 1. (e.g., $5 | 3 = 101_2 | 011_2 = 111_2 = 7$).
* **XOR (`^`)**: Returns 1 if bits are different. (e.g., $5 \wedge 3 = 101_2 \wedge 011_2 = 110_2 = 6$).
* **Left Shift (`<<`)**: Multiplies by $2^{\text{shift}}$. (e.g., $5 \ll 1 = 10$).
* **Right Shift (`>>`)**: Divides by $2^{\text{shift}}$ (integer division). (e.g., $5 \gg 1 = 2$).

### ⚡ XOR Magic Properties
* $A \wedge A = 0$
* $A \wedge 0 = A$
* $A \wedge B = B \wedge A$

---

## 🔄 Standard Pseudocode Structure

TCS NQT often uses pseudo-syntax similar to this:
```text
Integer x, y, z
x = 5
y = 10
z = x & y
if (z > 2)
    print x + y
else
    print x - y
end if
```
