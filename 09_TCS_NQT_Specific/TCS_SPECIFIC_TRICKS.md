# 🎯 TCS NQT Specific Exam Tricks & Platform Quirks

To maximize your score on the TCS iON platform, you need to understand the quirks of the environment, compile limits, and question attempt strategies.

---

## 💻 TCS iON Platform Quirks & Constraints

| Quirk / Constraint | Description | Strategy |
| :--- | :--- | :--- |
| **No Backtracking** | Once you click 'Next', you cannot return to the question. | Never leave a question blank. Since there is no negative marking, guess and proceed. |
| **No Copy-Paste** | The coding window disables all copy-paste commands (Ctrl+C, Ctrl+V, right-click). | Practice writing code without copying. You cannot copy templates from your notes. |
| **Standard Input Parsing** | Inputs are fed in custom formats, sometimes on a single line space-separated. | Use `sys.stdin.read().split()` in Python or `cin >> val` in C++ loops. |
| **Compiler Versions** | GCC 9.3 for C++, Python 3.8, Java 11. | Avoid using very new language features (like Python 3.10 pattern matching). |

---

## 🏆 Attempt Strategy for Ninja vs Digital vs Prime

1. **Ninja Candidate (Target: 3.36 LPA)**:
   - Focus on clearing the **Foundation Section** (MCQs).
   - Get at least one coding question partially or fully accepted (brute force is fine).
2. **Digital Candidate (Target: 7.0 LPA)**:
   - Perform well in the MCQs, especially Advanced Quantitative and Advanced Reasoning.
   - Solve at least 1 coding question fully with optimal time complexity ($O(N)$ or $O(N \log N)$).
3. **Prime Candidate (Target: 9.0+ LPA)**:
   - Solve both coding questions fully and optimally.
   - Focus on Trees, Stacks, Hashing, and Dynamic Programming.

---

## 🔥 Golden Rules for the Coding Round
- **Read the constraints**: If $N \le 10^5$, an $O(N^2)$ solution will TLE. You *must* write an $O(N)$ or $O(N \log N)$ solution.
- **Write the Brute Force first**: Save a working version of the brute force solution to secure partial marks, then optimize.
