//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 632

//? ⌚ Time complexity ➺ O(n log k) 👉🏻  n = Total elements

//? 🧺 Space complexity ➺ O(k) 👉🏻 k = Number of Lists

function smallestRange(nums) {
      // Determines how many lists are in `nums`
      const k = nums.length;
      // Initializes `left` and `right` with the first element of the first list
      let left = right = nums[0][0];
      // Initializes an empty min-heap to manage the smallest elements across list
      const minHeap = new MinPriorityQueue({ priority: x => x[0] });

      // iterates over each list in `nums`
      for (let i = 0; i < k; i++) {
            // extract the array at every index
            const numsArr = nums[i];
            // updates `left` to be the minimum values encountered so far
            left = Math.min(left, numsArr[0]);
            // updates `right` to be the maximum values encountered so far
            right = Math.max(right, numsArr[0]);
            // pushes a tuple into the min-heap 
            // 1. containing the first element of each list, 
            // 2. along with the index of the list (`i`) 
            // 3. and the index of the element in that list (`0`)
            minHeap.enqueue([numsArr[0], i, 0]);
      }

      // Initializes the smallest range with the current `left` and `right`
      let smallestRange = [left, right];

      // Continues looping until a return condition is met
      while (true) {
            // Dequeues the smallest element (tuple) from `minHeap`
            // gives the smallest current number (`numsArr`), 
            // its list index (`i`), and its element index (`idx`)
            const [numsArr, i, idx] = minHeap.dequeue().element;
            // Increments `idx` to move to the next element in the same list
            const nextIdx = idx + 1;

            // If `nextIdx` is equal to the length of the list `nums[i]`
            if (nextIdx === nums[i].length) {
                  // means one list is exhausted, and the current smallest range is returned
                  return smallestRange;
            }

            // fetches the `nextVal`, the next element from the same list
            const nextVal = nums[i][nextIdx];
            // pushes it into the min-heap
            minHeap.enqueue([nextVal, i, nextIdx]);

            // Updates `right` to be the maximum of the current `right` and `nextVal`
            right = Math.max(right, nextVal);
            // `left` is updated to be the first value of the new heap, which is the smallest
            left = minHeap.front().element[0];

            // if the new range (`right - left`) is smaller than the current `smallestRange`
            if (right - left < smallestRange[1] - smallestRange[0]) {
                  // updates `smallestRange` with new `left` and `right`
                  smallestRange = [left, right];
            }
      }
}

