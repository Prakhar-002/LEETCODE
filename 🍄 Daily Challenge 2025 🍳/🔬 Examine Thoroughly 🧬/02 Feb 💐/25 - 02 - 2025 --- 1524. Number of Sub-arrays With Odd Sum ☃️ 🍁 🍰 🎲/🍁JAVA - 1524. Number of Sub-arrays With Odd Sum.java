//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1524

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(arr)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int numOfSubarrays(int[] arr) {
            int oddSumCount = 0; // Count of subarrays with an odd sum
            int prefixSum = 0; // Stores the cumulative sum
            int oddCount = 0; // Tracks the number of odd prefix sums encountered
            int evenCount = 0; // Tracks the number of even prefix sums encountered
            final int MOD = 1_000_000_007; // Modulo to prevent overflow

            // Iterate through each number in the array
            for (int num : arr) {
                  prefixSum += num; // Update the prefix sum

                  // Check if the prefix sum is odd
                  if (prefixSum % 2 == 1) {
                        // If odd, it can form a valid subarray with all previous even prefix sums
                        oddSumCount = (oddSumCount + 1 + evenCount) % MOD;
                        oddCount++; // Increase the count of odd prefix sums
                  } else {
                        // If even, it can form a valid subarray with all previous odd prefix sums
                        oddSumCount = (oddSumCount + oddCount) % MOD;
                        evenCount++; // Increase the count of even prefix sums
                  }
            }

            return oddSumCount; // Return the total count of subarrays with odd sums
      }
}
