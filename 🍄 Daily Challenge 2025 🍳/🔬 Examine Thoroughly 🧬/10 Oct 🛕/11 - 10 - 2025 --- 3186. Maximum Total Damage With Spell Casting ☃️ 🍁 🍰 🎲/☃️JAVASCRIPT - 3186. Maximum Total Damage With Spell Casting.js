//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3186

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var maximumTotalDamage = function (power) {
      // Count frequencies of each unique power value
      let freqMap = new Map();
      for (let p of power) {
            freqMap.set(p, (freqMap.get(p) || 0) + 1);
      }

      // Vector of [powerValue, frequency] pairs, starting with a dummy value to simplify index logic
      let freqList = [[-1000000000, 0]];

      // Sorted keys of power values
      let sortedPowers = Array.from(freqMap.keys()).sort((a, b) => a - b);

      // Build sorted frequency list
      for (let powerVal of sortedPowers) {
            freqList.push([powerVal, freqMap.get(powerVal)]);
      }

      const n = freqList.length;

      // dp array where dp[i] stores the max damage considering freqList[0..i]
      let dp = new Array(n).fill(0);

      let maxPrevDamage = 0; // Tracks the maximum dp value for non-overlapping groups
      let answer = 0;
      let l = 1; // Left pointer for sliding window

      for (let r = 1; r < n; r++) {
            // Move the left pointer to maintain the power difference constraint (> 2)
            while (l < r && freqList[l][0] < freqList[r][0] - 2) {
                  maxPrevDamage = Math.max(maxPrevDamage, dp[l]);
                  l++;
            }

            // Calculate dp for the current group: max previous compatible damage plus current group's total damage
            dp[r] = maxPrevDamage + freqList[r][0] * freqList[r][1];

            // Update the global answer
            answer = Math.max(answer, dp[r]);
      }

      return answer;
};
