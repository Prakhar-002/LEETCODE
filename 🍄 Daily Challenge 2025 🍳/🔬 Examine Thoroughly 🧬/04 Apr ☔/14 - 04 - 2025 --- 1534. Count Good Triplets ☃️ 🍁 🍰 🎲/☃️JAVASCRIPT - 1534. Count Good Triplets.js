//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1534

//? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(arr)

//? 🧺 Space complexity ➺ O(1)

var countGoodTriplets = function (arr, a, b, c) {
      let count = 0;

      // Iterate through all combinations of i, j, k where i < j < k
      for (let i = 0; i < arr.length - 2; i++) {
            for (let j = i + 1; j < arr.length - 1; j++) {
                  for (let k = j + 1; k < arr.length; k++) {
                        let v = arr[i];
                        let u = arr[j];
                        let w = arr[k];

                        // Check the three conditions
                        if (Math.abs(v - u) <= a &&
                              Math.abs(u - w) <= b &&
                              Math.abs(v - w) <= c) {
                              count++;  // All conditions met, increment count
                        }
                  }
            }
      }

      return count;  // Return total number of good triplets
};
