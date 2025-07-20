//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2163

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      long long minimumDifference(vector<int>& nums) {
            int n = nums.size() / 3;

            // leftSum[i] stores min sum of i + n smallest elements from first 2n
            vector<long long> leftSum(n + 1);
            priority_queue<int> maxHeap;
            long long totalLeft = 0;

            // Push first n elements into maxHeap
            for (int i = 0; i < n; ++i) {
                  maxHeap.push(nums[i]);
                  totalLeft += nums[i];
            }
            leftSum[0] = totalLeft;

            // Iterate over next n elements
            for (int i = n; i < 2 * n; ++i) {
                  maxHeap.push(nums[i]);
                  totalLeft += nums[i];
                  totalLeft -= maxHeap.top(); // Remove max to keep smallest n
                  maxHeap.pop();
                  leftSum[i - n + 1] = totalLeft;
            }

            // Use min heap for right part
            priority_queue<int, vector<int>, greater<int>> minHeap;
            long long totalRight = 0;

            // Add last n elements to min heap
            for (int i = 2 * n; i < 3 * n; ++i) {
                  minHeap.push(nums[i]);
                  totalRight += nums[i];
            }

            // Initial result as leftSum[n] - totalRight
            long long result = leftSum[n] - totalRight;

            // Traverse middle n elements in reverse
            for (int i = 2 * n - 1; i >= n; --i) {
                  minHeap.push(nums[i]);
                  totalRight += nums[i];
                  totalRight -= minHeap.top(); // Remove min to keep largest n
                  minHeap.pop();
                  result = min(result, leftSum[i - n] - totalRight);
            }

            return result;
      }
};
