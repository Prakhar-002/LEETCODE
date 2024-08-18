//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 264

//? ⌚ Time complexity ➺ O(n)

//? 🧺 Space complexity ➺ O(n)

var nthUglyNumber = function (n) {
      // initialized with `1` cause `1` is considered as the first ugly
      let ugliNum = [1];

      // pointers keep track of where we are in the list for the multiples of `2`, `3`, and `5` respectively
      let twoPointer = 0, threePointer = 0, fivePointer = 0;

      // loop runs from `1` to `n-1`, meant to generate the next `n-1` ugly numbers.
      for (let i = 1; i < n; i++) {
            // minimum value among
            let nextUgli = Math.min(
                  // cur smallest ugly number multiplied by `2`
                  ugliNum[twoPointer] * 2,
                  // cur smallest ugly number multiplied by `3`
                  ugliNum[threePointer] * 3,
                  // cur smallest ugly number multiplied by `5`
                  ugliNum[fivePointer] * 5
            );

            ugliNum.push(nextUgli);

            // If `nextUgli` was derived from multiplying by `2`, the `twoPointer` is incremented
            if (nextUgli === ugliNum[twoPointer] * 2) {
                  twoPointer++;
            }

            // If `nextUgli` was derived from multiplying by `3`, the `threePointer` is incremented
            if (nextUgli === ugliNum[threePointer] * 3) {
                  threePointer++;
            }

            // If `nextUgli` was derived from multiplying by `5`, the `fivePointer` is incremented
            if (nextUgli === ugliNum[fivePointer] * 5) {
                  fivePointer++;
            }
      }

      // returns the `n`th ugly number, which is at the `n-1` index
      return ugliNum[n - 1];
};