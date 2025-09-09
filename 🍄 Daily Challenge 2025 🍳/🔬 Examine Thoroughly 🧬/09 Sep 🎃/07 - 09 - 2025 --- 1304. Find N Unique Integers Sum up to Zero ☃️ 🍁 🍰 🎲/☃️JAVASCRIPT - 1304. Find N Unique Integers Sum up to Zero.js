//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1304

//? ⌚ Time complexity ➺ O(n) 

//? 🧺 Space complexity ➺ O(1)

var sumZero = function (n) {
      const arr = [];                    //      Initialize the result array to store integers

      //      Add pairs of (-val, val) for each value from 1 to n / 2
      for (let val = 1; val <= Math.floor(n / 2); val++) {
            arr.push(-val);              //      Append negative value to balance positive
            arr.push(val);               //      Append positive value for zero sum pairing
      }
      //      If n is odd, add 0 to ensure total sum is zero
      if (n % 2 === 1) {
            arr.push(0);                 //      Append zero if required
      }
      return arr;                        //      Return the array with n integers summing to zero
};
