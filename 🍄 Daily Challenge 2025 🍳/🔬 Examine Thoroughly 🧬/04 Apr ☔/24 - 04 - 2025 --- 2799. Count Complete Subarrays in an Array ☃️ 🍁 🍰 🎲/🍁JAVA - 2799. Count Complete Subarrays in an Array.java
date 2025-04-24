//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2799

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int countCompleteSubarrays(int[] nums) {
            int n = nums.length;

            // Find number of unique elements in the array
            Set<Integer> uniqueSet = new HashSet<>();
            for (int num : nums) {
                  uniqueSet.add(num);
            }
            int k = uniqueSet.size(); // Total unique elements

            // Sliding window setup
            Map<Integer, Integer> freq = new HashMap<>();
            int left = 0, compSubArr = 0;

            // Expand right pointer
            for (int right = 0; right < n; right++) {
                  // Add current element to frequency map
                  freq.put(nums[right], freq.getOrDefault(nums[right], 0) + 1);

                  // While current window contains all unique elements
                  while (freq.size() == k) {
                        compSubArr += n - right; // All subarrays from left to end are valid

                        // Remove element at left from window
                        freq.put(nums[left], freq.get(nums[left]) - 1);
                        if (freq.get(nums[left]) == 0) {
                              freq.remove(nums[left]);
                        }
                        left++; // Shrink window from left
                  }
            }

            return compSubArr;
      }
}
