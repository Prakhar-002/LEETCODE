//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2526

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

class DataStream {
private:
      // `n` will count the current number of consecutive occurrences of `val`.
      int n;
      // `val` is the target integer we are looking for.
      int val;
      // `k_len` is the required length of the consecutive streak.
      int k_len;

public:
      DataStream(int value, int k) {
            this->n = 0;
            this->val = value;
            this->k_len = k;
      }

      bool consec(int num) {
            // Check if the incoming number matches our target `val`.
            if (this->val == num) {
                  // If it matches, we are extending the current streak.
                  this->n++;
            } else {
                  // If it does not match, the streak is broken, so reset the counter.
                  this->n = 0;
            }
            
            // The condition is met if our current streak count (`n`) is at least `k_len`.
            return this->n >= this->k_len;
      }
};
