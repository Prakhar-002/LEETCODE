//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1313

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      vector<int> decompressRLElist(vector<int>& nums) {
            vector<int> res; // Vector to hold the final result

            // Loop through the input vector with steps of 2
            for (int i = 0; i < nums.size(); i += 2) {
                  int freq = nums[i];       // Frequency
                  int val = nums[i + 1];    // Value to repeat

                  // Insert 'val' 'freq' times into the result vector
                  for (int j = 0; j < freq; ++j) {
                        res.push_back(val);
                  }
            }

            return res; // Return the decompressed list
      }
};
