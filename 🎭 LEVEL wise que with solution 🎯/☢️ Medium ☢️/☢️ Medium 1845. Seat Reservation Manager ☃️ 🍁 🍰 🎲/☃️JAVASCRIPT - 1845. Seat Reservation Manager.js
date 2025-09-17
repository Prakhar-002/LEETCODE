//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1845

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

// SeatManager class
class SeatManager {

      // O(n) → Constructor initializes the seat manager with n seats
      constructor(n) {
            // Create a min-heap to store available seats
            this.seats = new MinHeap();

            // Add seats numbered from 1 to n
            // Example: if n=5 → [1, 2, 3, 4, 5]
            for (let i = 1; i <= n; i++) {
                  this.seats.push(i);   // Insert each seat into min-heap
            }
      }

      // O(log n) → Reserve the smallest available seat
      reserve() {
            // Pop (remove and return) the smallest seat number from the heap
            // This ensures the lowest-numbered seat is always given first
            let minVal = this.seats.pop();

            // Return the reserved seat number
            return minVal;
      }

      // O(log n) → Unreserve (make available) a seat again
      unreserve(seatNumber) {
            // Push the seat number back into the heap
            // This makes it available for future reservations
            this.seats.push(seatNumber);
      }
}

// Heap implement

// MinHeap class to handle priority queue operations
class MinHeap {
      constructor() {
            this.heap = [];   // Array to store heap elements
      }

      // Helper method: swap two elements
      swap(i, j) {
            [this.heap[i], this.heap[j]] = [this.heap[j], this.heap[i]];
      }

      // Push a new value into the heap
      push(val) {
            this.heap.push(val);   // Insert at end
            this.bubbleUp(this.heap.length - 1);   // Fix heap property
      }

      // Pop (remove and return) the smallest value
      pop() {
            if (this.heap.length === 0) return null;
            if (this.heap.length === 1) return this.heap.pop();

            // Swap root with last element
            this.swap(0, this.heap.length - 1);

            // Remove smallest element
            let minVal = this.heap.pop();

            // Fix heap property
            this.bubbleDown(0);

            return minVal;
      }

      // Get the smallest value (root)
      peek() {
            return this.heap.length > 0 ? this.heap[0] : null;
      }

      // Bubble up → fix min-heap after insertion
      bubbleUp(idx) {
            while (idx > 0) {
                  let parent = Math.floor((idx - 1) / 2);
                  if (this.heap[parent] > this.heap[idx]) {
                        this.swap(parent, idx);
                        idx = parent;
                  } else break;
            }
      }

      // Bubble down → fix min-heap after removal
      bubbleDown(idx) {
            let n = this.heap.length;
            while (true) {
                  let left = 2 * idx + 1;
                  let right = 2 * idx + 2;
                  let smallest = idx;

                  if (left < n && this.heap[left] < this.heap[smallest]) {
                        smallest = left;
                  }
                  if (right < n && this.heap[right] < this.heap[smallest]) {
                        smallest = right;
                  }
                  if (smallest !== idx) {
                        this.swap(smallest, idx);
                        idx = smallest;
                  } else break;
            }
      }
}