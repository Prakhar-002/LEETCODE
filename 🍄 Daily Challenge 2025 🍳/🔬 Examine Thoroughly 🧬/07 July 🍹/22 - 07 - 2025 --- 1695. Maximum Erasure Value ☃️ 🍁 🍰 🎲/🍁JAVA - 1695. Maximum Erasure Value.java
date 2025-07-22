//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1695

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int maximumUniqueSubarray(int[] nums) {
            Set<Integer> unique = new HashSet<>(); // Set to store unique elements
            int maxSum = 0;
            int left = 0;
            int currentSum = 0;

            // Iterate using right pointer
            for (int right = 0; right < nums.length; right++) {
                  currentSum += nums[right]; // Add current element to window sum

                  // If duplicate found, shrink the window from the left
                  while (unique.contains(nums[right])) {
                        currentSum -= nums[left]; // Remove from sum
                        unique.remove(nums[left]); // Remove from set
                        left++; // Move left pointer
                  }

                  unique.add(nums[right]); // Add to set
                  maxSum = Math.max(maxSum, currentSum); // Update max sum
            }

            return maxSum; // Return the maximum unique subarray sum
      }
}
