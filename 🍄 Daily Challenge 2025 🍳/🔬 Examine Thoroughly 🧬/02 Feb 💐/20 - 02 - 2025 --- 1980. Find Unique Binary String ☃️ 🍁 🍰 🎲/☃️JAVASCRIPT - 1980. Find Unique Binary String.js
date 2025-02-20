//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1980

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var findDifferentBinaryString = function (nums) {
      // Initialize an empty array to store the binary string
      let binaryStr = [];

      // Iterate through each string in the input array
      for (let i = 0; i < nums.length; i++) {
            // Get the i-th character from the i-th string (diagonal element)
            let cur = nums[i][i];

            // Flip the bit: '0' becomes '1', and '1' becomes '0'
            binaryStr.push(cur === "0" ? "1" : "0");
      }

      // Convert array to string and return
      return binaryStr.join("");
}
