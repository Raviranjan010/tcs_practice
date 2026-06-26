# 📝 Solution Explanation: Second Largest Element

## 💡 Problem Statement
Second Largest Element

## 🛠️ Code Implementations

### 🐍 Python (Optimal)
```python
# Problem: Find the second largest element in an array.
# Test Case 1: [12, 35, 1, 10, 34, 1] -> 34
# Test Case 2: [10, 10, 10] -> -1 (No second largest)
# Test Case 3: [1] -> -1
# Edge cases: Array with duplicates, small arrays.

def second_largest_optimal(arr):
    # Time: O(N), Space: O(1)
    if len(arr) < 2: return -1
    first = second = -float('inf')
    for num in arr:
        if num > first:
            second = first
            first = num
        elif num > second and num != first:
            second = num
    return second if second != -float('inf') else -1

```

### 👾 C++ Alternative
```cpp
// C++ Alternative
#include <vector>
#include <climits>
int getSecondLargest(std::vector<int>& arr) {
    int first = INT_MIN, second = INT_MIN;
    for(int x : arr) {
        if(x > first) { second = first; first = x; }
        else if(x > second && x != first) { second = x; }
    }
    return (second == INT_MIN) ? -1 : second;
}

```

## 📈 Complexity Analysis

* **Time Complexity**: $O(N)$ - we iterate through the input elements exactly once.
* **Space Complexity**: $O(1)$ - auxiliary workspace utilizes constant memory storage.
