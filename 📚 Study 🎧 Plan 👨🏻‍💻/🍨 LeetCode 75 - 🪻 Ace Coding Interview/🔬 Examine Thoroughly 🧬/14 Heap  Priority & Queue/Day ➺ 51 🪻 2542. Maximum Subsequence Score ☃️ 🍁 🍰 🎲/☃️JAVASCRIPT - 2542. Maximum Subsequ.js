//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2542

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums1)

//? 🧺 Space complexity ➺ O(n)

const maxScore = function (nums1, nums2, k) {
      let result = 0;  // To store the maximum score found.
      let sum = 0;      // To track the sum of selected nums1 values.

      // MinPriorityQueue to always remove the smallest element from the selected nums1.
      // This helps ensure we maximize the sum while keeping the smallest number easily removable.
      let heap = new MinPriorityQueue();  // No priority function needed for plain numbers.

      // Combine nums1 and nums2 into pairs: [nums2[i], nums1[i]]
      // This allows sorting by nums2 values and processing in descending order.
      const merged = nums1.map((num, i) => [nums2[i], num]);

      // Sort by nums2 in descending order (biggest nums2 first).
      merged.sort((a, b) => b[0] - a[0]);

      // Iterate over each pair [num2, num1] (where num2 = nums2[i] and num1 = nums1[i])
      for (const [num2, num1] of merged) {
            // If the heap already has `k` elements, remove the smallest one to make space.
            if (heap.size() === k) {
                  sum -= heap.dequeue();  // Remove smallest num1 from sum.
            }

            // Add the current num1 to the sum and push it to the heap.
            sum += num1;
            heap.enqueue(num1);

            // If we have exactly `k` elements, calculate potential result.
            if (heap.size() === k) {
                  // Maximize: (sum of selected nums1) * (current nums2, the min nums2 of the selection).
                  result = Math.max(result, sum * num2);
            }
      }

      return result;  // Return the maximum score found.
};
