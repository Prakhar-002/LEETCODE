//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Software Design L5 Q2

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class RangeFreqQuery {
      constructor(arr) {
            /**
             * Preprocess: value → sorted list of indices
             * Time: O(N), Space: O(N)
             */
            this.map = new Map();
            for (let i = 0; i < arr.length; i++) {
                  if (!this.map.has(arr[i])) {
                        this.map.set(arr[i], []);
                  }
                  this.map.get(arr[i]).push(i);
            }
      }

      query(left, right, value) {
            /**
             * Count occurrences of value in arr[left:right+1]
             * Time: O(log N) via binary search
             */
            if (!this.map.has(value)) {
                  return 0;
            }

            const indices = this.map.get(value);
            // lower_bound equivalent: first index >= left
            const start = this.lowerBound(indices, left);
            // lower_bound equivalent: first index >= right+1 (exclusive)
            const end = this.lowerBound(indices, right + 1);
            return end - start;
      }

      lowerBound(list, target) {
            let l = 0, r = list.length;
            while (l < r) {
                  let mid = Math.floor((l + r) / 2);
                  if (list[mid] < target) {
                        l = mid + 1;
                  } else {
                        r = mid;
                  }
            }
            return l;
      }
}
