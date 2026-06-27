# 💻 Compiler Choice: Why C++17 is the Standard for TCS NQT?

The TCS NQT coding round is hosted on the TCS iON compiler, which uses GCC 9.3 (supporting C++17). C++ is the most recommended language for NQT due to its performance, STL containers, and strict time limits.

---

## 📊 Why Choose C++17?

| Feature | Details | TCS iON Advantages |
| :--- | :--- | :--- |
| **Execution Speed** | C++ compiles to machine code directly, executing in under 0.1s. | Eliminates Time Limit Exceeded (TLE) errors common in interpreted languages. |
| **STL Container** | In-built `vector`, `unordered_map`, `stack`, `queue`, `priority_queue`. | Allows writing complex graphs, trees, and DP algorithms in under 30 lines. |
| **Memory Control** | Low overhead and zero virtual machine startup time. | Stays well within the strict 256MB memory limit. |

---

## ⚠️ C++ NQT Compiler Traps & Tips

1. **Fast I/O Bottlenecks**:
   The TCS iON compiler processes large input files. To avoid I/O bottlenecks, always add the following lines at the start of your `int main()`:
   ```cpp
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   ```

2. **Console Input Parsing**:
   TCS inputs may contain trailing carriage returns (`\r\n`). When using `getline(cin, str)`, verify that you trim trailing carriage returns if parsing fails.

3. **Time Limit Exceeded (TLE)**:
   Avoid nested loops yielding $O(N^2)$ complexity unless $N \le 1000$. Use $O(N \log N)$ or $O(N)$ sorting and hash map approaches.

4. **Partial Marks**:
   TCS NQT awards marks based on the number of private test cases passed. If your optimal solution has bugs, submit your brute force solution first to secure partial marks.
