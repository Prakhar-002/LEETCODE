//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 416

//? ⌚ Time complexity ➺ O(n * s) 👉🏻   n = len(nums)

//? 🧺 Space complexity ➺ O(s)    👉🏻   s = sum(nums) // 2

#include <vector>
using namespace std;

class Solution {
public:
      bool canPartition(vector<int>& nums) {
            int total = accumulate(nums.begin(), nums.end(), 0);

            // If total sum is odd, can't partition into 2 equal subsets
            if (total % 2 != 0) return false;

            int target = total / 2;

            // Use bitset to represent possible sums
            bitset<10001> dp;  // up to 10000 because max nums[i] <= 100
            dp[0] = 1;

            for (int num : nums) {
                  // Shift left by num to add new subset sums
                  dp |= dp << num;
            }

            return dp[target];
      }
};


//!------------------------------------------------------------------------------- 

//? ⌚ Time complexity ➺ O(n * s) 👉🏻   n = len(nums)

//? 🧺 Space complexity ➺ O(s)    👉🏻   s = sum(nums) // 2

#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
      bool canPartition(vector<int>& nums) {
            int totalSum = 0;

            // Calculate the total sum
            for (int num : nums) {
                  totalSum += num;
            }

            // If total sum is odd, partition not possible
            if (totalSum % 2 != 0) {
                  return false;
            }

            int target = totalSum / 2;

            unordered_set<int> possibleSums;
            possibleSums.insert(0); // Start with 0 sum

            // Traverse each number
            for (int num : nums) {
                  unordered_set<int> nextSums;

                  for (int s : possibleSums) {
                        if (s + num == target) {
                              return true; // Found a subset
                        }
                        nextSums.insert(s);         // Don't include num
                        nextSums.insert(s + num);   // Include num
                  }

                  possibleSums = nextSums; // Update current sums
            }

            return false; // No subset found
      }
};
