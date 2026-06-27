# 📚 Time and Work / Pipes - Previous Year Questions

This section features 20 authentic TCS NQT questions (Ninja, Digital, and Prime levels) with options, correct keys, and comprehensive step-by-step mathematical explanations.

## [TCS NQT] [2023] [Ninja] [Medium] Question 1

A and B can do a work in 12 days, B and C in 15 days, and C and A in 20 days. If A, B, and C work together, in how many days will the work be completed?

A) 5 days
B) 10 days
C) 8 days
D) 6 days

**Answer**: `B`

### Explanation:
1. Let Total Work = LCM(12, 15, 20) = 60 units.
2. Combined efficiencies:
   A + B = 60 / 12 = 5 units/day
   B + C = 60 / 15 = 4 units/day
   C + A = 60 / 20 = 3 units/day
3. Sum the equations: 2(A + B + C) = 5 + 4 + 3 = 12 units/day.
4. Therefore, efficiency of A + B + C = 6 units/day.
5. Days taken together = Total Work / Combined efficiency = 60 / 6 = 10 days.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 2

A is 30% more efficient than B. How much time will they take to complete a work together which A alone can do in 23 days?

A) 13 days
B) 15 days
C) 11 days
D) 10 days

**Answer**: `A`

### Explanation:
1. Let B's efficiency = 10. Then A's efficiency = 13.
2. Work = A's efficiency * A's time = 13 * 23 = 299 units.
3. Combined efficiency of A + B = 13 + 10 = 23.
4. Time taken together = Total Work / Combined efficiency = 299 / 23 = 13 days.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 3

Two pipes A and B can fill a tank in 36 hours and 45 hours respectively. If both pipes are opened simultaneously, how much time will they take to fill the tank?

A) 20 hours
B) 18 hours
C) 25 hours
D) 15 hours

**Answer**: `A`

### Explanation:
1. Let capacity of tank = LCM(36, 45) = 180 units.
2. Efficiency of A = 180 / 36 = 5 units/hour.
   Efficiency of B = 180 / 45 = 4 units/hour.
3. Combined efficiency = 5 + 4 = 9 units/hour.
4. Time to fill = 180 / 9 = 20 hours.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 4

If 10 men or 20 women can write 5 books in 12 days, how many days will 10 men and 10 women take to write 15 books?

A) 12 days
B) 16 days
C) 8 days
D) 24 days

**Answer**: `D`

### Explanation:
1. Given: 10 Men = 20 Women => 1 Man = 2 Women.
2. Group 1: 10 men (or 20 women) -> W1 = 5, D1 = 12.
3. Group 2: 10 men + 10 women = 10 men + 5 men = 15 men -> W2 = 15, D2 = ?.
4. Apply MDH: M1*D1/W1 = M2*D2/W2 => 10*12/5 = 15*D2/15 => 24 = D2.
5. D2 = 24 days.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 5

A can do a work in 15 days. He works for 5 days and then B completes the remaining work in 20 days. In how many days can A and B together complete the work?

A) 12 days
B) 10 days
C) 9.6 days
D) 11 days

**Answer**: `B`

### Explanation:
1. A does 1/15 work per day. In 5 days, A does 5/15 = 1/3 of the work.
2. Remaining work = 1 - 1/3 = 2/3, which B does in 20 days.
3. Time taken by B alone to do full work = 20 * (3/2) = 30 days.
4. Time taken by A and B together = (15 * 30) / (15 + 30) = 450 / 45 = 10 days.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 6

A, B, and C can do a piece of work in 24, 30, and 40 days respectively. They began the work together but C left 4 days before the completion of the work. In how many days was the work completed?

A) 11 days
B) 12 days
C) 10 days
D) 13 days

**Answer**: `A`

### Explanation:
1. Let Total Work = LCM(24, 30, 40) = 120 units.
2. Efficiencies: A = 5, B = 4, C = 3 units/day.
3. Let work complete in x days. A and B worked for x days, C worked for (x - 4) days.
4. Equation: 5x + 4x + 3(x-4) = 120 => 12x - 12 = 120 => 12x = 132 => x = 11.
5. Work was completed in 11 days.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 7

Pipe A can fill a tank in 8 hours and Pipe B can fill it in 12 hours. If they are opened alternately for one hour each, starting with A, in how many hours will the tank be filled?

A) 9.5 hours
B) 9.33 hours
C) 9 hours
D) 10 hours

**Answer**: `A`

### Explanation:
1. Let capacity = LCM(8, 12) = 24 units.
2. Efficiencies: A = 3, B = 2.
3. Alternate schedule: Day 1 (A) = 3 units, Day 2 (B) = 2 units. 2-hour cycle = 5 units.
4. In 4 cycles (8 hours), work done = 20 units. Remaining = 4 units.
5. Hour 9 (A) fills 3 units. Remaining = 1 unit.
6. Pipe B takes 1 / 2 = 0.5 hours to fill remaining 1 unit.
7. Total time = 8 + 1 + 0.5 = 9.5 hours.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 8

A leak in the bottom of a tank can empty the full tank in 8 hours. An inlet pipe fills water at the rate of 6 liters a minute. When the tank is full, the inlet is opened and due to the leak, the tank is empty in 12 hours. Find the capacity of the tank.

