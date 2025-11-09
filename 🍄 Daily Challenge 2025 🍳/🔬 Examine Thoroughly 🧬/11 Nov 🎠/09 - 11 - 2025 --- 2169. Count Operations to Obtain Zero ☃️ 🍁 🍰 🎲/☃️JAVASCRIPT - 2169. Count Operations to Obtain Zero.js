//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2169

//? ⌚ Time complexity ➺ O(log(max(n1, n2) 

//? 🧺 Space complexity ➺ O(1)

var countOperations = function (num1, num2) {
      let res = 0;  // Operations counter

      // Loop while both numbers are positive
      while (num1 !== 0 && num2 !== 0) {
            if (num1 >= num2) {
                  res += Math.floor(num1 / num2);  // How many times num2 fits into num1
                  num1 = num1 % num2;               // Update num1 to remainder
            } else {
                  res += Math.floor(num2 / num1);  // How many times num1 fits into num2
                  num2 = num2 % num1;               // Update num2 to remainder
            }
      }
      return res;  // Return total number of operations
}