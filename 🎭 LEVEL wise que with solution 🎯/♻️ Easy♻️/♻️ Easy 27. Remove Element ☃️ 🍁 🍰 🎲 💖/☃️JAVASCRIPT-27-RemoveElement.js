//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 27

//? ⌚ Time complexity -> O(n) 👉 length of arr

//? 🧺 Space complexity -> O(1) 

var removeElement = function (nums, val) {
      let index = 0;
      for (let i = 0; i < nums.length; i++) {
            if (nums[i] !== val) {
                  nums[index++] = nums[i];
            }
      }
      return index;
};