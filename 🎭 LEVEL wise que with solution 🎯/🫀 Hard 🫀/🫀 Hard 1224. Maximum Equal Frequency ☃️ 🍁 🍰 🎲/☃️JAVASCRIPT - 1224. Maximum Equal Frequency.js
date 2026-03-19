//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1224

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var maxEqualFreq = function (nums) {
      // cnt.get(num)  = how many times num has appeared so far
      const cnt = new Map();
      // freq.get(f)   = how many distinct numbers currently have frequency f
      const freq = new Map();

      let maxF = 0;    // Highest frequency seen so far
      let res = 0;    // Longest valid prefix length

      for (let i = 0; i < nums.length; i++) {
            const num = nums[i];

            // ---------- Update count for current number ----------
            const prevCnt = cnt.get(num) || 0;
            cnt.set(num, prevCnt + 1);

            // ---------- Update frequency map ----------
            // Remove old frequency bucket
            freq.set(prevCnt, (freq.get(prevCnt) || 0) - 1);
            // Add to new frequency bucket
            freq.set(prevCnt + 1, (freq.get(prevCnt + 1) || 0) + 1);

            // ---------- Track max frequency ----------
            maxF = Math.max(maxF, prevCnt + 1);

            // ---------- Check 3 validity conditions ----------
            // Condition 1: every number appears exactly maxF times
            //              and removing one still leaves equal freqs
            const cond1 = maxF * (freq.get(maxF) || 0) === i;

            // Condition 2: all but one number appear maxF-1 times,
            //              and that one number appears maxF times (remove it once)
            const cond2 = (maxF - 1) * ((freq.get(maxF - 1) || 0) + 1) === i;

            // Condition 3: every number appears exactly once (maxF == 1)
            //              removing any one element keeps the rest valid
            const cond3 = maxF === 1;

            if (cond1 || cond2 || cond3) {
                  res = i + 1;
            }
      }

      return res;
};