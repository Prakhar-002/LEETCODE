//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 395

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var longestSubstring = function(s, k) {
      let ans = 0;

      // Iterate through target number of unique characters (1 to 26)
      for (let uniqueTarget = 1; uniqueTarget <= 26; uniqueTarget++) {
            const freq = new Array(26).fill(0);
            let l = 0;
            let uniqueCount = 0;
            let validCount = 0;

            for (let r = 0; r < s.length; r++) {
                  const idx = s.charCodeAt(r) - 97; // 97 is 'a'

                  // Track new unique character in window
                  if (freq[idx] === 0) {
                        uniqueCount++;
                  }

                  freq[idx]++;

                  // Track characters reaching frequency threshold k
                  if (freq[idx] === k) {
                        validCount++;
                  }

                  // Shrink window from left if unique count exceeds target
                  while (uniqueCount > uniqueTarget) {
                        const leftIdx = s.charCodeAt(l) - 97;

                        if (freq[leftIdx] === k) {
                              validCount--;
                        }

                        freq[leftIdx]--;

                        if (freq[leftIdx] === 0) {
                              uniqueCount--;
                        }

                        l++;
                  }

                  // Record longest valid substring length
                  if (uniqueCount === uniqueTarget && validCount === uniqueTarget) {
                        ans = Math.max(ans, r - l + 1);
                  }
            }
      }

      return ans;
};