//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3066

//? ⌚ Time complexity ➺ O(n Log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var minOperations = function (nums, k) {
      // Using a min-heap (priority queue) to always process the smallest elements first
      let minHeap = [];

      // Helper function to push an element while maintaining heap property
      const pushHeap = (num) => {
            minHeap.push(num);
            minHeap.sort((a, b) => a - b); // Ensure the heap remains sorted
      };

      // Adding all elements of nums array to the heap
      nums.forEach(n => pushHeap(n));

      let operations = 0; // Counter for the number of operations

      // Continue merging elements until the smallest element in the heap is at least k
      while (minHeap[0] < k) {
            let x = minHeap.shift(); // Remove the smallest element
            let y = minHeap.shift(); // Remove the second smallest element

            // Merge the two elements using the given formula
            pushHeap(Math.min(x, y) * 2 + Math.max(x, y));

            operations++; // Increment operation count
      }

      return operations; // Return the total number of operations
}