# 📝 Algorithms Basics - Concept & Rules

> **Concept Definition**:
> Algorithms Basics covers analyzing step-by-step solutions for complexity. Topics include Big O notation, searching methods (binary search), and basic sorting (bubble, selection).

## 📊 Key Logic / Concept Table

| Concept / Pattern | Meaning / Expression |
| :--- | :--- |
| Binary Search Time Complexity | $O(\log n)$ |
| Bubble Sort Time Complexity | $O(n^2)$ |

## ✍️ Worked Examples (Step-by-Step)

### Example 1:
**Question**: What is the worst-case time complexity of Binary Search on a sorted array of size $N$?

**Solution**:
Step 1: Binary search repeatedly divides the search space in half.
Step 2: Number of steps satisfies $N / 2^k = 1 \implies 2^k = N \implies k = \log_2 N$.
Step 3: Time complexity is $O(\log N)$.

### Example 2:
**Question**: Which sorting algorithm has a best-case time complexity of $O(n)$ if the array is already sorted?

**Solution**:
Step 1: Check algorithms. Selection sort always does $O(n^2)$ comparisons. Merge sort always does $O(n \log n)$.
Step 2: Bubble sort can be optimized with a swap flag to exit after 1 pass if no elements are swapped, taking $O(n)$ comparisons.
Step 3: Answer: Insertion Sort / Optimized Bubble Sort.

### Example 3:
**Question**: What is the space complexity of merge sort on an array of size $N$?

**Solution**:
Step 1: Merge sort requires creating temporary subarrays to merge elements.
Step 2: Total auxiliary space required is proportional to the size of the input array.
Step 3: Space complexity is $O(N)$.

## ⚠️ Common Mistakes

❌ **Pitfall**: Forgetting that binary search requires the input array to be sorted. Applying it to an unsorted array is a logical error.

## 💡 Clue / Shortcut Trick

🔥 **Shortcut**: To find time complexity of nested loops, multiply the bounds: outer loop ($N$) times inner loop ($N$) gives $O(N^2)$.

## 🔗 Relation to Other Topics

💡 Prerequisite for passing coding rounds and building high-performance systems.

## 🔗 PYQ Link

Check out past year questions on this topic: [Previous Year Questions](pyq.md)
