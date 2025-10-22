//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2011

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var finalValueAfterOperations = function (operations) {
      //      Map each operation to its effect on the variable
      const opr = {
            "--X": -1,          //      Decrement operation
            "X++": 1,           //      Increment operation
            "++X": 1,           //      Increment operation
            "X--": -1           //      Decrement operation
      };

      let finalVal = 0;         //      Initialize final value

      //      Apply each operation's effect
      for (const operation of operations) {
            finalVal += opr[operation];
      }

      return finalVal;          //      Return total computed value
};