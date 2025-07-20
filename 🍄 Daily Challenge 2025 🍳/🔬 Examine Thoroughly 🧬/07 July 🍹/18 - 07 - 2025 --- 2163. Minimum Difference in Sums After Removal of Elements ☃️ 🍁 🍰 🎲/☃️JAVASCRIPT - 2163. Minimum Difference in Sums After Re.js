//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2163

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      minimumDifference(nums) {
            const n = nums.length / 3;

            // Track left minimum sum using max heap
            const leftSum = Array(n + 1).fill(0);
            const maxHeap = new MaxPriorityQueue();
            let totalLeft = 0;

            for (let i = 0; i < n; i++) {
                  maxHeap.enqueue(nums[i]);
                  totalLeft += nums[i];
            }
            leftSum[0] = totalLeft;

            for (let i = n; i < 2 * n; i++) {
                  totalLeft += nums[i];
                  maxHeap.enqueue(nums[i]);
                  totalLeft -= maxHeap.dequeue().element;
                  leftSum[i - n + 1] = totalLeft;
            }

            // Track right maximum sum using min heap
            const minHeap = new MinPriorityQueue();
            let totalRight = 0;

            for (let i = 2 * n; i < 3 * n; i++) {
                  minHeap.enqueue(nums[i]);
                  totalRight += nums[i];
            }

            let result = leftSum[n] - totalRight;

            for (let i = 2 * n - 1; i >= n; i--) {
                  minHeap.enqueue(nums[i]);
                  totalRight += nums[i];
                  totalRight -= minHeap.dequeue().element;
                  result = Math.min(result, leftSum[i - n] - totalRight);
            }

            return result;
      }
}
