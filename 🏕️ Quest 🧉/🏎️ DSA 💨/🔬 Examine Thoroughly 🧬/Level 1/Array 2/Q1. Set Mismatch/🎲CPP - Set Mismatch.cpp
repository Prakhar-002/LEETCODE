//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L1.2 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      vector<int> findErrorNums(vector<int>& nums) {
            vector<int> arr(2);  // arr[0] = duplicate, arr[1] = missing
            vector<int> freq(nums.size() + 1, 0);  // Frequency vector

            // Count frequency of each number
            for (int n : nums) {
                  freq[n]++;
            }

            // Identify duplicate and missing numbers
            for (int i = 1; i < freq.size(); i++) {
                  if (freq[i] == 2) {
                        arr[0] = i;  // Duplicate
                  }
                  if (freq[i] == 0) {
                        arr[1] = i;  // Missing
                  }
            }

            return arr;
      }
};
