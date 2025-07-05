//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1394

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(arr)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      int findLucky(vector<int> &arr) {
            unordered_map<int, int> freq;

            // Count frequency of each number
            for (int num : arr) {
                  freq[num]++;
            }

            int res = -1; // Initialize result to -1

            // Iterate through the frequency map
            for (auto &[key, val] : freq) {
                  // Check if key == frequency (lucky number condition)
                  if (key == val) {
                        res = max(res, key); // Update max lucky number
                  }
            }

            return res; // Return result
      }
};
