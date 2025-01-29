//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 189

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      // Helper function to reverse a portion of the array
      public static void reverseArray(int arr[], int start, int end) {
            int temp;
            // Swap elements until `start` meets `end`
            while (start < end) {
                  temp = arr[start];
                  arr[start] = arr[end];
                  arr[end] = temp;
                  start++;
                  end--;
            }
      }

      public void rotate(int[] nums, int k) {
            // Handle cases where k is greater than the array length
            k = k % nums.length;

            // Reverse the first part of the array
            reverseArray(nums, 0, nums.length - k - 1);

            // Reverse the second part of the array
            reverseArray(nums, nums.length - k, nums.length - 1);

            // Reverse the entire array to achieve rotation
            reverseArray(nums, 0, nums.length - 1);
      }
}
