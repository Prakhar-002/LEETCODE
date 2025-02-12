//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2342

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
      // Function to compute sum of digits of a number
      int digitSum(int num) {
            int digit_sum = 0;

            // Extract digits and sum them up
            while (num > 0) {
                  digit_sum += num % 10;  // Get last digit and add to sum
                  num /= 10;  // Remove last digit
            }

            return digit_sum;
      }

      // Function to find the maximum sum of two numbers with the same digit sum
      int maximumSum(vector<int>& nums) {
            unordered_map<int, vector<int>> digitSumMap;  // HashMap to group numbers by digit sum

            for (int n : nums) {
                  int dSum = digitSum(n);  // Compute digit sum

                  digitSumMap[dSum].push_back(n);  // Add number to its digit sum group

                  // Maintain only the top two largest numbers
                  if (digitSumMap[dSum].size() > 2) {
                        sort(digitSumMap[dSum].begin(), digitSumMap[dSum].end());
                        digitSumMap[dSum].erase(digitSumMap[dSum].begin());  // Remove smallest element
                  }
            }

            int res = -1;  // Initialize result as -1 (default if no valid pair exists)

            // Iterate through the map
            for (auto& [key, lst] : digitSumMap) {
                  if (lst.size() == 2) {  // Consider only pairs of numbers
                        res = max(res, lst[0] + lst[1]);  // Update maximum sum
                  }
            }

            return res;
      }
};