//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L1.2 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int[] findErrorNums(int[] nums) {
            int arr[] = new int[2]; // arr[0] = duplicate, arr[1] = missing
            int freq[] = new int[nums.length + 1]; // Frequency array to count occurrences

            // Count the frequency of each number in nums
            for (int i = 0; i < nums.length; i++) {
                  freq[nums[i]]++;
            }

            // Check frequencies to find duplicate and missing numbers
            for (int i = 1; i < freq.length; i++) {
                  if (freq[i] == 2) {
                        arr[0] = i; // Duplicate number found
                  }
                  if (freq[i] == 0) {
                        arr[1] = i; // Missing number found
                  }
            }

            return arr;
      }
}
