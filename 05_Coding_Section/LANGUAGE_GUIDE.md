# 💻 Compiler Choice: Which Language to Pick for TCS NQT?

TCS NQT compiler supports **C, C++, Java, Python, and SD (Software Development)** environments. Here is a breakdown to help you choose the best fit for your coding round.

---

## 📊 Language Comparison Table

| Language | Pros | Cons | Ideal For | Recommendation |
| :--- | :--- | :--- | :--- | :--- |
| **C++ (STL)** | Extremely fast execution, rich library (STL vectors, maps, stacks), low memory overhead. | Manual memory management, verbose syntax for some manipulations. | Prime & Digital DSA questions (Trees, Graphs, DP). | ⭐⭐⭐⭐⭐ (Best overall for speed & memory limits) |
| **Python** | Rapid prototyping, concise syntax, clean string slicing, in-built arbitrary precision integers. | Slower execution speed (may exceed time limits for $O(N^2)$ solutions). | Ninja coding, quick string manipulations, math-heavy problems. | ⭐⭐⭐⭐ (Great for fast coding but risky for slow algorithms) |
| **Java** | Strong collection framework, memory safe, similar speed to C++. | Highly verbose syntax, boilerplate code (takes longer to write). | Enterprise developers, graduates already fluent in Java. | ⭐⭐⭐ (Good if you have strong prior practice) |
| **C** | Deep memory layout control. | No STL, manual hash map and stack structures must be coded from scratch. | Low-level execution. | ⭐ (Avoid unless you have no choice) |

---

## ⚠️ TCS Compiler Traps & Tips

1. **Standard I/O Parsing**: Read input using standard lines:
   - *Python*: `sys.stdin.read().split()` to handle multiple lines or spaces.
   - *C++*: Use `cin >> val` or `getline(cin, str)` and add `ios_base::sync_with_stdio(false); cin.tie(NULL);` to avoid I/O bottlenecks.
2. **Time Limit Exceeded (TLE)**: TCS compiler usually runs on restricted containers. A C++ solution that executes in 0.1s might take 1.2s in Python, failing the test case. **Always optimize your time complexities**.
3. **Partial Marks**: TCS NQT awards marks based on the number of private test cases passed. Write a brute force solution first if you are struggling with the optimal approach.
