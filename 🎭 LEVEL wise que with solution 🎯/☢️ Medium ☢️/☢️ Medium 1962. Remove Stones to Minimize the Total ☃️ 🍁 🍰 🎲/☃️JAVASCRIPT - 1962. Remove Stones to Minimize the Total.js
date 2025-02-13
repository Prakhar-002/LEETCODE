//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1962

//? ⌚ Time complexity ➺ O(n Log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var minStoneSum = function (piles, k) {
      // Max-Heap PriorityQueue to store piles in descending order
      const maxHeap = new MaxPriorityQueue();

      // Add all the piles to the priority queue
      piles.forEach(pile => maxHeap.enqueue(pile));

      // Perform the operation k times: halving the largest pile
      for (let i = 0; i < k; i++) {
            const largest = maxHeap.dequeue().element;  // Get the largest pile
            maxHeap.enqueue(Math.ceil(largest / 2));  // Halve it and add back to the queue
      }

      // Sum the remaining stones in the piles
      let stones = 0;
      while (!maxHeap.isEmpty()) {
            stones += maxHeap.dequeue().element;  // Remove and accumulate the remaining stones
      }

      return stones;  // Return the total number of remaining stones
}