//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.2 Q1

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var lastStoneWeight = function (stones) {
      // Max-heap simulation using a min-heap with negative values
      const maxHeap = [];

      // Heap helper functions
      const heapPush = (val) => {
            maxHeap.push(val);
            let i = maxHeap.length - 1;
            while (i > 0) {
                  let parent = Math.floor((i - 1) / 2);
                  if (maxHeap[parent] >= maxHeap[i]) break;
                  [maxHeap[parent], maxHeap[i]] = [maxHeap[i], maxHeap[parent]];
                  i = parent;
            }
      };

      const heapPop = () => {
            const top = maxHeap[0];
            const end = maxHeap.pop();
            if (maxHeap.length > 0) {
                  maxHeap[0] = end;
                  let i = 0;
                  while (true) {
                        let left = 2 * i + 1;
                        let right = 2 * i + 2;
                        let largest = i;
                        if (left < maxHeap.length && maxHeap[left] > maxHeap[largest]) {
                              largest = left;
                        }
                        if (right < maxHeap.length && maxHeap[right] > maxHeap[largest]) {
                              largest = right;
                        }
                        if (largest === i) break;
                        [maxHeap[i], maxHeap[largest]] = [maxHeap[largest], maxHeap[i]];
                        i = largest;
                  }
            }
            return top;
      };

      // Insert stones into maxHeap
      for (const stone of stones) {
            heapPush(stone);
      }

      // Smash stones until 0 or 1 left
      while (maxHeap.length > 1) {
            const first = heapPop();
            const second = heapPop();
            if (first !== second) {
                  heapPush(first - second);
            }
      }

      return maxHeap.length === 0 ? 0 : maxHeap[0];
};
