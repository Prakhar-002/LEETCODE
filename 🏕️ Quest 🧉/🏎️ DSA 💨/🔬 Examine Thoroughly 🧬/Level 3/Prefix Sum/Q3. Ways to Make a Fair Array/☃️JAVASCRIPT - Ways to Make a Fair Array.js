//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L3.3 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var waysToMakeFair = function (nums) {
      const n = nums.length;

      // Total sum of elements at even indices
      let totalEven = 0;
      // Total sum of elements at odd indices
      let totalOdd = 0;

      for (let i = 0; i < n; i++) {
            if (i % 2 === 0) {
                  totalEven += nums[i];
            } else {
                  totalOdd += nums[i];
            }
      }

      // Prefix sums for elements before current index
      let prefixEven = 0;
      let prefixOdd = 0;

      let count = 0; // Number of indices that can be removed to make array fair

      for (let i = 0; i < n; i++) {
            const num = nums[i];

            // Remove current element from its respective total sum
            if (i % 2 === 0) {
                  totalEven -= num;   // current even index removed from even total
            } else {
                  totalOdd -= num;    // current odd index removed from odd total
            }

            // After removing nums[i], elements after i shift left and flip parity:
            // newEvenSum = even prefix + odd suffix
            // newOddSum  = odd prefix + even suffix
            const newEvenSum = prefixEven + totalOdd;
            const newOddSum = prefixOdd + totalEven;

            if (newEvenSum === newOddSum) {
                  count++; // This index is valid
            }

            // Update prefix sums for next iteration
            if (i % 2 === 0) {
                  prefixEven += num;
            } else {
                  prefixOdd += num;
            }
      }

      return count;
};
