//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 26

//? ⌚ Time complexity -> O(n) 👉 length of given nums array

//? 🧺 Space complexity -> O(1) 

var removeDuplicates = function (nums) {
      if (nums.length === 0) return 0;

      let i = 0;
      for (let j = 1; j < nums.length; j++) {
            if (nums[i] !== nums[j]) {
                  nums[++i] = nums[j];
            }
      }
      return i + 1;
};