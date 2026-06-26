# 📝 Puzzles - Concept & Short Tricks

> **Concept Definition**:
> Puzzles challenge your spatial, logical, and relational deduction. You must match multi-dimensional grids (e.g. name, color, city, car) based on complex constraints.

## 📊 Key Logic / Concept Table

| Reasoning Concept | Analytical Rule |
| :--- | :--- |
| Grid Representation | Create a matrix with columns representing variables and tick/cross to eliminate combinations. |
| Constraint Checklist | Read all clues once to write down 'negative clues' (e.g., 'A is not from Mumbai') next to the grid. |

## ✍️ Worked Examples (Step-by-Step)

### Example 1:
**Question**: A, B, C are from Delhi, Mumbai, Kolkata. One is a doctor, one a teacher, one an engineer. A is not a doctor. The one from Delhi is a teacher. C is from Kolkata and is not an engineer. Match them.

**Solution**:
Step 1: Build grid. C is from Kolkata. Since C is not an engineer, and the Delhi person is a teacher, C cannot be a teacher (since C is from Kolkata). So C must be the Doctor.
Step 2: A is not a doctor. Since C is the doctor, A must be the Teacher or Engineer. Since A is not a doctor, A can be teacher or engineer. C is the doctor from Kolkata. The Delhi person is the teacher. So A must be from Delhi and be the Teacher. 
Step 3: This leaves B to be the Engineer from Mumbai.
Step 4: Match: A-Delhi-Teacher, B-Mumbai-Engineer, C-Kolkata-Doctor.

### Example 2:
**Question**: Who is the Doctor?

**Solution**:
Step 1: Check the grid derived above.
Step 2: C is the Doctor.

### Example 3:
**Question**: Where is the Engineer from?

**Solution**:
Step 1: Check the grid derived above.
Step 2: B is the Engineer, and he is from Mumbai.

## ⚠️ Common Mistakes

❌ **Pitfall**: Making assumptions too early. If a clue says 'A sits next to B', do not place them on your grid until you have a fixed anchor that locks their absolute positions.

## 💡 Clue / Shortcut Trick

🔥 **Shortcut**: Start with the most restricted variable (the one mentioned in the most clues). It narrows down options instantly.

## 🔗 Relation to Other Topics

💡 Directly related to backtracking algorithms, constraint satisfaction solvers, and recursive path searches.

## 🔗 PYQ Link

Check out past year questions on this topic: [Previous Year Questions](pyq.md)
