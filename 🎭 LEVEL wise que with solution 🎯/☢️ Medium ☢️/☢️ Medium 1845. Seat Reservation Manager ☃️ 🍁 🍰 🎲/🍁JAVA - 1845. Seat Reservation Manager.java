//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1845

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.PriorityQueue;   // Import PriorityQueue to use min-heap operations

class SeatManager {

      // Min-heap to always fetch the smallest available seat
      private PriorityQueue<Integer> seats;

      // O(n) → Constructor initializes the seat manager with n seats
      public SeatManager(int n) {
            // Create a priority queue (min-heap)
            seats = new PriorityQueue<>();
            
            // Add seats numbered from 1 to n
            // Example: if n=5 → [1, 2, 3, 4, 5]
            for (int i = 1; i <= n; i++) {
                  seats.add(i);   // Insert each seat into the heap
            }
      }

      // O(log n) → Reserve the smallest available seat
      public int reserve() {
            // Poll (remove and return) the smallest seat number from the heap
            // This ensures the lowest-numbered seat is always given first
            int minVal = seats.poll();
            
            // Return the reserved seat number
            return minVal;
      }

      // O(log n) → Unreserve (make available) a seat again
      public void unreserve(int seatNumber) {
            // Add the seat number back into the heap
            // This makes it available for future reservations
            seats.add(seatNumber);
      }
}
