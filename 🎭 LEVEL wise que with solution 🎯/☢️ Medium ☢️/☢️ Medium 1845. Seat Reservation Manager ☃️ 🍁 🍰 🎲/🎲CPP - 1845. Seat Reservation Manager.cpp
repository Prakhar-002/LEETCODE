//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1845

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <queue>      // Import priority_queue for heap operations
#include <vector>     // Import vector to initialize seats

using namespace std;

class SeatManager {
      // Min-heap to always fetch the smallest available seat
      priority_queue<int, vector<int>, greater<int>> seats;

public:
      // O(n) → Constructor initializes the seat manager with n seats
      SeatManager(int n) {
            // Add seats numbered from 1 to n
            // Example: if n=5 → [1, 2, 3, 4, 5]
            for (int i = 1; i <= n; i++) {
                  seats.push(i);   // Insert each seat into the min-heap
            }
      }

      // O(log n) → Reserve the smallest available seat
      int reserve() {
            // Get the smallest seat number from the heap
            int minVal = seats.top();

            // Remove it from the heap
            seats.pop();

            // Return the reserved seat number
            return minVal;
      }

      // O(log n) → Unreserve (make available) a seat again
      void unreserve(int seatNumber) {
            // Push the seat number back into the heap
            // This makes it available for future reservations
            seats.push(seatNumber);
      }
};
