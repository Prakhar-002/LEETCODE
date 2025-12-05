//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2141

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(batteries)

//? 🧺 Space complexity ➺ O(1) 

class Solution {
      public long maxRunTime(int n, int[] batteries) {
            // Compute the total power available from all batteries
            long sumPower = 0;
            for (int power : batteries) {
                  sumPower += power;
            }

            // The answer (max uniform run time) is between 1 and sumPower / n
            long left = 1;
            long right = sumPower / n;

            // Binary search on possible running time
            while (left < right) {
                  // Bias mid towards the right to avoid infinite loop (upper mid)
                  long target = right - (right - left) / 2;

                  // extra = total usable power if each computer runs for 'target'
                  // For each battery, it can contribute at most 'target' units
                  long extra = 0;
                  for (int power : batteries) {
                        extra += Math.min(power, target);
                  }

                  // If total usable power can sustain n computers for 'target' time,
                  // it is feasible, so try a larger time.
                  if (extra >= (long) n * target) {
                        left = target; // target is feasible, move left up
                  } else {
                        right = target - 1; // target not feasible, move right down
                  }
            }

            // left == right is the maximum feasible uniform running time
            return left;
      }
}
