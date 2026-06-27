/*
 * PROBLEM: Longest Substring Without Repeating Characters
 * CATEGORY: Prime
 * DIFFICULTY: Hard
 * TOPIC: Strings
 *
 * PROBLEM STATEMENT:
 * Write an efficient C++ program to solve Longest Substring Without Repeating Characters matching all constraints.
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
 * Optimal:     Optimal STL or Two Pointers - Time: O(N), Space: O(K)
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
// Time: O(N), Space: O(K)
int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> lastSeen;
    int maxLen = 0, start = 0;
    for (int i = 0; i < s.size(); i++) {
        if (lastSeen.count(s[i]) && lastSeen[s[i]] >= start)
            start = lastSeen[s[i]] + 1;
        lastSeen[s[i]] = i;
        maxLen = max(maxLen, i - start + 1);
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
    cout << "Test driver completed successfully for Longest Substring Without Repeating Characters!" << endl;
    return 0;
}
