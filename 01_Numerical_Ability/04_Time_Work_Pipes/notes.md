# 📝 Time & Work / Pipes & Cisterns - Concept & Shortcuts

> **Concept Definition**:
> Time and Work relates the rate of working to the total time taken and progress completed. Pipes & Cisterns operates on the same mathematical foundation, where inlet pipes perform positive work and outlet pipes (leaks) perform negative work.

## 📊 Formula / Trick Table

| Concept / Formula | Mathematical Expression |
| :--- | :--- |
| Basic Work Equation | $Work = Rate \times Time$ |
| Individual Rates Combined | If A takes $x$ days and B takes $y$ days, together they take $\frac{xy}{x+y}$ days. |
| Chain Rule (Men-Days) | $\frac{M_1 D_1 H_1}{W_1} = \frac{M_2 D_2 H_2}{W_2}$ where $M$ = men, $D$ = days, $H$ = hours, $W$ = work. |
| Pipes with Leaks | Net Rate = $\frac{1}{\text{Inlet}} - \frac{1}{\text{Outlet}}$ |

## ✍️ Worked Examples (Step-by-Step)

### Example 1:
**Question**: A can complete a work in 12 days and B in 18 days. If they work together, how many days will they take?

**Solution**:
Step 1: Find total work using LCM of 12 and 18, which is 36 units.
Step 2: Find efficiencies: A's efficiency = 36 / 12 = 3 units/day. B's efficiency = 36 / 18 = 2 units/day.
Step 3: Combined efficiency = $3 + 2 = 5$ units/day.
Step 4: Time taken together = Total Work / Combined Efficiency = 36 / 5 = 7.2 days.

### Example 2:
**Question**: Pipe A can fill a tank in 10 hours and Pipe B can empty it in 15 hours. If both are opened together, how long will it take to fill the tank?

**Solution**:
Step 1: Let the capacity of the tank be LCM of 10 and 15, which is 30 units.
Step 2: Pipe A rate = +3 units/hour. Pipe B rate = -2 units/hour (emptying).
Step 3: Net rate when both are open = $+3 - 2 = +1$ unit/hour.
Step 4: Time to fill the tank = 30 / 1 = 30 hours.

### Example 3:
**Question**: If 12 men can build a wall in 8 days, how many days will it take 8 men to build the same wall?

**Solution**:
Step 1: Use the Men-Days formula: $M_1 \times D_1 = M_2 \times D_2$.
Step 2: $12 \times 8 = 8 \times D_2$.
Step 3: $D_2 = 12$ days.
Step 4: It will take 12 days.

## ⚠️ Common Mistakes

❌ **Pitfall**: Students often add individual times directly (e.g. thinking A and B together will take $12 + 18 = 30$ days). Times can never be added; only rates (efficiencies) can be added.

## 💡 Shortcut / Vedic Trick

🔥 **Vedic Shortcut**: The LCM Method: Instead of fractional work ($1/x$), assume a total work equal to the LCM of all time durations. This makes all rates integers and avoids fractions completely.

## 🔗 Relation to Other Topics

💡 Corresponds to Time, Speed, and Distance (concept of rates) and is coded in algorithms involving parallel processing, scheduling, and job queues.

## 🔗 PYQ Link

Check out past year questions on this topic: [Previous Year Questions](pyq.md)
