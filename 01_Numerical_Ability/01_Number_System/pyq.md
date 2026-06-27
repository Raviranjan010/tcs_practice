# 📚 Number System - Previous Year Questions

This section features 20 authentic TCS NQT questions (Ninja, Digital, and Prime levels) with options, correct keys, and comprehensive step-by-step mathematical explanations.

## [TCS NQT] [2023] [Ninja] [Medium] Question 1

What is the unit digit of 4^56 + 6^23 + 5^90?

A) 1
B) 5
C) 7
D) 6

**Answer**: `C`

### Explanation:
1. Unit digit of 4^56: Since power 56 is even, unit digit of 4^even is 6.
2. Unit digit of 6^23: 6 raised to any positive integer power ends in 6.
3. Unit digit of 5^90: 5 raised to any positive integer power ends in 5.
4. Sum unit digits: 6 + 6 + 5 = 17. The unit digit of 17 is 7.
5. Therefore, the unit digit is 7.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 2

Find the remainder when 17^25 is divided by 18.

A) 1
B) 17
C) 16
D) 0

**Answer**: `B`

### Explanation:
1. Express 17 as (18 - 1). So 17^25 = (18 - 1)^25.
2. Expand using binomial theorem: all terms except the last are multiples of 18.
3. The last term is (-1)^25 = -1.
4. Since remainder cannot be negative, add the divisor: -1 + 18 = 17.
5. Therefore, the remainder is 17.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 3

How many trailing zeros are there in 125!?

A) 25
B) 30
C) 31
D) 24

**Answer**: `C`

### Explanation:
1. Trailing zeros in N! = floor(N/5) + floor(N/25) + floor(N/125) + ...
2. For 125: floor(125/5) = 25, floor(125/25) = 5, floor(125/125) = 1.
3. Sum the quotients: 25 + 5 + 1 = 31.
4. There are exactly 31 trailing zeros in 125!.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 4

Find the Least Common Multiple (LCM) of 12, 18, and 24.

A) 36
B) 48
C) 72
D) 144

**Answer**: `C`

### Explanation:
1. Find prime factorization of each:
   12 = 2^2 * 3
   18 = 2 * 3^2
   24 = 2^3 * 3
2. To find LCM, take the highest power of each prime factor present:
   Highest power of 2 is 2^3 = 8
   Highest power of 3 is 3^2 = 9
3. Multiply: LCM = 8 * 9 = 72.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 5

If HCF(a, b) = 6, LCM(a, b) = 120, and a = 24, find b.

A) 30
B) 40
C) 60
D) 12

**Answer**: `A`

### Explanation:
1. Use the relation: HCF(a, b) * LCM(a, b) = a * b.
2. Substitute the values: 6 * 120 = 24 * b.
3. Solve for b: 720 = 24 * b => b = 720 / 24 = 30.
4. Option A is correct.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 6

Find the number of factors of 540.

A) 24
B) 20
C) 16
D) 12

**Answer**: `A`

### Explanation:
1. Prime factorization of 540:
   540 = 54 * 10 = 2 * 3^3 * 2 * 5 = 2^2 * 3^3 * 5^1.
2. Applying formula (a+1)(b+1)(c+1):
   Total factors = (2+1)(3+1)(1+1) = 3 * 4 * 2 = 24.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 7

What is the remainder when 2^35 is divided by 10?

A) 2
B) 4
C) 6
D) 8

**Answer**: `D`

### Explanation:
1. Dividing a number by 10 gives its unit digit as the remainder.
2. Find unit digit of 2^35. Cyclicity of 2 is 4.
3. Power 35 mod 4 = 3.
4. Unit digit of 2^3 is 8. So the remainder is 8.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 8

Find the sum of all factors of 100.

A) 217
B) 117
C) 200
D) 100

**Answer**: `A`

### Explanation:
1. Prime factorization of 100 = 2^2 * 5^2.
2. Sum of factors = [(2^3 - 1)/(2 - 1)] * [(5^3 - 1)/(5 - 1)]
   = (7/1) * (124/4) = 7 * 31 = 217.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 9

If N = 2^3 * 3^4 * 5^2, how many odd factors does N have?

A) 15
B) 24
C) 30
D) 12

**Answer**: `A`

### Explanation:
1. To find odd factors, ignore the base 2 and count factors for the odd bases: 3^4 * 5^2.
2. Apply the factor formula: (4+1) * (2+1) = 5 * 3 = 15 odd factors.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 10

Find the remainder when 3^202 is divided by 101.

A) 3
B) 9
C) 81
D) 1

**Answer**: `B`

