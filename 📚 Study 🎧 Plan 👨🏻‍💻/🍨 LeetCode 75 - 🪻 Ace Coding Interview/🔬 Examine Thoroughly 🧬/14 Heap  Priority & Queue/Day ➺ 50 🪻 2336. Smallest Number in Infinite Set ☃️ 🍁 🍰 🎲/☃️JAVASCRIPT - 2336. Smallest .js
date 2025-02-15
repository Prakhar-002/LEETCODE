//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2336

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class SmallestInfiniteSet {
      constructor() {
            this.pq = []; // Min-heap to store re-added numbers
            this.nextNum = 1; // Start from 1
            this.inPQ = new Set(); // Set to track added-back numbers (for quick lookup)
      }

      popSmallest() {
            if (this.pq.length === 0) {
                  return this.nextNum++;
            }

            let smallest = this.pq.shift(); // Remove smallest element
            this.inPQ.delete(smallest); // Remove from tracking set
            return smallest;
      }

      addBack(num) {
            if (num < this.nextNum && !this.inPQ.has(num)) {
                  this.pq.push(num); // Insert into array (acts as priority queue)
                  this.pq.sort((a, b) => a - b); // Ensure pq maintains min-heap order
                  this.inPQ.add(num); // Track in set to prevent duplicates
            }
      }
}
