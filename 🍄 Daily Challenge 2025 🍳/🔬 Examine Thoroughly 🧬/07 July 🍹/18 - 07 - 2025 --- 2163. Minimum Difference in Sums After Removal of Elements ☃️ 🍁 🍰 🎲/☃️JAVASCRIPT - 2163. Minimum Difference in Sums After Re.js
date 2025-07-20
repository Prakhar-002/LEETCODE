//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2163

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var minimumDifference = function (nums) {
      const n3 = nums.length,
            n = Math.floor(n3 / 3);
      const part1 = new Array(n + 1).fill(0);
      let sum = 0;
      // max heap (simulate with opposite numbers)
      const ql = new MaxPriorityQueue();
      for (let i = 0; i < n; ++i) {
            sum += nums[i];
            ql.enqueue(nums[i]);
      }

      part1[0] = sum;
      for (let i = n; i < n * 2; ++i) {
            sum += nums[i];
            ql.enqueue(nums[i]);
            sum -= ql.dequeue();
            part1[i - (n - 1)] = sum;
      }
      let part2 = 0;
      // min heap
      const qr = new MinPriorityQueue();
      for (let i = n * 3 - 1; i >= n * 2; --i) {
            part2 += nums[i];
            qr.enqueue(nums[i]);
      }

      let ans = part1[n] - part2;
      for (let i = n * 2 - 1; i >= n; --i) {
            part2 += nums[i];
            qr.enqueue(nums[i]);
            part2 -= qr.dequeue();
            ans = Math.min(ans, part1[i - n] - part2);
      }
      return ans;
};