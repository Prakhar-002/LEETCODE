//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 477

//? ⌚ Time complexity ➺ O(32 * n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int totalHammingDistance(int[] nums) {
            int n = nums.length; // Store the number of elements in the array
            int total = 0; // Variable to store the sum of all Hamming distances

            // Iterate through all 32 bit positions (since int is 32-bit)
            for (int bit = 0; bit < 32; bit++) {
                  int countOnes = 0; // Count of numbers having '1' at this bit position

                  // Loop through each number in the array
                  for (int num : nums) {
                        // Extract the 'bit'-th bit and add to countOnes
                        countOnes += (num >> bit) & 1;
                  }

                  // Numbers that have 0 at this bit position
                  int countZeros = n - countOnes;

                  // Each 1 at this position can form a Hamming distance of 1 with each 0
                  total += countOnes * countZeros;
            }

            // Return the total Hamming distance for all pairs
            return total;
      }
}
