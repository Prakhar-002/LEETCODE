//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1046

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(Stones)

//? 🧺 Space complexity ➺ O(n)

var lastStoneWeight = function (stones) {
      // Create a max-heap using a custom comparator
      const pq = new MaxPriorityQueue({ priority: x => x });

      // Add all stones to the priority queue
      for (const stone of stones) {
            pq.enqueue(stone);
      }

      // Process until only one or zero stones are left
      while (pq.size() > 1) {
            // Remove the two largest stones
            const y = pq.dequeue().element;
            const x = pq.dequeue().element;

            // If they are not the same, add the difference back to the heap
            if (y !== x) {
                  pq.enqueue(y - x);
            }
      }

      // Return the last stone weight, or 0 if no stones are left
      return pq.isEmpty() ? 0 : pq.front().element;
};