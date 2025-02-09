//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2364

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
      long long countBadPairs(vector<int>& nums) {
            // Initialize variables for total pairs and good pairs
            long long goodPair = 0;
            long long totalPair = 0;

            // Map to keep track of occurrences of (nums[i] - i)
            unordered_map<int, long long> pair_count;

            // Iterate through the array
            for (int i = 0; i < nums.size(); i++) {
                  // Add index to total pairs count
                  totalPair += i;

                  // Count valid pairs using the map
                  goodPair += pair_count[nums[i] - i];

                  // Update the map with current (nums[i] - i) value
                  pair_count[nums[i] - i]++;
            }

            // Return the number of bad pairs
            return totalPair - goodPair;
      }
};
