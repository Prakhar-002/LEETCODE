//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1498

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution { 
      public int numSubseq(int[] nums, int target) {
            int mod = 1_000_000_007; // Large prime number to take modulo as per the problem.
            int n = nums.length;

            // Step 1: Sort the array to apply two-pointer technique.
            Arrays.sort(nums); // Sorting helps to efficiently find valid min/max pairs.

            // Step 2: Precompute powers of 2 modulo `mod`
            // power[i] = number of subsequences between two indices of length (i + 1)
            // Because for a subarray of length `len`, the number of subsets = 2^len
            int[] power = new int[n];
            power[0] = 1; // 2^0 = 1
            for (int i = 1; i < n; i++) {
                  power[i] = (power[i - 1] * 2) % mod; // Precompute 2^i % mod to avoid recalculating
            }

            int left = 0; // Left pointer for the minimum value in the subsequence
            int right = n - 1; // Right pointer for the maximum value in the subsequence
            int result = 0; // Initialize result to accumulate the count

            // Step 3: Use two pointers to explore all valid min/max pairs
            while (left <= right) {
                  // If current pair satisfies the condition: min + max <= target
                  if (nums[left] + nums[right] <= target) {
                        // All combinations between left and right form valid subsequences
                        // The number of such subsequences = 2^(right - left)
                        result = (result + power[right - left]) % mod;

                        // Try a larger minimum (move left pointer right)
                        left++;
                  } else {
                        // If sum is too large, reduce max value (move right pointer left)
                        right--;
                  }
            }

            // Final result: total number of valid subsequences
            return result;
      }
}