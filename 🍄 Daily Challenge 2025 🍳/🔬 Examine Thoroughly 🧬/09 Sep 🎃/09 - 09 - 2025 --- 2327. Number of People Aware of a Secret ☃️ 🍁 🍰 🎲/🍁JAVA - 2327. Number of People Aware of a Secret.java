//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2327

//? ⌚ Time complexity ➺ O(n) 

//? 🧺 Space complexity ➺ O(n)

class Solution {
      // Define modulo for problem limits
      private static final int MOD = 1000000007;

      public int peopleAwareOfSecret(int n, int delay, int forget) {
            // Store people who know the secret but not sharing yet (day learned, count)
            Deque<int[]> know = new LinkedList<>();

            // Store people who are sharing the secret (day started sharing, count)
            Deque<int[]> share = new LinkedList<>();

            know.add(new int[] { 1, 1 }); // Day 1: one person knows the secret

            int knowCnt = 1; // Number who currently know but can't share
            int shareCnt = 0; // Number who are currently sharing

            // Process days from 2 to n
            for (int i = 2; i <= n; i++) {
                  // Move people from know to share if delay has passed
                  if (!know.isEmpty() && know.peekFirst()[0] == i - delay) {
                        int[] first = know.pollFirst(); // Get the earliest person(s) who delay ended
                        knowCnt = (knowCnt - first[1] + MOD) % MOD; // Remove from know count
                        shareCnt = (shareCnt + first[1]) % MOD; // Add to share count
                        share.add(first); // Remember when they started sharing
                  }

                  // Remove sharers who forget on this day
                  if (!share.isEmpty() && share.peekFirst()[0] == i - forget) {
                        int[] first = share.pollFirst(); // Earliest sharer(s) who forget today
                        shareCnt = (shareCnt - first[1] + MOD) % MOD;
                  }

                  // Add new knowers if there are sharers today
                  if (!share.isEmpty()) {
                        knowCnt = (knowCnt + shareCnt) % MOD; // All sharers teach new people
                        know.add(new int[] { i, shareCnt }); // Record when new people learned (today)
                  }
            }

            // Return total people still knowing the secret
            return (knowCnt + shareCnt) % MOD;
      }
}