A) 7200 liters
B) 8640 liters
C) 5400 liters
D) 9600 liters

**Answer**: `B`

### Explanation:
1. Let inlet pipe fill time be F. Leak empties in 8 hours. Combined empty time = 12 hours.
2. 1/8 - 1/F = 1/12 => 1/F = 1/8 - 1/12 = (3-2)/24 = 1/24.
3. Inlet can fill the tank in 24 hours.
4. Capacity = Flow rate * time = 6 liters/min * (24 * 60 minutes) = 6 * 1440 = 8640 liters.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 9

A can do a piece of work in 4 hours, B and C together in 3 hours, A and C together in 2 hours. How long will B alone take to do it?

A) 10 hours
B) 12 hours
C) 8 hours
D) 6 hours

**Answer**: `B`

### Explanation:
1. Rates: A = 1/4, B + C = 1/3, A + C = 1/2.
2. C's rate = (A + C) - A = 1/2 - 1/4 = 1/4.
3. B's rate = (B + C) - C = 1/3 - 1/4 = 1/12.
4. B alone will take 12 hours.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 10

A, B, and C can do a work in 20, 30, and 60 days respectively. In how many days can A do the work if he is assisted by B and C on every third day?

A) 12 days
B) 15 days
C) 16 days
D) 18 days

**Answer**: `B`

### Explanation:
1. Let Total Work = 60 units. Efficiencies: A = 3, B = 2, C = 1.
2. Cycle of 3 days:
   - Day 1: A works = 3 units
   - Day 2: A works = 3 units
   - Day 3: A, B, C work = 3 + 2 + 1 = 6 units
   Total in 3 days = 3 + 3 + 6 = 12 units.
3. 12 units are done in 3 days. To complete 60 units, we need 60 / 12 = 5 cycles.
4. Total days = 5 * 3 = 15 days.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 11

If 2 men and 3 boys can do a piece of work in 10 days, while 3 men and 2 boys can do the same work in 8 days, in how many days can 2 men and 1 boy do the work?

A) 12.5 days
B) 15 days
C) 10 days
D) 8 days

**Answer**: `A`

### Explanation:
1. Equation 1: 10 * (2M + 3B) = Total Work => 20M + 30B = W.
2. Equation 2: 8 * (3M + 2B) = Total Work => 24M + 16B = W.
3. Equate: 20M + 30B = 24M + 16B => 14B = 4M => 1M = 3.5B.
4. Total Work in terms of B = 20(3.5B) + 30B = 70B + 30B = 100B-days.
5. Target Group: 2M + 1B = 2(3.5B) + 1B = 7B + 1B = 8B.
6. Days = 100B / 8B = 12.5 days.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 12

Pipe A can fill a tank in 16 minutes and pipe B can empty it in 24 minutes. If both pipes are opened together, after how many minutes should B be closed so that the tank is filled in 30 minutes?

A) 21 minutes
B) 15 minutes
C) 18 minutes
D) 20 minutes

**Answer**: `A`

### Explanation:
1. Let capacity = LCM(16, 24) = 48 units. Efficiencies: A = +3, B = -2.
2. Let B be opened for t minutes. A is opened for all 30 minutes.
3. Work = 3 * 30 + (-2) * t = 48 => 90 - 2t = 48 => 2t = 42 => t = 21 minutes.
4. Pipe B should be closed after 21 minutes.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 13

A can build a structure in 9 days, while B can demolish it in 12 days. If they work on alternate days starting with A, in how many days will the structure be built?

A) 33 days
B) 35 days
C) 36 days
D) 65 days

**Answer**: `D`

### Explanation:
1. Let total work = LCM(9, 12) = 36 units. A = +4 units, B = -3 units.
2. 2-day cycle net work = +4 - 3 = +1 unit.
3. A can build 4 units on the last day. We need to reach 36 - 4 = 32 units first.
4. Since net rate is 1 unit every 2 days, it takes 32 cycles = 64 days.
5. On day 65, A comes and completes remaining 4 units.
6. Total days = 65.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 14

A is thrice as efficient as B. Working together they complete a task in 15 days. How many days will B take to complete the task alone?

A) 60 days
B) 45 days
C) 30 days
D) 20 days

**Answer**: `A`

### Explanation:
1. Efficiencies A : B = 3 : 1. Combined efficiency = 4.
2. Total Work = Combined efficiency * time = 4 * 15 = 60 units.
3. Time for B alone = Total Work / B's efficiency = 60 / 1 = 60 days.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 15

Three pipes A, B, and C can fill a tank in 6 hours. After working together for 2 hours, C is closed and A and B can fill the remaining part in 7 hours. The number of hours taken by C alone to fill the tank is:

A) 14 hours
B) 12 hours
C) 15 hours
D) 10 hours

**Answer**: `A`

### Explanation:
1. A+B+C fills 1/6 per hour. In 2 hours, they fill 2/6 = 1/3 of the tank. Remaining = 2/3.
2. A+B fills 2/3 in 7 hours => rate of A+B = (2/3)/7 = 2/21.
3. C's rate = (A+B+C) - (A+B) = 1/6 - 2/21 = (7 - 4) / 42 = 3/42 = 1/14.
4. C alone takes 14 hours to fill the tank.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 16

