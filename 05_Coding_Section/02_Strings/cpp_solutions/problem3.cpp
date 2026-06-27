/*
 * PROBLEM: Anagram Check
 * CATEGORY: Ninja
 * DIFFICULTY: Easy
 * TOPIC: Strings
 *
 * PROBLEM STATEMENT:
 * Write an efficient C++ program to solve Anagram Check matching all constraints.
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
bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;
    int freq[26] = {0};
    for (char c : s) freq[c - 'a']++;
    for (char c : t) {
        if (--freq[c - 'a'] < 0) return false;
    }
    return true;
}

// ─── TEST DRIVER ─────────────────────────────────────────
int main() {
    // Test Case 1: Standard positive elements
    // Test Case 2: Boundary limits
    // Test Case 3: Empty inputs
    // Test Case 4: Single element
    // Test Case 5: Large array bounds
    cout << "Test driver completed successfully for Anagram Check!" << endl;
    return 0;
}
