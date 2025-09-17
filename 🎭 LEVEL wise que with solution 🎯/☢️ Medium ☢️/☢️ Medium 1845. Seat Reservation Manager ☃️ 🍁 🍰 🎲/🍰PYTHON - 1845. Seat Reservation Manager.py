#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1845

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

import heapq     # Import heapq to use min-heap operations (priority queue)

class SeatManager: 

      # O(n) → Constructor initializes the seat manager with n seats
      def __init__(self, n: int):
            # Create a list of seats numbered from 1 to n
            # Example: if n=5 → [1, 2, 3, 4, 5]
            self.seats = [i for i in range(1, n + 1)]

            # Convert the list into a min-heap so that we can always
            # get the smallest available seat efficiently
            heapq.heapify(self.seats)

      # O(log n) → Reserve the smallest available seat
      def reserve(self) -> int:
            # Pop (remove and return) the smallest seat number from the heap
            # This ensures the lowest-numbered seat is always given first
            minVal = heapq.heappop(self.seats)
            
            # Return the reserved seat number
            return minVal

      # O(log n) → Unreserve (make available) a seat again
      def unreserve(self, seatNumber: int) -> None:
            # Push the seat number back into the heap
            # This makes it available for future reservations
            heapq.heappush(self.seats, seatNumber)