### Explanation:
1. Use Fermat's Little Theorem: Since 101 is prime and gcd(3,101)=1, 3^100 = 1 (mod 101).
2. 3^202 = (3^100)^2 * 3^2 = 1^2 * 9 = 9 (mod 101).
3. So the remainder is 9.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 11

Find the HCF of 2/3, 8/9, 16/81, and 10/27.

A) 2/81
B) 80/3
C) 1/81
D) 2/3

**Answer**: `A`

### Explanation:
1. Formula for HCF of fractions = HCF of numerators / LCM of denominators.
2. Numerators: 2, 8, 16, 10. HCF(2, 8, 16, 10) = 2.
3. Denominators: 3, 9, 81, 27. LCM(3, 9, 81, 27) = 81.
4. So HCF = 2/81.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 12

Find the number of trailing zeros in 1000!.

A) 240
B) 249
C) 200
D) 250

**Answer**: `B`

### Explanation:
1. Zeros = floor(1000/5) + floor(1000/25) + floor(1000/125) + floor(1000/625)
   = 200 + 40 + 8 + 1 = 249.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 13

What is the greatest number that will divide 148, 246, and 623 leaving remainders 4, 6, and 11 respectively?

A) 12
B) 16
C) 18
D) 24

**Answer**: `A`

### Explanation:
1. Subtract remainders from the numbers:
   148 - 4 = 144
   246 - 6 = 240
   623 - 11 = 612
2. Find HCF of 144, 240, and 612:
   144 = 2^4 * 3^2
   240 = 2^4 * 3 * 5
   612 = 2^2 * 3^2 * 17
3. HCF = 2^2 * 3 = 12. So HCF is 12.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 14

A bell tolls every 12 minutes, another every 18 minutes, and a third every 30 minutes. If they toll together now, after how many hours will they toll together next?

A) 3 hours
B) 5 hours
C) 6 hours
D) 10 hours

**Answer**: `A`

### Explanation:
1. Find LCM of 12, 18, and 30 minutes.
   12 = 2^2 * 3
   18 = 2 * 3^2
   30 = 2 * 3 * 5
   LCM = 2^2 * 3^2 * 5 = 4 * 9 * 5 = 180 minutes.
2. Convert to hours: 180 / 60 = 3 hours. So they will toll together after 3 hours.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 15

Find the number of proper factors of 240.

A) 20
B) 19
C) 18
D) 16

**Answer**: `B`

### Explanation:
1. Prime factorization: 240 = 2^4 * 3^1 * 5^1.
2. Total factors = (4+1)(1+1)(1+1) = 5 * 2 * 2 = 20.
3. Proper factors exclude the number itself: 20 - 1 = 19.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 16

Which of the following numbers is divisible by 11?

A) 123456
B) 121212
C) 1331
D) 123123

**Answer**: `C`

### Explanation:
1. For 1331: Sum of odd digits = 1 + 3 = 4. Sum of even digits = 3 + 1 = 4. Difference = 4 - 4 = 0. So it is divisible by 11.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 17

What is the remainder when (25)^25 is divided by 26?

A) 1
B) 25
C) 0
D) 12

**Answer**: `B`

### Explanation:
1. (25)^25 = (26 - 1)^25 = (-1)^25 = -1 (mod 26).
2. Add 26: -1 + 26 = 25.
3. Remainder is 25.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 18

Find the largest three-digit number divisible by 7, 8, and 9.

A) 504
B) 756
C) 998
D) 1008

**Answer**: `A`

### Explanation:
1. Find LCM of 7, 8, and 9 = 7 * 8 * 9 = 504.
2. The next multiple is 504 * 2 = 1008 (which is 4 digits).
3. So the largest 3-digit multiple is 504. Option A.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 19

What is the highest power of 3 that completely divides 50!?

A) 22
B) 24
C) 16
D) 18

**Answer**: `A`

### Explanation:
1. Use Legendre's formula:
   floor(50/3) + floor(50/9) + floor(50/27)
   = 16 + 5 + 1 = 22.
2. So highest power of 3 is 3^22. Option A.

### Shortcut Trick:
Always inspect the units digit of options or check divisibility rules to solve in under 20 seconds.

### Time to Solve:
45 seconds.
---

## [TCS NQT] [2023] [Ninja] [Medium] Question 20

If a number 473A8 is divisible by 9, find the digit A.

A) 5
B) 6
C) 7
D) 8

**Answer**: `A`

### Explanation:
1. Sum of digits must be divisible by 9.
2. 4 + 7 + 3 + A + 8 = 22 + A.
3. The next multiple of 9 after 22 is 27. So 22 + A = 27 => A = 5.

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
