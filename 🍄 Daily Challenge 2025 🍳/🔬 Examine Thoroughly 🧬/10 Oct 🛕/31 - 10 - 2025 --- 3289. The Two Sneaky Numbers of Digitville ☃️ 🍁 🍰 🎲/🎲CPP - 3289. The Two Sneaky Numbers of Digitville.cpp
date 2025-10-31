//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3289

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
      /**
       * Finds all numbers in the vector that appear exactly twice.
       */
      vector<int> getSneakyNumbers(vector<int>& nums) {
            unordered_map<int, int> sneaky;  // Map to count occurrences
            vector<int> sneakyNum;            // Result storage

            for (int x : nums) {
                  sneaky[x]++;

                  // If count becomes 2, add number once
                  if (sneaky[x] == 2) {
                        sneakyNum.push_back(x);
                  }
            }
            return sneakyNum; // Return numbers appearing twice
      }
};
