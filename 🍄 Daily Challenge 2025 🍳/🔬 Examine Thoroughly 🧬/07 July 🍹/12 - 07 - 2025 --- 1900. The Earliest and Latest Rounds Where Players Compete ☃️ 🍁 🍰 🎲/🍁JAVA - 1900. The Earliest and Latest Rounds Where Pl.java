//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1900

//? ⌚ Time complexity ➺ O(n ^ 4) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(log n)

class Solution {
      // Recursive function to simulate the rounds
      private int[] dfs(int left, int right, int total) {
            if (left == right)
                  return new int[] { 1, 1 }; // same player
            if (left > right)
                  return dfs(right, left, total); // symmetry

            int minRound = Integer.MAX_VALUE;
            int maxRound = Integer.MIN_VALUE;

            // Try all possible positions of players in the next round
            for (int i = 1; i <= left; i++) {
                  for (int j = left - i + 1; j <= right - i; j++) {
                        int sum = i + j;
                        // Check if players can meet in current round
                        if (left + right - total / 2 <= sum && sum <= (total + 1) / 2) {
                              int[] res = dfs(i, j, (total + 1) / 2); // simulate next round
                              minRound = Math.min(minRound, res[0] + 1); // add current round
                              maxRound = Math.max(maxRound, res[1] + 1);
                        }
                  }
            }

            return new int[] { minRound, maxRound };
      }

      public int[] earliestAndLatest(int n, int firstPlayer, int secondPlayer) {
            // Map firstPlayer and secondPlayer to symmetric positions
            return dfs(firstPlayer, n - secondPlayer + 1, n);
      }
}
