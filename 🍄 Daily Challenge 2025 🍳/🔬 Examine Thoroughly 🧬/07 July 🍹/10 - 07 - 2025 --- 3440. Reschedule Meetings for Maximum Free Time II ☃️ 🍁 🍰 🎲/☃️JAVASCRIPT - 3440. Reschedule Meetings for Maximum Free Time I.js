//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3440

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(startTime)

//? 🧺 Space complexity ➺ O(n)

var maxFreeTime = function (eventTime, startTime, endTime) {
      const n = startTime.length;
      const q = new Array(n).fill(false);  // Mark if meeting can be skipped

      let t1 = 0, t2 = 0;

      for (let i = 0; i < n; i++) {
            // ---------- Forward Pass ----------
            if (endTime[i] - startTime[i] <= t1) {
                  q[i] = true;
            }
            t1 = Math.max(t1, startTime[i] - (i === 0 ? 0 : endTime[i - 1]));

            // ---------- Backward Pass ----------
            const rev = n - i - 1;
            if (endTime[rev] - startTime[rev] <= t2) {
                  q[rev] = true;
            }
            t2 = Math.max(t2, (i === 0 ? eventTime : startTime[n - i]) - endTime[rev]);
      }

      let res = 0;

      for (let i = 0; i < n; i++) {
            const left = (i === 0 ? 0 : endTime[i - 1]);
            const right = (i === n - 1 ? eventTime : startTime[i + 1]);

            if (q[i]) {
                  res = Math.max(res, right - left);  // Use full time block
            } else {
                  const occupied = endTime[i] - startTime[i];
                  res = Math.max(res, right - left - occupied);  // Skip meeting time
            }
      }

      return res;
};
