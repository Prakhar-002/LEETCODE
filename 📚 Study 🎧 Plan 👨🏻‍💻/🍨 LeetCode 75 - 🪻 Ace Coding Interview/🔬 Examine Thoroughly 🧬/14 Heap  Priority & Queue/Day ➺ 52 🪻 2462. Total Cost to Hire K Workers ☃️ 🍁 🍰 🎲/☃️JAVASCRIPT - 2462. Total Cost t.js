//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2462

//? ⌚ Time complexity ➺ O(n log n + k) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var totalCost = function (costs, k, candidates) {
      const n = costs.length;

      // Initialize two min-heaps for selecting candidates from both ends
      const leftHeap = new MinHeap();
      const rightHeap = new MinHeap();

      let totalCost = 0; // Final answer to accumulate cost

      let left = 0;               // Pointer for leftmost unprocessed candidate
      let right = n - 1;          // Pointer for rightmost unprocessed candidate

      // Pre-fill up to `candidates` elements from the left side into leftHeap
      while (left <= right && leftHeap.size() < candidates) {
            leftHeap.push(costs[left++]);
      }

      // Pre-fill up to `candidates` elements from the right side into rightHeap
      while (right >= left && rightHeap.size() < candidates) {
            rightHeap.push(costs[right--]);
      }

      // Perform k selections (choose k workers with minimum total cost)
      for (let i = 0; i < k; i++) {

            // If rightHeap is empty or leftHeap has smaller/equal top element
            if (rightHeap.isEmpty() || (!leftHeap.isEmpty() && leftHeap.peek() <= rightHeap.peek())) {

                  // Choose worker from the left heap
                  totalCost += leftHeap.pop();

                  // Refill leftHeap with the next available left-side candidate (if any)
                  if (left <= right) leftHeap.push(costs[left++]);

            } else {
                  // Choose worker from the right heap
                  totalCost += rightHeap.pop();

                  // Refill rightHeap with the next available right-side candidate (if any)
                  if (right >= left) rightHeap.push(costs[right--]);
            }
      }

      return totalCost; // Return the total minimum cost after k selections
};


class MinHeap {
      constructor() {
            this.heap = [];
      }

      // Insert element and heapify up
      push(val) {
            this.heap.push(val);
            this._siftUp();
      }

      // Remove and return smallest element and heapify down
      pop() {
            if (this.size() === 1) return this.heap.pop();
            const top = this.heap[0];
            this.heap[0] = this.heap.pop();
            this._siftDown();
            return top;
      }

      // Return smallest element without removing
      peek() {
            return this.heap[0];
      }

      // Get current size of the heap
      size() {
            return this.heap.length;
      }

      // Check if heap is empty
      isEmpty() {
            return this.heap.length === 0;
      }

      _siftUp() {
            let i = this.heap.length - 1;
            while (i > 0) {
                  const p = Math.floor((i - 1) / 2);
                  if (this.heap[i] >= this.heap[p]) break;
                  [this.heap[i], this.heap[p]] = [this.heap[p], this.heap[i]];
                  i = p;
            }
      }

      _siftDown() {
            let i = 0;
            const n = this.heap.length;
            while (true) {
                  let smallest = i;
                  const left = 2 * i + 1;
                  const right = 2 * i + 2;
                  if (left < n && this.heap[left] < this.heap[smallest]) smallest = left;
                  if (right < n && this.heap[right] < this.heap[smallest]) smallest = right;
                  if (smallest === i) break;
                  [this.heap[i], this.heap[smallest]] = [this.heap[smallest], this.heap[i]];
                  i = smallest;
            }
      }
}
