//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 189

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

// Helper function to reverse a portion of the array
var reverseArray = function (arr, start, end) {
      while (start < end) {
            // Swap elements
            let temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
      }
}

var rotate = function (nums, k) {
      // Handle cases where k is greater than the array length
      k %= nums.length;

      // Reverse the first part of the array
      reverseArray(nums, 0, nums.length - k - 1);

      // Reverse the second part of the array
      reverseArray(nums, nums.length - k, nums.length - 1);

      // Reverse the entire array to achieve rotation
      reverseArray(nums, 0, nums.length - 1);
}
