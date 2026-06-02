//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3633

//? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = len(landStartTime)

//? 🧺 Space complexity ➺ O(1)    👉🏻  m = len(waterStartTime)

import java.util.List;

class Solution {

      // Find earliest finish time when doing all A tasks first, then one B task
      private int solve(int[] startA, int[] durationA,
                  int[] startB, int[] durationB) {

            // Find the earliest time all A tasks can finish
            int endA = Integer.MAX_VALUE;
            for (int i = 0; i < startA.length; i++) {
                  endA = Math.min(endA, startA[i] + durationA[i]);
            }

            // Pick the B task that finishes earliest after all A tasks are done
            int ans = Integer.MAX_VALUE;
            for (int i = 0; i < startB.length; i++) {
                  // Must wait until endA if B hasn't started yet
                  ans = Math.min(ans, Math.max(startB[i], endA) + durationB[i]);
            }

            return ans;
      }

      public int earliestFinishTime(int[] landStartTime, int[] landDuration,
                  int[] waterStartTime, int[] waterDuration) {
            // Try land tasks first, then a water task
            int landFirst = solve(landStartTime, landDuration, waterStartTime, waterDuration);

            // Try water tasks first, then a land task
            int waterFirst = solve(waterStartTime, waterDuration, landStartTime, landDuration);

            // Return whichever ordering finishes earlier
            return Math.min(landFirst, waterFirst);
      }
}