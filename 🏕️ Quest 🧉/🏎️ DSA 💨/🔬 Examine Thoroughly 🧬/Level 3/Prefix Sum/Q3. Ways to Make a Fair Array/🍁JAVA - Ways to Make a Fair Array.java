//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L3.3 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int waysToMakeFair(int[] nums) {
            int n = nums.length;

            // Total sum of elements at even indices
            int totalEven = 0;
            // Total sum of elements at odd indices
            int totalOdd = 0;

            for (int i = 0; i < n; i++) {
                  if (i % 2 == 0) {
                        totalEven += nums[i];
                  } else {
                        totalOdd += nums[i];
                  }
            }

            // Prefix sums for elements before current index
            int prefixEven = 0;
            int prefixOdd = 0;

            int count = 0; // Number of indices we can remove to make array fair

            for (int i = 0; i < n; i++) {
                  int num = nums[i];

                  // Remove current element from its respective total sum
                  if (i % 2 == 0) {
                        totalEven -= num; // current even index removed from even total
                  } else {
                        totalOdd -= num; // current odd index removed from odd total
                  }

                  // After removing nums[i], elements after i shift left and flip parity
                  // newEvenSum = even prefix + odd suffix
                  // newOddSum = odd prefix + even suffix
                  int newEvenSum = prefixEven + totalOdd;
                  int newOddSum = prefixOdd + totalEven;

                  // If sums of even and odd indices are equal, this index is valid
                  if (newEvenSum == newOddSum) {
                        count++;
                  }

                  // Add current element to corresponding prefix sum for next iterations
                  if (i % 2 == 0) {
                        prefixEven += num;
                  } else {
                        prefixOdd += num;
                  }
            }

            return count;
      }
}
