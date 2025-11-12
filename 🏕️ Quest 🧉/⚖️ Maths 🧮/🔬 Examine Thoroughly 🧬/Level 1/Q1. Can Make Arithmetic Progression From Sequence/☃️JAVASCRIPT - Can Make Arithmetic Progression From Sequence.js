//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L1 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

function canMakeArithmeticProgression(arr) {
      arr.sort((a, b) => a - b);  // Sort array numerically

      const diff = arr[1] - arr[0];  // Initial common difference

      // Check if consecutive differences are equal to the common difference
      for (let i = 2; i < arr.length; i++) {
            if (arr[i] - arr[i - 1] !== diff) {
                  return false;  // Mismatch found, not AP
            }
      }

      return true;  // All differences match, is an AP
}
