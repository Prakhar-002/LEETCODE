//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.1 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(sandwiches)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
      int countStudents(vector<int>& students, vector<int>& sandwiches) {
            // Count frequency of each student type (0 or 1)
            unordered_map<int, int> count;
            for (int student : students) {
                  count[student]++;
            }

            // Process sandwiches in order from the stack
            for (int sandwich : sandwiches) {
                  // If no students prefer this sandwich, return remaining
                  if (count[sandwich] == 0) {
                        return count[1 - sandwich];
                  }

                  // Decrement count for this sandwich type
                  count[sandwich]--;
            }

            // All students fed successfully
            return 0;
      }
};
