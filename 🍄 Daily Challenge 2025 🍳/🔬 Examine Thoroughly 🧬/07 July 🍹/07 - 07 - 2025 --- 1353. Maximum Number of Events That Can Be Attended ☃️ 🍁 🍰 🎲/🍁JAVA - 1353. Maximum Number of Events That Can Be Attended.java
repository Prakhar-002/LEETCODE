//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1353

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int maxEvents(int[][] events) {
            // Sort events by their start day
            Arrays.sort(events, (a, b) -> Integer.compare(a[0], b[0]));

            // Min-heap to store event end days (priority queue by default gives min-heap in
            // Java)
            PriorityQueue<Integer> pq = new PriorityQueue<>();

            int n = events.length; // Total number of events
            int i = 0; // Pointer to iterate over events
            int day = 1; // Current day we're processing
            int count = 0; // Total events attended

            // Continue while events are left or heap is not empty
            while (i < n || !pq.isEmpty()) {

                  // If heap is empty and the next event starts in the future, jump to that day
                  if (pq.isEmpty() && events[i][0] > day) {
                        day = events[i][0];
                  }

                  // Push all events starting today or earlier into the heap
                  while (i < n && events[i][0] <= day) {
                        pq.offer(events[i][1]); // Add end day to heap
                        i++;
                  }

                  // Remove expired events (those that ended before today)
                  while (!pq.isEmpty() && pq.peek() < day) {
                        pq.poll();
                  }

                  // Attend the event that ends the earliest
                  if (!pq.isEmpty()) {
                        pq.poll(); // Attend one event
                        count++; // Increase the attended count
                        day++; // Move to the next day
                  }
            }

            return count; // Return the total number of events attended
      }
}
