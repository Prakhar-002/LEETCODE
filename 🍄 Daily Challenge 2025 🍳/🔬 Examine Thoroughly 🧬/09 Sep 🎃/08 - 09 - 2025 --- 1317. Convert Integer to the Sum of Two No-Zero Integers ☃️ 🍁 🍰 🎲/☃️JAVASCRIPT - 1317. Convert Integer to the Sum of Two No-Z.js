//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1317

//? ⌚ Time complexity ➺ O(n log n)

//? 🧺 Space complexity ➺ O(1)

var getNoZeroIntegers = function (n) {
      //      Iterate over possible values for A from 1 to n-1
      for (let A = 1; A < n; A++) {
            const B = n - A;                          //      Calculate B so that A + B = n

            //      Check whether both A and B have no '0' in their digits
            if (!A.toString().includes('0') &&
                  !B.toString().includes('0')) {
                  return [A, B];                      //      Return the pair [A, B] if both are valid
            }
      }
      return [];                                     //      Return empty array if not found
};