//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2526

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

class DataStream {
      // `n` will count the current number of consecutive occurrences of `value`.
      private int n;
      // `value` is the target integer we are looking for.
      private int value;
      // `k` is the required length of the consecutive streak.
      private int k;

      public DataStream(int value, int k) {
            this.n = 0;
            this.value = value;
            this.k = k;
      }

      public boolean consec(int num) {
            // Check if the incoming number matches our target `value`.
            if (this.value == num) {
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
