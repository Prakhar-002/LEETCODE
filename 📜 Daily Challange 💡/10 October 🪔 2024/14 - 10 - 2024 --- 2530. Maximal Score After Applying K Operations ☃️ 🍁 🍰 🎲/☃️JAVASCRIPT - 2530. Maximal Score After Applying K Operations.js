//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2530

//? ⌚ Time complexity ➺ O(k log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

function maxKelements(nums, k) {
      // Create a max priority queue
      const pq = new MaxPriorityQueue();

      // Add all numbers to the priority queue
      for (let num of nums) {
            pq.enqueue(num);
      }

      // `maxScore` that will keep track of the cumulative score
      let maxScore = 0;

      // loop that runs `k` times to perform operations on the top elements
      for (let i = 0; i < k; i++) {
            // Removes and captures the maximum element from the priority queue
            let num = pq.dequeue().element;

            // Adds the value of `num` to `maxScore`.
            maxScore += num;

            // dividing by 3 but rounding up to the closest integer
            pq.enqueue(Math.ceil(num / 3));  // adds it back to the priority queue
      }

      // returns the calculated maximum score
      return maxScore;
}