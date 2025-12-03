//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1

//? ⌚ Time complexity -> O(n^2) 👉 array length

//? 🧺 Space complexity -> O(1) 

var twoSum = function (nums, target) {
      for (let i = 0; i < nums.length; i++) {
            for (let j = i + 1; j < nums.length; j++) {
                  if ((nums[i] + nums[j]) === target) {
                        return [i, j];
                  }
            }
      }
      return nums;
};


// ---------------------------------------------

//? ⌚ Time complexity -> O(n) 👉 array length

//? 🧺 Space complexity -> O(n) 👉 map length

var twoSum = function (nums, target) {
      const mp = {}

      for (let i = 0; i < nums.length; i++) {
            const diff = target - nums[i]

            if (diff in mp) {
                  return [i, mp[diff]]
            }

            mp[nums[i]] = i
      }
}