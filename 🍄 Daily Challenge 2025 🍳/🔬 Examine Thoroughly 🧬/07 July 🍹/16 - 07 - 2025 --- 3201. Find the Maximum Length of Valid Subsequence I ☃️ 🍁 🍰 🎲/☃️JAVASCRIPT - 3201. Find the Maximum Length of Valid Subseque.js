//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3201

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var maximumLength = function (nums) {
      let maxLen = 0; // To store the longest matching subsequence

      // Define all 4 alternating patterns using parity (0 = even, 1 = odd)
      const patterns = [[0, 0], [0, 1], [1, 0], [1, 1]];

      for (let pattern of patterns) {
            let count = 0; // Tracks current valid subsequence length

            for (let num of nums) {
                  const parity = num % 2;

                  // Alternate between pattern[0] and pattern[1] using count % 2
                  if (parity === pattern[count % 2]) {
                        count++; // Extend sequence
                  }
            }

            maxLen = Math.max(maxLen, count); // Update result if larger
      }

      return maxLen; // Final answer
};

//!----------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var maximumLength = function (nums) {
      let n = nums.length;
      let oddCount = 0;      // Count of odd numbers
      let evenCount = 0;     // Count of even numbers
      let altCount = 1;      // Alternating parity sequence length
      let prev = nums[0];    // Store previous number to compare parity

      for (let i = 0; i < n; i++) {
            if (nums[i] % 2 === 1) {
                  oddCount++;
            } else {
                  evenCount++;
            }

            // Check if current number has different parity from previous
            if (i >= 1 && nums[i] % 2 !== prev % 2) {
                  altCount++;
                  prev = nums[i];
            }
      }

      // Return maximum of odd, even, or alternating count
      return Math.max(oddCount, evenCount, altCount);
};
