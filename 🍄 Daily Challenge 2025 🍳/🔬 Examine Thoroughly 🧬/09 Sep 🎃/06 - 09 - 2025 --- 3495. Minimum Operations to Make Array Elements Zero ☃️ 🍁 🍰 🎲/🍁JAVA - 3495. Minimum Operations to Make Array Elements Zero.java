//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3495

//? ⌚ Time complexity ➺ O(n log R)  👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      // Helper function to compute cumulative weighted count up to 'num'
      private long get(int num) {
            long cnt = 0; // Accumulated result
            int i = 1; // Tracks level/depth (used for alternating weights)
            int base = 1; // Starting base interval = 1, doubles each step

            // Iterate while base is within num
            while (base <= num) {
                  // Determine the end of the interval [base, min(base*2 - 1, num)]
                  int end = Math.min(base * 2 - 1, num);

                  // Add contribution:
                  // (i+1)/2 weights the count depending on depth i
                  // Multiply by number of elements in range: (end - base + 1)
                  cnt += (long) ((i + 1) / 2) * (end - base + 1);

                  i++; // Move to next level
                  base *= 2; // Double the base for next interval
            }
            return cnt; // Return accumulated count
      }

      // Main function to calculate minimum operations across all queries
      public long minOperations(int[][] queries) {
            long res = 0; // Result accumulator

            // Iterate through each query [q[0], q[1]]
            for (int[] q : queries) {
                  long count1 = get(q[1]); // Cumulative count up to q[1]
                  long count2 = get(q[0] - 1); // Cumulative count up to just before q[0]

                  // Add contribution from query's range
                  // +1 ensures correct rounding before dividing by 2
                  res += (count1 - count2 + 1) / 2;
            }
            return res; // Return total result after processing queries
      }
}
