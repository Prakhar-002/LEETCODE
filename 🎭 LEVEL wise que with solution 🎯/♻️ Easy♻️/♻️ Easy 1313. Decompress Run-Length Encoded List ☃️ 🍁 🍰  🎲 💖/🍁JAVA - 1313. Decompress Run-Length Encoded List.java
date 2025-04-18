//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1313

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int[] decompressRLElist(int[] nums) {
            // Step 1: First pass to calculate total length of the result array
            int totalLength = 0;
            for (int i = 0; i < nums.length; i += 2) {
                  totalLength += nums[i]; // Add frequency to the total length
            }

            // Step 2: Create the result array with the computed length
            int[] result = new int[totalLength];
            int idx = 0; // Pointer to current index in result array

            // Step 3: Second pass to fill the result array
            for (int i = 0; i < nums.length; i += 2) {
                  int freq = nums[i]; // Frequency
                  int val = nums[i + 1]; // Value to be repeated

                  // Fill 'freq' copies of 'val' into the result array
                  for (int j = 0; j < freq; j++) {
                        result[idx++] = val;
                  }
            }

            // Step 4: Return the decompressed array
            return result;
      }
}
