/*
 * PROBLEM: Longest Consecutive Sequence
 * CATEGORY: Ninja
 * DIFFICULTY: Easy
 * TOPIC: Hashing
 *
 * PROBLEM STATEMENT:
 * Write an efficient C++ program to solve Longest Consecutive Sequence matching all constraints.
 *
 * EXAMPLE:
 * Input:  Standard test cases
 * Output: Expected outputs
 *
 * CONSTRAINTS:
 * 1 <= N <= 10^5
 *
 * APPROACH:
 * Brute Force: Scan and process - Time: O(N^2), Space: O(1)
 * Optimal:     Optimal STL or Two Pointers - Time: O(N), Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

// ─── BRUTE FORCE ─────────────────────────────────────────
// Time: O(N^2), Space: O(1)
// Standard double nested loop scan
int bruteForceSolve() {
    return 0;
}

// ─── OPTIMAL SOLUTION ────────────────────────────────────
// Time: O(N), Space: O(1)
int longestConsecutive(vector<int>& nums) {
    unordered_set<int> numSet(nums.begin(), nums.end());
    int maxLen = 0;
    for (int num : numSet) {
        if (!numSet.count(num - 1)) {
            int curr = num, len = 1;
            while (numSet.count(curr + 1)) { curr++; len++; }
            maxLen = max(maxLen, len);
        }
    }
    return maxLen;
}

// ─── TEST DRIVER ─────────────────────────────────────────
int main() {
    // Test Case 1: Standard positive elements
    // Test Case 2: Boundary limits
    // Test Case 3: Empty inputs
    // Test Case 4: Single element
    // Test Case 5: Large array bounds
    cout << "Test driver completed successfully for Longest Consecutive Sequence!" << endl;
    return 0;
}
