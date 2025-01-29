//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 169

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var majorityElement = function (num) {
      // Initialize `major` as the first element, with a count of 1
      let major = num[0];
      let count = 1;

      // Iterate through the array starting from the second element
      for (let i = 1; i < num.length; i++) {
            if (count === 0) {
                  // If count is 0, reset `major` to the current element
                  major = num[i];
                  count++;
            } else if (major === num[i]) {
                  // Increment count if the current element matches `major`
                  count++;
            } else {
                  // Decrement count if the current element does not match `major`
                  count--;
            }
      }

      // Return the majority element (guaranteed by problem constraints)
      return major;
}