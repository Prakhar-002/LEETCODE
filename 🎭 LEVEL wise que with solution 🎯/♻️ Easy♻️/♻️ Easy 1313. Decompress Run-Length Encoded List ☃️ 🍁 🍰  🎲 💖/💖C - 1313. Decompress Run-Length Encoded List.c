//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1313

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

int* decompressRLElist(int* nums, int numsSize, int* returnSize) {
      // Step 1: First pass to calculate total size needed for decompressed array
      int totalLen = 0;
      for (int i = 0; i < numsSize; i += 2) {
            totalLen += nums[i];  // Add frequency count to total length
      }

      // Step 2: Allocate memory for the decompressed array
      int* result = (int*)malloc(totalLen * sizeof(int));

      // Step 3: Second pass to fill the result array
      int idx = 0;  // Index to track position in result array
      for (int i = 0; i < numsSize; i += 2) {
            int freq = nums[i];        // Frequency
            int val = nums[i + 1];     // Value to repeat

            // Repeat 'val' for 'freq' times and fill in the result array
            for (int j = 0; j < freq; j++) {
                  result[idx++] = val;
            }
      }

      *returnSize = totalLen;  // Set the return size
      return result;           // Return the decompressed array
}