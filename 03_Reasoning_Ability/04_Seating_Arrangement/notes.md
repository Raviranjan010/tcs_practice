# 📝 Seating Arrangement - Concept & Short Tricks

> **Concept Definition**:
> Seating Arrangement tests your ability to place individuals in specific linear rows or circular groups based on positioning hints.

## 📊 Key Logic / Concept Table

| Reasoning Concept | Analytical Rule |
| :--- | :--- |
| Circular Facing In | Clockwise is Left; Counter-clockwise is Right. |
| Linear Arrangement | Left/Right are absolute to your body sides unless specified facing South. |

## ✍️ Worked Examples (Step-by-Step)

### Example 1:
**Question**: Five friends A, B, C, D, E are sitting in a row facing North. A is to the immediate right of B. C is between D and E. If B is to the immediate left of D, who is sitting in the middle?

**Solution**:
Step 1: Use clues. 'A is right of B' -> BA.
Step 2: 'B is left of D' -> BDA. (Combine: BDA).
Step 3: 'C is between D and E'. Since we have BDA, let's place C on the right: B D C E or E C D. Let's trace: 'B is to the immediate left of D'. So we have B, D in that order. A is right of B (so B, A). C is between D and E. If we place them: B A D C E? Let's check A's right of B. Yes. B left of D. Yes. C between D and E. Yes. Middle person is D or A. Let's arrange: B, A, D, C, E. Yes, D is in the middle.

### Example 2:
**Question**: A, B, C, D are sitting in a circle facing the center. A is opposite to C. B is to the right of A. Who is to the right of C?

**Solution**:
Step 1: Draw circle with 4 positions.
Step 2: Place A at bottom (6 o'clock). C must be at top (12 o'clock).
Step 3: B is right of A (9 o'clock position). D must fill remaining spot (3 o'clock).
Step 4: Looking at C (facing center, looking down): right of C is D. Answer: D.

### Example 3:
**Question**: Six people are in a line. P is next to Q, R is next to S, T is in the middle. Find their relative positions.

**Solution**:
Step 1: Use relative hints to build small groups first (PQ, RS).
Step 2: Fit them around fixed elements (like T in middle).
Step 3: Resolve based on remaining cues.

## ⚠️ Common Mistakes

❌ **Pitfall**: Mixing up clockwise/counter-clockwise directions when people face outward. Always put yourself in their position.

## 💡 Clue / Shortcut Trick

🔥 **Shortcut**: Start with the 'fixed' clues (e.g. 'A sits third to the right of B') and avoid clues that have multiple possibilities (e.g. 'A sits next to B') until the end.

## 🔗 Relation to Other Topics

💡 Corresponds to graph structures and circular queue representations in memory management.

## 🔗 PYQ Link

Check out past year questions on this topic: [Previous Year Questions](pyq.md)
