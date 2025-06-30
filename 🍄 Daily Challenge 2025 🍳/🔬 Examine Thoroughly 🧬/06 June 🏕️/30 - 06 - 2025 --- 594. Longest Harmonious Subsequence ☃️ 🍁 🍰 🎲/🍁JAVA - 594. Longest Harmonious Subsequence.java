//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 594

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int findLHS(int[] nums) {
            Map<Integer, Integer> freq = new HashMap<>();

            // Count frequency of each number
            for (int num : nums) {
                  freq.put(num, freq.getOrDefault(num, 0) + 1);
            }

            int maxLength = 0;

            for (int num : freq.keySet()) {
                  // Check if the map contains num + 1
                  if (freq.containsKey(num + 1)) {
                        // Compute total length of harmonious subsequence
                        maxLength = Math.max(maxLength, freq.get(num) + freq.get(num + 1));
                  }
            }

            return maxLength;
      }
}
