//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2275

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.Arrays;

class Solution {
      public int largestCombination(int[] candidates) {
            // Initialize an array to keep track of the count of '1' bits at each bit
            // position
            // We assume a 32-bit integer representation for all candidates
            int[] bitCounts = new int[32];

            // Iterate through each candidate in the array of candidates
            for (int candidate : candidates) {
                  int bitPosition = 0; // Bit position index, starting from the least significant bit

                  // While there are still bits left in the candidate
                  while (candidate != 0) {
                        // Use bitwise AND to check if the current bit (least significant) is 1
                        // If it is, increment the count for this bit position in `bitCounts`
                        bitCounts[bitPosition] += candidate & 1;

                        // Move to the next bit position
                        bitPosition++;

                        // Right shift `candidate` by 1 to process the next bit
                        candidate = candidate >> 1;
                  }
            }

            // Return the maximum value in `bitCounts`, representing the highest count of
            // '1's in any bit position
            return Arrays.stream(bitCounts).max().orElse(0);
      }
}
