//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 933

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(n) 👉🏻  n = No. of timestamps

import java.util.LinkedList;
import java.util.Queue;

class RecentCounter {
      private Queue<Integer> queue;

      public RecentCounter() {
            // Initialize a queue to store timestamps of requests
            queue = new LinkedList<>();
      }

      public int ping(int t) {
            // Add the current timestamp to the queue
            queue.offer(t);

            // Remove timestamps that are outside the 3000 ms window
            while (queue.peek() < t - 3000) {
                  queue.poll();
            } 

            // The size of the queue represents the number of valid requests
            return queue.size();
      }
}
