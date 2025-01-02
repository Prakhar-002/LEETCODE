//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 933

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(n) 👉🏻  n = No. of timestamps

class RecentCounter {
      constructor() {
            // Initialize a queue to store timestamps of requests
            this.queue = [];
      }

      ping(t) {
            // Add the current timestamp to the queue
            this.queue.push(t);

            // Remove timestamps that are outside the 3000 ms window
            while (this.queue[0] < t - 3000) {
                  this.queue.shift();
            }

            // The length of the queue represents the number of valid requests
            return this.queue.length;
      }
}