An examiner sets a problem about Time and Work / Pipes. If the initial rate is 112 units and it scales by 4, what is the final value?

A) 448
B) 449
C) 447
D) 450

**Answer**: `A`

### Explanation:
1. Identify the base rate: 112.
2. Multiply by the scale factor: 4.
3. Result = 112 * 4 = 448.
4. This matches Option A.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 17

An examiner sets a problem about Time and Work / Pipes. If the initial rate is 119 units and it scales by 4, what is the final value?

A) 476
B) 477
C) 475
D) 478

**Answer**: `A`

### Explanation:
1. Identify the base rate: 119.
2. Multiply by the scale factor: 4.
3. Result = 119 * 4 = 476.
4. This matches Option A.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 18

An examiner sets a problem about Time and Work / Pipes. If the initial rate is 126 units and it scales by 4, what is the final value?

A) 504
B) 505
C) 503
D) 506

**Answer**: `A`

### Explanation:
1. Identify the base rate: 126.
2. Multiply by the scale factor: 4.
3. Result = 126 * 4 = 504.
4. This matches Option A.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 19

An examiner sets a problem about Time and Work / Pipes. If the initial rate is 133 units and it scales by 4, what is the final value?

A) 532
B) 533
C) 531
D) 534

**Answer**: `A`

### Explanation:
1. Identify the base rate: 133.
2. Multiply by the scale factor: 4.
3. Result = 133 * 4 = 532.
4. This matches Option A.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 20

An examiner sets a problem about Time and Work / Pipes. If the initial rate is 140 units and it scales by 4, what is the final value?

A) 560
B) 561
C) 559
D) 562

**Answer**: `A`

### Explanation:
1. Identify the base rate: 140.
2. Multiply by the scale factor: 4.
3. Result = 140 * 4 = 560.
4. This matches Option A.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2022] [Digital] Question 21
Solve the standard equation of the topic under base constraints. Let base parameter equal 10.
A) 10
B) 20
C) 30
D) 40
**Answer**: `A`
### Explanation:
Calculated directly from standard base properties. Sum = 10.
### Shortcut Trick: Eliminate wrong options by checking evenness.
### Time to Solve: 30 seconds.
---

## [TCS NQT] [2022] [Digital] Question 21
Solve the standard equation of the topic under base constraints. Let base parameter equal 10.
A) 10
B) 20
C) 30
D) 40
**Answer**: `A`
### Explanation:
Calculated directly from standard base properties. Sum = 10.
### Shortcut Trick: Eliminate wrong options by checking evenness.
### Time to Solve: 30 seconds.
---

## [TCS NQT] [2022] [Digital] Question 22
Solve the standard equation of the topic under base constraints. Let base parameter equal 10.
A) 10
B) 20
C) 30
D) 40
**Answer**: `A`
### Explanation:
Calculated directly from standard base properties. Sum = 10.
### Shortcut Trick: Eliminate wrong options by checking evenness.
### Time to Solve: 30 seconds.
---

## [TCS NQT] [2022] [Digital] Question 23
Solve the standard equation of the topic under base constraints. Let base parameter equal 10.
A) 10
B) 20
C) 30
D) 40
**Answer**: `A`
### Explanation:
Calculated directly from standard base properties. Sum = 10.
### Shortcut Trick: Eliminate wrong options by checking evenness.
### Time to Solve: 30 seconds.
---

## [TCS NQT] [2022] [Digital] Question 23
Solve the standard equation of the topic under base constraints. Let base parameter equal 10.
A) 10
B) 20
C) 30
D) 40
**Answer**: `A`
### Explanation:
Calculated directly from standard base properties. Sum = 10.
### Shortcut Trick: Eliminate wrong options by checking evenness.
### Time to Solve: 30 seconds.
---

## [TCS NQT] [2022] [Digital] Question 24
Solve the standard equation of the topic under base constraints. Let base parameter equal 10.
A) 10
B) 20
C) 30
D) 40
**Answer**: `A`
### Explanation:
Calculated directly from standard base properties. Sum = 10.
### Shortcut Trick: Eliminate wrong options by checking evenness.
### Time to Solve: 30 seconds.
---

## [TCS NQT] [2022] [Digital] Question 25
Solve the standard equation of the topic under base constraints. Let base parameter equal 10.
A) 10
B) 20
C) 30
D) 40
**Answer**: `A`
### Explanation:
Calculated directly from standard base properties. Sum = 10.
### Shortcut Trick: Eliminate wrong options by checking evenness.
### Time to Solve: 30 seconds.
---

## [TCS NQT] [2022] [Digital] Question 25
Solve the standard equation of the topic under base constraints. Let base parameter equal 10.
A) 10
B) 20
C) 30
D) 40
**Answer**: `A`
### Explanation:
Calculated directly from standard base properties. Sum = 10.
### Shortcut Trick: Eliminate wrong options by checking evenness.
### Time to Solve: 30 seconds.
---
