//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1865

//? ⌚ Time complexity ➺ O(n + m + q1 + q2 * n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n + m)   m = lem(nums2)

class FindSumPairs {
      private int[] nums1, nums2;
      private Map<Integer, Integer> freqMap; 

      public FindSumPairs(int[] nums1, int[] nums2) {
            this.nums1 = nums1;
            this.nums2 = nums2;
            freqMap = new HashMap<>();

            // Initialize frequency map for nums2
            for (int num : nums2) {
                  freqMap.put(num, freqMap.getOrDefault(num, 0) + 1);
            }
      }

      public void add(int index, int val) {
            int oldVal = nums2[index];

            // Decrease old value's frequency
            freqMap.put(oldVal, freqMap.get(oldVal) - 1);
            if (freqMap.get(oldVal) == 0)
                  freqMap.remove(oldVal);

            // Update value in nums2
            nums2[index] += val;
            int newVal = nums2[index];

            // Increase new value's frequency
            freqMap.put(newVal, freqMap.getOrDefault(newVal, 0) + 1);
      }

      public int count(int tot) {
            int count = 0;

            // For each number in nums1, find complement in nums2
            for (int num : nums1) {
                  int complement = tot - num;
                  count += freqMap.getOrDefault(complement, 0);
            }

            return count;
      }
}
