//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 477

//? ⌚ Time complexity ➺ O(32 * n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>

int totalHammingDistance(int* nums, int n) {
      int total = 0;  // Variable to store the total Hamming distance

      // Loop through all 32 possible bit positions
      for (int bit = 0; bit < 32; bit++) {
            int countOnes = 0;  // Count of numbers having 1 at this bit position

            // Loop through all numbers and count how many have 1 in this position
            for (int i = 0; i < n; i++) {
                  countOnes += (nums[i] >> bit) & 1; // Extract bit and add to count
            }

            // Count of numbers having 0 at this bit position
            int countZeros = n - countOnes;

            // Each 1 can pair with each 0 to form a Hamming distance of 1
            total += countOnes * countZeros;
      }

      return total; // Return the final total Hamming distance
} 
