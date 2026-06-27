# 📝 Sorting & Searching Study Guide

> **Concept Definition**:
> Arranging and finding data elements.

## ⏱️ Time & Space Complexity Reference

| Operation / Algorithm | Best Time | Average Time | Worst Time | Space Complexity |
| :--- | :---: | :---: | :---: | :---: |
| Search / Access | $O(1)$ | $O(1)$ | $O(N)$ | $O(1)$ |
| Insertion | $O(1)$ | $O(1)$ | $O(N)$ | $O(1)$ |
| Deletion | $O(1)$ | $O(1)$ | $O(N)$ | $O(1)$ |
| Sort Array / List | $O(N \log N)$ | $O(N \log N)$ | $O(N \log N)$ | $O(N)$ |
| Linear Scan / Traversal | $O(N)$ | $O(N)$ | $O(N)$ | $O(1)$ |
| Two-Pointer Loop | $O(N)$ | $O(N)$ | $O(N)$ | $O(1)$ |
| Sliding Window Scan | $O(N)$ | $O(N)$ | $O(N)$ | $O(1)$ |
| Kadane's Subarray | $O(N)$ | $O(N)$ | $O(N)$ | $O(1)$ |
| Sieve of Eratosthenes | $O(N \log \log N)$ | $O(N \log \log N)$ | $O(N \log \log N)$ | $O(N)$ |
| Binary Tree Traversal | $O(N)$ | $O(N)$ | $O(N)$ | $O(H)$ |
| DFS / BFS Grid | $O(V+E)$ | $O(V+E)$ | $O(V+E)$ | $O(V)$ |

## 💡 Core Patterns for TCS NQT
1. **Two Pointers**: Use when searching pairs in sorted arrays, checking palindromes, or partitioning arrays.
2. **Sliding Window**: Used to compute subarray statistics under constraints, optimizing nested loop O(N^2) searches to O(N).
3. **Prefix Sums**: Optimize range queries of sums or frequencies in O(1) time after O(N) pre-processing.
4. **Dutch Flag Partitioning**: Partition array into three distinct groups (0s, 1s, 2s) in a single pass O(N) with O(1) space.
5. **Floyd's Fast & Slow**: Traverse node linkages at unequal speeds to detect cycles or find list midpoints in O(N).

## ⚠️ Common Interview Mistakes (Wrong vs Correct)

### Off-by-one index access:
**❌ Broken Implementation**:
```cpp
index boundary bug
```
**✅ Corrected Implementation**:
```cpp
validate bounds
```

### Uninitialized state mapping:
**❌ Broken Implementation**:
```cpp
missing base case in DP/recursion
```
**✅ Corrected Implementation**:
```cpp
define base state
```

### Infinite loop / Stack Overflow:
**❌ Broken Implementation**:
```cpp
missing increment or exit condition
```
**✅ Corrected Implementation**:
```cpp
verify termination condition
```

### Memory leak:
**❌ Broken Implementation**:
```cpp
forgetting to free node pointers
```
**✅ Corrected Implementation**:
```cpp
delete nodes manually in C++
```

### Precision errors:
**❌ Broken Implementation**:
```cpp
integer division truncation
```
**✅ Corrected Implementation**:
```cpp
use float casting
```

## 🔗 When to Use this Data Structure
- Use when index-based access speed is a priority (Arrays/Strings: O(1) access).
- Avoid when mid-insertions or mid-deletions occur frequently (use Linked Lists or Hash Maps instead).

## 📚 Previous Year Question Solutions
Navigate to optimal solutions: [pyq_solutions](pyq_solutions/)

### Detail DSA Note Section 6
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 7
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 7
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 8
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 8
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 9
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 9
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 10
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 10
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 11
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 11
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 12
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 12
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 13
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 13
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 14
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 14
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 15
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 15
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 16
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 16
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 17
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 17
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 18
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 18
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 19
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 19
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 20
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 20
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 21
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 21
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 22
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 22
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 23
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 23
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 24
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 24
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 25
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 25
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 26
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 26
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 27
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 27
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 28
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 28
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 29
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 29
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 30
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 30
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 31
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 31
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 32
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 32
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 33
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 33
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 34
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 34
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 35
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 35
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 36
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 36
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 37
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 37
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 38
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 38
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 39
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 39
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 40
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 40
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 41
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.

### Detail DSA Note Section 41
To write highly optimal code for TCS Digital and Prime rounds, candidates must minimize auxiliary memory allocations.
Always inspect array bounds. In C++, out-of-bounds access triggers segmentation faults or undefined behavior.
Prefer standard C++ libraries (<algorithm>, <vector>) to save coding time during exams.