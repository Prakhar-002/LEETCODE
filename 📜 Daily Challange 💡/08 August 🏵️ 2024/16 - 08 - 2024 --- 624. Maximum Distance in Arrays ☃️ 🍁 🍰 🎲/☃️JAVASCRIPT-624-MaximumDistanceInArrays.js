//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 624

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(arrays)

//? 🧺 Space complexity ➺ O(1)

const maxDistance = function (arrays) {
      // assigned the minimum and maximum values from the first array
      let curMin = arrays[0][0];
      let curMax = arrays[0][arrays[0].length - 1];

      // track of the maximum absolute difference found so far
      let maxDifference = 0;

      // loop from 2nd array
      for (let i = 1; i < arrays.length; i++) {
            // extract the current array
            const arr = arrays[i];

            // take the max of all possibility
            maxDifference = Math.max(
                  maxDifference,
                  Math.max(
                        // diff btw the highest value of the cur arr - curMin
                        arr[arr.length - 1] - curMin,
                        // diff btw the `curMax` and the lowest value of the cur arr
                        curMax - arr[0]
                  )
            );

            // update the cur min max
            curMin = Math.min(curMin, arr[0]);  // `curMin` and the first element
            curMax = Math.max(curMax, arr[arr.length - 1]); //  current `curMax` and the last element
      }

      return maxDifference;
};