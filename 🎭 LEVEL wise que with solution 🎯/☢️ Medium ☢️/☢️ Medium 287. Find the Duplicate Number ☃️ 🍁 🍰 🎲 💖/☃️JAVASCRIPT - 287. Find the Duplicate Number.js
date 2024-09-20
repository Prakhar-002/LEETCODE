//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 287

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var findDuplicate = function (nums) {
      // `slow = 0` and `fast = 0` are two pointers
      // initialized at the start of the array `nums`.
      let slow = 0;
      let fast = 0;

      // do-while loop continues until the slow and fast pointers meet
      do {
            // `slow` pointer moves one step at a time
            slow = nums[slow];
            // `fast` pointer moves two steps at a time
            fast = nums[nums[fast]];
      } while (slow !== fast);

      // `newSlow = 0` is initialized
      // This pointer will be used to find the entrance to the cycle
      let newSlow = 0;

      // while loop continues until both pointers meet at the entrance of the cycle
      while (newSlow !== slow) {
            // `slow` move one step at a time within the array
            slow = nums[slow];
            // `newSlow` move one step at a time within the array
            newSlow = nums[newSlow];
      }

      // the entrance to the cycle is the duplicate number in the array
      return slow;
};