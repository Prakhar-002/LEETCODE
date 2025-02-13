//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3066

//? ⌚ Time complexity ➺ O(n Log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var minOperations = function (nums, k) {
      // Create a min-heap (priority queue) to efficiently 
      // find the smallest elements
      const minHeap = new MinPriorityQueue();

      // Add all elements from the 'nums' array to the heap
      for (const num of nums) {
            minHeap.enqueue(num);
      }

      let operations = 0;

      // Iterate until there are enough elements and 
      // the top element remains smaller than 'k'
      while (minHeap.size() >= 2 && minHeap.front().element < k) {
            const x = minHeap.dequeue().element;
            const y = minHeap.dequeue().element;

            // Calculate the result for combining elements
            // Add the combined result back into the heap
            minHeap.enqueue(2 * Math.min(x, y) + Math.max(x, y));

            operations++;
      }

      // If the heap is not empty, all elements are now >= k
      return minHeap.isEmpty() ? -1 : operations;
};
