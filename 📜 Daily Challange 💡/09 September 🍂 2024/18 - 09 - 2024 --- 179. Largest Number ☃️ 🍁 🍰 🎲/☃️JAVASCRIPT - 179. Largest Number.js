//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 179

//? ⌚ Time complexity ➺ O(NLogN) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var largestNumber = function (nums) {
      // `numStrings` is created to store string equivalents of the integer
      let numStrings = nums.map(String);

      // sorted using `Array.sort` with a custom comparison function 
      numStrings.sort((n1, n2) => {
            // effectively determines which concatenation results 
            // in a numerically larger string and sorts accordingly
            return (n2 + n1).localeCompare(n1 + n2);
      });

      // If the largest number is 0, return "0" { Handling Edge Case }
      if (numStrings[0] === "0") {
            //* `['0', '0']` should become `0`, not `00`
            return "0";
      }

      // Join the sorted strings and return
      return numStrings.join('');
};