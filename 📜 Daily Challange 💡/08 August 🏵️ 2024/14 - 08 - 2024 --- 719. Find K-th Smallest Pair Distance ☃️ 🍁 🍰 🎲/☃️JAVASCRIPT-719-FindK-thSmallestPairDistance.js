//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 719

//? ⌚ Time complexity ➺ O(n log n + n log(max(nums))) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var smallestDistancePair = function (nums, k) {
      // first sort the array
      // it ensures that all pairs will be considered in order
      // from closest to farthest apart
      nums.sort((a, b) => a - b);

      // initialize the binary search
      // to find the k-th smallest dist

      // two pointers smallest and largest distances in the sorted list
      let left = 0, right = nums[nums.length - 1] - nums[0];
      while (left < right) {
            // `mid` is calculated as the avg of `left` and `right`
            let mid = left + Math.floor((right - left) / 2);

            // function to counts how many pairs have a distance <= `mid`
            let pairs = getPairs(nums, mid);

            // if `pairs` >= `k`
            if (pairs >= k) {
                  // it means the k-th smallest distance could be `mid` or smaller
                  // so we adjust `right = mid` to search the lower half
                  right = mid;
            } else {
                  // Otherwise, we search the higher half by setting `left = mid + 1`
                  left = mid + 1;
            }
      }

      return left;
};


// This function takes a distance `dist` as input
// and counts the total number of pairs
// within the sorted array that have a difference
// less than or equal to this distance

function getPairs(nums, dist) {
      // count total num of pairs
      // with diff <= dist
      let left = 0;
      let pairs = 0;
      for (let right = 0; right < nums.length; right++) {
            // ensure we are counting pairs within the specified distance
            while (nums[right] - nums[left] > dist) {
                  // and inc the left
                  left++;
            }
            // gives the number of pairs for the current `right` idx
            pairs += right - left;
      }

      return pairs;
}

