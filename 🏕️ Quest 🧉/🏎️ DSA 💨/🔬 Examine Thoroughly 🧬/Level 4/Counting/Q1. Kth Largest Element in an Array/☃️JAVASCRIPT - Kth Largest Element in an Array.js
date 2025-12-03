//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 215

//? ⌚ Time complexity ➺ O(N Log k) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(k)

var findKthLargest = function (nums, k) {
      // Create a min heap of size k
      const minHeap = new MinPriorityQueue();

      for (const num of nums) {
            minHeap.enqueue(num);

            // If heap size exceeds k, remove the smallest element
            if (minHeap.size() > k) {
                  minHeap.dequeue();
            }
      }

      // The root of the min heap is the k-th largest element
      return minHeap.front().element;
}