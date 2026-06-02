//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3635

//? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = len(landStartTime)

//? 🧺 Space complexity ➺ O(1)    👉🏻  m = len(waterStartTime)

var earliestFinishTime = function(landStartTime, landDuration, waterStartTime, waterDuration) {

      // Find earliest finish time when doing all A tasks first, then one B task
      function solve(startA, durationA, startB, durationB) {

            // Find the earliest time all A tasks can finish
            let endA = Infinity;
            for (let i = 0; i < startA.length; i++) {
                  endA = Math.min(endA, startA[i] + durationA[i]);
            }

            // Pick the B task that finishes earliest after all A tasks are done
            let ans = Infinity;
            for (let i = 0; i < startB.length; i++) {
                  // Must wait until endA if B hasn't started yet
                  ans = Math.min(ans, Math.max(startB[i], endA) + durationB[i]);
            }

            return ans;
      }

      // Try land tasks first, then a water task
      const landFirst  = solve(landStartTime, landDuration, waterStartTime, waterDuration);

      // Try water tasks first, then a land task
      const waterFirst = solve(waterStartTime, waterDuration, landStartTime, landDuration);

      // Return whichever ordering finishes earlier
      return Math.min(landFirst, waterFirst);
};