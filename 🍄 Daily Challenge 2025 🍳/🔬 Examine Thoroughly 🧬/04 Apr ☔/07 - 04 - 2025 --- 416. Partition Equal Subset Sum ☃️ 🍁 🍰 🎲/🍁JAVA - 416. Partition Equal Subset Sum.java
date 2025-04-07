//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 416

//? ⌚ Time complexity ➺ O(n * s) 👉🏻   n = len(nums)

//? 🧺 Space complexity ➺ O(s)    👉🏻   s = sum(nums) // 2

import java.util.*;

class Solution {
      public boolean canPartition(int[] nums) {
            int total = 0;

            // Step 1: Calculate the total sum of all numbers
            for (int num : nums) {
                  total += num;
            }

            // Step 2: If the total is odd, it's impossible to partition into equal subsets
            if (total % 2 != 0) return false;

            int target = total / 2;

            // Step 3: Use BitSet to simulate possible subset sums
            BitSet dp = new BitSet(10001);
            dp.set(0); // Subset sum of 0 is always achievable

            // Step 4: For each number in the array
            for (int num : nums) {
                  // Shift all existing subset sums by current number
                  BitSet shifted = shiftLeft(dp, num);

                  // Merge new sums into dp
                  dp.or(shifted);
            }

            // Step 5: Check if target subset sum is possible
            return dp.get(target);
      }

      // Helper method to shift all bits in BitSet by 'shift' positions
      private BitSet shiftLeft(BitSet bs, int shift) {
            BitSet result = new BitSet();
            // Loop through all set bits
            for (int i = bs.nextSetBit(0); i >= 0; i = bs.nextSetBit(i + 1)) {
                  result.set(i + shift);  // Shift bit to the left
            }
            return result;
      }
}


//!------------------------------------------------------------------------------- 

//? ⌚ Time complexity ➺ O(n * s) 👉🏻   n = len(nums)

//? 🧺 Space complexity ➺ O(s)    👉🏻   s = sum(nums) // 2

class Solution {
      public boolean canPartition(int[] nums) {
            int totalSum = 0;
            // Calculate total sum of the array
            for (int num : nums) {
                  totalSum += num;
            }

            // If total sum is odd, can't divide into two equal subsets
            if (totalSum % 2 != 0) {
                  return false;
            }

            int target = totalSum / 2;

            Set<Integer> possibleSums = new HashSet<>();
            possibleSums.add(0); // Initialize with zero

            // Iterate through each number
            for (int num : nums) {
                  Set<Integer> nextSums = new HashSet<>();

                  // For each sum in current possibleSums
                  for (int s : possibleSums) {
                        if (s + num == target) {
                              return true; // Target found
                        }

                        nextSums.add(s); // Without current num
                        nextSums.add(s + num); // With current num
                  }

                  // Update the set for the next iteration
                  possibleSums = nextSums;
            }

            // No valid subset found
            return false;
      }
}
