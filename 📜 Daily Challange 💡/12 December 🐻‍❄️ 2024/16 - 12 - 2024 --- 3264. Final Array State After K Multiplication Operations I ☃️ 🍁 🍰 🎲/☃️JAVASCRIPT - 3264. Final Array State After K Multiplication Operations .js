//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3264

//? ⌚ Time complexity ➺ O(k log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var getFinalState = function (nums, k, multiplier) {
      // Create an array to simulate a priority queue, storing [value, index] pairs.
      const pq = nums.map((num, index) => [num, index]);

      // Sort the array to maintain min-heap order: by value, then by index.
      pq.sort((a, b) => a[0] - b[0] || a[1] - b[1]);

      // Perform `k` operations, updating the smallest element.
      while (k-- > 0) {
            // Remove the smallest element (shift from the beginning of the array).
            const [value, index] = pq.shift();

            // Update the value by multiplying it with the `multiplier`.
            const updatedValue = value * multiplier;

            // Insert the updated element back into the array, maintaining sorted order.
            let inserted = false;
            for (let i = 0; i < pq.length; i++) {
                  // Compare by value, and if equal, compare by index.
                  if (updatedValue < pq[i][0] ||
                        (updatedValue === pq[i][0] && index < pq[i][1])) {
                        pq.splice(i, 0, [updatedValue, index]);
                        inserted = true;
                        break;
                  }
            }

            // If the element wasn't inserted earlier, add it to the end.
            if (!inserted) pq.push([updatedValue, index]);

            // Update the original array with the new value at the corresponding index.
            nums[index] = updatedValue;
      }

      // Return the updated array after all operations.
      return nums;
}

// !----------------------------------------------------------------------

// ? ⌚ Time complexity ➺ O(n * k) 👉🏻 n = len(nums)

// ? 🧺 Space complexity ➺ O(n)

var getFinalState = function (nums, k, multiplier) {
      // Perform k iterations to transform the smallest element in the array
      while (k-- > 0) {
            let minIndex = 0; // Index of the smallest element

            // Find the index of the smallest element in the array
            for (let i = 1; i < nums.length; i++) {
                  if (nums[i] < nums[minIndex]) {
                        minIndex = i; // Update minIndex if a smaller element is found
                  }
            }

            // Multiply the smallest element by the multiplier
            nums[minIndex] *= multiplier;
      }

      // Return the modified array
      return nums;
}