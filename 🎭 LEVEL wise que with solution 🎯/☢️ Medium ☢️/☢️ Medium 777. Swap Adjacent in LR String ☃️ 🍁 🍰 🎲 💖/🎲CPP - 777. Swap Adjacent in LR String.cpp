//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 777

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(start)

//? 🧺 Space complexity ➺ O(1)

#include <string>
using namespace std;

class Solution {
public:
      bool canTransform(string start, string result) {
            int i = 0; // Pointer for the start string
            int j = 0; // Pointer for the result string
            int n = start.size(); // Length of the strings

            while (i < n && j < n) {
                  // Skip all 'X' in the start string
                  while (i < n && start[i] == 'X') {
                        i++;
                  }

                  // Skip all 'X' in the result string
                  while (j < n && result[j] == 'X') {
                        j++;
                  }

                  // Check if both pointers are out of bounds (end of strings)
                  if (i == n || j == n) {
                        break;
                  }

                  // Characters at the current positions should match
                  if (start[i] != result[j]) {
                        return false;
                  }

                  // 'L' can only move left, so its index in the start should be >= in result
                  if (start[i] == 'L' && i < j) {
                        return false;
                  }

                  // 'R' can only move right, so its index in the start should be <= in result
                  if (start[i] == 'R' && i > j) {
                        return false;
                  }

                  // Move both pointers forward if the characters match and constraints are satisfied
                  i++;
                  j++;
            }

            // After exiting the loop, both strings should only have 'X' left
            while (i < n) {
                  if (start[i] != 'X') {
                        return false;
                  }
                  i++;
            }

            while (j < n) {
                  if (result[j] != 'X') {
                        return false;
                  }
                  j++;
            }

            return true;
      }
};
