//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2337

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(start)

//? 🧺 Space complexity ➺ O(1)

#include <string>
using namespace std;

class Solution {
public:
      bool canChange(string start, string target) {
            int i = 0; // Pointer for the start string
            int j = 0; // Pointer for the target string
            int n = start.length(); // Length of the strings

            while (i < n && j < n) {
                  // Skip all underscores in the start string
                  while (i < n && start[i] == '_') {
                        i++;
                  }

                  // Skip all underscores in the target string
                  while (j < n && target[j] == '_') {
                        j++;
                  }

                  // Check if both pointers are out of bounds (end of strings)
                  if (i == n || j == n) {
                        break;
                  }

                  // Characters at the current positions should match
                  if (start[i] != target[j]) {
                        return false;
                  }

                  // 'L' can only move left, so its index in the start should be >= in target
                  if (start[i] == 'L' && i < j) {
                        return false;
                  }

                  // 'R' can only move right, so its index in the start should be <= in target
                  if (start[i] == 'R' && i > j) {
                        return false;
                  }

                  // Move both pointers forward if the characters match and constraints are satisfied
                  i++;
                  j++;
            }

            // After exiting the loop, both strings should only have underscores left
            while (i < n) {
                  if (start[i] != '_') {
                        return false;
                  }
                  i++;
            }

            while (j < n) {
                  if (target[j] != '_') {
                        return false;
                  }
                  j++;
            }

            return true;
      }
};
