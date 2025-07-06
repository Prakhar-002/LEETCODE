//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2006

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m)  ->  m = Unique(nums)

class Solution {
      public int countKDifference(int[] nums, int k) {
            Map<Integer, Integer> countMap = new HashMap<>();

            // Count frequency of each number in nums
            for (int num : nums) {
                  countMap.put(num, countMap.getOrDefault(num, 0) + 1);
            }

            int pairs = 0;

            // For each number, check if (num + k) exists
            for (int num : countMap.keySet()) {
                  if (countMap.containsKey(num + k)) {
                        // Multiply frequencies and add to total pairs
                        pairs += countMap.get(num) * countMap.get(num + k);
                  }
            }

            return pairs;
      }
}
