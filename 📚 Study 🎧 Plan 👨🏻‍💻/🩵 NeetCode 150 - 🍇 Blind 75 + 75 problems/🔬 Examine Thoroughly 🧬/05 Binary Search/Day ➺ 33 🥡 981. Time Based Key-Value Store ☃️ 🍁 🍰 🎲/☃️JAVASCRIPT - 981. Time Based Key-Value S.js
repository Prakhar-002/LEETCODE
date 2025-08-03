//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 981

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m * n)

class TimeMap {
      constructor() {
            // Store key -> array of [value, timestamp]
            this.store = new Map();
      }

      set(key, value, timestamp) {
            // If key doesn't exist, initialize with empty array
            if (!this.store.has(key)) {
                  this.store.set(key, []);
            }

            // Push the [value, timestamp] pair to the key's list
            this.store.get(key).push([value, timestamp]);
      }

      get(key, timestamp) {
            let res = ""; // Default return value

            // Get the list of values for the key
            const values = this.store.get(key) || [];

            let l = 0;
            let r = values.length - 1;

            // Binary search to find closest timestamp <= target
            while (l <= r) {
                  const m = Math.floor((l + r) / 2);

                  if (values[m][1] <= timestamp) {
                        res = values[m][0]; // Store value
                        l = m + 1;          // Search right side
                  } else {
                        r = m - 1;          // Search left side
                  }
            }

            return res;
      }
}
