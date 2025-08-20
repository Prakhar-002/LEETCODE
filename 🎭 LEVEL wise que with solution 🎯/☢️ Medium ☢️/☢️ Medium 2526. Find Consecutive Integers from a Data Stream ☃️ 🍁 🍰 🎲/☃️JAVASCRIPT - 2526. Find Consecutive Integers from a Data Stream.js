//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2526

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

class DataStream {
      constructor(value, k) {
            // `n` will count the current number of consecutive occurrences of `value`.
            this.n = 0;
            // `value` is the target integer we are looking for.
            this.value = value;
            // `k` is the required length of the consecutive streak.
            this.k = k;
      }

      consec(num) {
            // Check if the incoming number matches our target `value`.
            if (this.value === num) {
                  // If it matches, we are extending the current streak.
                  this.n++;
            } else {
                  // If it does not match, the streak is broken, so reset the counter.
                  this.n = 0;
            }

            // The condition is met if our current streak count (`n`) is at least `k`.
            return this.n >= this.k;
      }
}
