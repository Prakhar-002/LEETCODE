//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.1 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var longestConsecutive = function (nums) {
      // Set provides O(1) lookups and automatic deduplication
      const hashSet = new Set(nums);

      let longest = 0;  // Length of longest consecutive sequence

      // Only process potential sequence starts
      for (let n of hashSet) {
            // If n-1 doesn't exist, n starts a sequence
            if (!hashSet.has(n - 1)) {
                  let curStreak = 1;  // Current sequence length
                  let cur = n;        // Current number

                  // Extend sequence forward while next number exists
                  while (hashSet.has(cur + 1)) {
                        curStreak++;
                        cur++;
                  }

                  // Update longest streak found
                  longest = Math.max(longest, curStreak);
            }
      }

      return longest;
};
