//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 440

//? ⌚ Time complexity ➺ O(log n)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int findKthNumber(int n, int k) {
            // `cur` is initialized to 1,
            // which is our starting point in lexicographical order
            int cur = 1;
            // `i` is initialized to 1,
            // representing the first step in our search
            int i = 1;

            while (i < k) {
                  // `stepCount(cur)` is used to determine the
                  // number of lexicographical numbers from the current `cur`
                  int steps = stepCount(cur, n);

                  // If adding `steps` to `i` would overshoot `k`
                  // it means the k-th number must be found by
                  // going deeper into the current prefix
                  if (i + steps <= k) {
                        // If it does not overshoot, it points to the fact that
                        // the k-th number is not within this deeper level

                        // `cur` is incremented by 1 to move to the next prefix
                        // (e.g., from `1` to `2` if initially 1 had been the current)
                        cur++;
                        // Increment `i` by `steps` since all those steps are now included up to the
                        // next prefix
                        i += steps;
                  } else {
                        // `cur` is multiplied by 10
                        // to go one level deeper in the lexicographical tree
                        // (e.g., from 1 to 10, 10 to 100)
                        cur *= 10;
                        // Increment `i` since it now includes the current `cur` number itself
                        i++;
                  }
            }
            return cur;
      }

      private int stepCount(long cur, int n) {
            // `steps` initializes at 0,
            // which will accumulate the count of valid numbers
            int steps = 0;
            // `first` will start from the current prefix
            long first = cur;
            // `last` is the next prefix in the sequence
            long last = cur + 1;

            // loop breaks when `first` goes beyond `n`
            while (first <= n) {
                  // calculates the number of steps
                  // or numbers between 'cur' and the next prefix
                  steps += (int) Math.min(last, n + 1L) - first;
                  // explore numbers within the range
                  // while multiplying by 10 for each iteration
                  first *= 10;
                  last *= 10;
            }

            return steps;
      }
}