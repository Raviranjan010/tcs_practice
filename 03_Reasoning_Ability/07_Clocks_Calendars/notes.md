# 📝 Clocks & Calendars - Concept & Short Tricks

> **Concept Definition**:
> Clocks and Calendars deals with cyclical arithmetic of hours/minutes and days/weeks.

## 📊 Key Logic / Concept Table

| Reasoning Concept | Analytical Rule |
| :--- | :--- |
| Angle between hands | $\theta = |30H - 5.5M|$ |
| Odd Days Rule | Odd Days = Total Days % 7 |

## ✍️ Worked Examples (Step-by-Step)

### Example 1:
**Question**: Find the angle between the hour hand and the minute hand of a clock at 3:40.

**Solution**:
Step 1: H = 3, M = 40.
Step 2: $\theta = |30(3) - 5.5(40)| = |90 - 220| = |-130| = 130^{\circ}$.
Step 3: Angle is 130 degrees.

### Example 2:
**Question**: If 1st January 2023 was a Sunday, what day was 1st January 2024?

**Solution**:
Step 1: Year 2023 is an ordinary year (not divisible by 4).
Step 2: An ordinary year has 365 days, which leaves 1 odd day.
Step 3: Day on 1st Jan 2024 = Sunday + 1 odd day = Monday.
Step 4: It was a Monday.

### Example 3:
**Question**: How many times do the hands of a clock overlap in 24 hours?

**Solution**:
Step 1: Hands overlap once every hour, except between 11 and 1.
Step 2: Overlaps = 11 times in 12 hours.
Step 3: In 24 hours, overlaps = 22 times.

## ⚠️ Common Mistakes

❌ **Pitfall**: Forgetting that century years (like 1900 or 2100) are not leap years unless they are divisible by 400. 2000 was a leap year, but 1900 was not.

## 💡 Clue / Shortcut Trick

🔥 **Shortcut**: Every ordinary year adds 1 odd day, and every leap year adds 2 odd days. Sum them to find day shifts quickly.

## 🔗 Relation to Other Topics

💡 Directly related to date-time parsing algorithms, epoch handling, and cron schedules.

## 🔗 PYQ Link

Check out past year questions on this topic: [Previous Year Questions](pyq.md)
