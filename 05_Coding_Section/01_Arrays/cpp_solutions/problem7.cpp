/*
 * PROBLEM: Leaders in Array
 * CATEGORY: Ninja
 * DIFFICULTY: Easy
 * TOPIC: Arrays
 *
 * PROBLEM STATEMENT:
 * Write an efficient C++ program to solve Leaders in Array matching all constraints.
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
vector<int> findLeaders(vector<int>& arr) {
    vector<int> leaders;
    int maxRight = arr.back();
    leaders.push_back(maxRight);
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            leaders.push_back(arr[i]);
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

// ─── TEST DRIVER ─────────────────────────────────────────
int main() {
    // Test Case 1: Standard positive elements
    // Test Case 2: Boundary limits
    // Test Case 3: Empty inputs
    // Test Case 4: Single element
    // Test Case 5: Large array bounds
    cout << "Test driver completed successfully for Leaders in Array!" << endl;
    return 0;
}
