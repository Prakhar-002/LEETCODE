//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.2 Q3

// ? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(n)

var isPossible = function (target) {

      // If the array only has one element, 
      // it must be 1 to be valid.
      if (target.length === 1)
            return target[0] === 1;

      // Create a max-heap to always get the largest number efficiently.
      const maxHeap = new MaxPriorityQueue();
      let total = 0; // Track the sum of all elements.

      // Push each element into the max-heap (priority queue)
      // and compute the total sum of the array.
      for (let num of target) {
            maxHeap.enqueue(num);
            total += num;
      }

      // Start the reduction loop.
      while (true) {
            // Get the current largest element.
            let x = maxHeap.dequeue();

            // Calculate the sum of the other elements.
            let rest = total - x;

            // Early exit: if largest element is 1,
            // or all other elements sum to 1 (valid case).
            if (x === 1 || rest === 1) return true;

            // If sum of rest is zero (invalid),
            // or x is not strictly larger than rest,
            // or x is a multiple of rest (would repeat forever), return false.
            if (rest === 0 || x < rest || x % rest === 0) return false;

            // Calculate the previous value of x before the last operation.
            let prev = x % rest;

            // Update total sum with the replacement value.
            total = rest + prev;

            // Insert the previous value back into the heap for the next iteration.
            maxHeap.enqueue(prev);
      }

      // Should not reach here; added for completion.
      return false;
};
