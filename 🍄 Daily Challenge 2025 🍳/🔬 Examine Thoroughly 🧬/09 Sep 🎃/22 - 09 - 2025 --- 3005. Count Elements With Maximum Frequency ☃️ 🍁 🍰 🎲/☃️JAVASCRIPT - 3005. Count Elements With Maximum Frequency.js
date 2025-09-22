//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3005

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var maxFrequencyElements = function (nums) {
      const freq = new Map();          // Count frequency of each element

      for (const num of nums) {
            freq.set(num, (freq.get(num) || 0) + 1);
      }

      let maxFreq = 0;
      let totalFreq = 0;

      // Find max frequency and total frequencies of elements with max frequency
      for (const count of freq.values()) {
            if (count > maxFreq) {
                  maxFreq = count;
                  totalFreq = count;        // Reset total frequency to new max
            } else if (count === maxFreq) {
                  totalFreq += count;       // Add frequencies of other max freq elements
            }
      }

      return totalFreq;
};
