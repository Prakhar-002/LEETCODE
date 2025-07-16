//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 300

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(len(res))

var lengthOfLIS = function (nums) {
      let lis = [];  // Array to hold potential ends of increasing subsequences

      const binarySearch = (arr, target) => {
            let left = 0, right = arr.length - 1;
            while (left <= right) {
                  let mid = Math.floor((left + right) / 2);
                  if (arr[mid] === target) return mid;
                  else if (arr[mid] > target) right = mid - 1;
                  else left = mid + 1;
            }
            return left;  // Index to insert or replace
      };

      for (let num of nums) {
            if (lis.length === 0 || num > lis[lis.length - 1]) {
                  lis.push(num);  // Append if it's increasing
            } else {
                  let idx = binarySearch(lis, num);  // Find replace index
                  lis[idx] = num;  // Replace to maintain minimum values
            }
      }

      return lis.length;  // The length of lis is the answer
};
