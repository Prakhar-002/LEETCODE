//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1695

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      int maximumUniqueSubarray(vector<int>& nums) {
            unordered_set<int> unique;   // Set to track unique elements
            int maxSum = 0;
            int left = 0;
            int currentSum = 0;

            for (int right = 0; right < nums.size(); ++right) {
                  currentSum += nums[right];  // Add current element to sum

                  // If element already exists, shrink window
                  while (unique.count(nums[right])) {
                        currentSum -= nums[left];   // Subtract from sum
                        unique.erase(nums[left]);   // Remove from set
                        left++;                     // Move left pointer
                  }

                  unique.insert(nums[right]);       // Add to set
                  maxSum = max(maxSum, currentSum); // Update max sum
            }

            return maxSum;  // Final answer
      }
};
