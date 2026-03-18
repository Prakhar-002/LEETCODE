//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 347

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var topKFrequent = function (nums, k) {
      // Step 1: Count the frequency of each number using a Map
      const count = new Map();
      for (const num of nums) {
            count.set(num, (count.get(num) || 0) + 1);
      }

      // Step 2: Create a frequency bucket (array of arrays)
      const freq = Array(nums.length + 1).fill(0).map(() => []);

      // Step 3: Fill the frequency bucket with numbers corresponding to their frequencies
      for (const [num, cnt] of count.entries()) {
            freq[cnt].push(num);
      }

      // Step 4: Prepare the result list
      const res = [];

      // Step 5: Iterate through the frequency bucket in reverse order (high to low frequency)
      for (let i = freq.length - 1; i > 0; i--) {
            for (const num of freq[i]) {
                  res.push(num);
                  // Stop when we have collected `k` elements
                  if (res.length === k) {
                        return res;
                  }
            }
      }
}