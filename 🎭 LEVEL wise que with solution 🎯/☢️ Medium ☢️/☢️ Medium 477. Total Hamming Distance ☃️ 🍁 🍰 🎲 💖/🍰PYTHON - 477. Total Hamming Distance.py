#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 477

#? ⌚ Time complexity ➺ O(32 * n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def totalHammingDistance(self, nums: List[int]) -> int:
            n = len(nums)  # Total number of elements
            total = 0      # Total Hamming distance sum

            # Check all 32 bit positions (for 32-bit integers)
            for bit in range(32):
                  countOnes = 0  # Count how many numbers have 1 in this bit position

                  # Loop through all numbers and check the bit
                  for num in nums:
                        countOnes += (num >> bit) & 1

                  # Numbers with 0 in this bit position
                  countZeros = n - countOnes

                  # Each 1 can form a distance of 1 with each 0
                  total += countOnes * countZeros

            return total  # Return the final total Hamming distance
