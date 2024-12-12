//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2558

//? ⌚ Time complexity ➺ O((n + k) Log n) 👉🏻  n = len(gifts)

//? 🧺 Space complexity ➺ O(n)

var pickGifts = function (gifts, k) {
      // Create a max-heap using a min-heap with inverted values
      const pq = new MinPriorityQueue({ priority: x => -x });
      gifts.forEach(gift => pq.enqueue(gift));

      // Perform k operations where the largest gift is replaced with its square root
      while (k-- > 0) {
            const largest = pq.dequeue().element;
            pq.enqueue(Math.floor(Math.sqrt(largest)));
      }

      // Calculate the sum of remaining gifts
      let giftRemain = 0;
      while (!pq.isEmpty()) {
            giftRemain += pq.dequeue().element;
      }

      // Return the total sum of remaining gifts
      return giftRemain;
}