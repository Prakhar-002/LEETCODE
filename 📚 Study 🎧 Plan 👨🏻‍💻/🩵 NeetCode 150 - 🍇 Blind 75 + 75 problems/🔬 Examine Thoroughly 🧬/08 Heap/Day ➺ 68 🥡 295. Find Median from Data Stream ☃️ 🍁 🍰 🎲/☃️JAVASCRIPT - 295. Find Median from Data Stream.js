//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 295

//? ⌚ Time complexity ➺ O(m * log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m)

class MedianFinder {
      constructor() {
            // JS has no built-in heap: we will simulate with arrays & helper methods
            this.smallHeap = []; // max-heap (store negatives to simulate)
            this.largeHeap = []; // min-heap (normal)
      }

      // Helper: push into min-heap
      minPush(heap, val) {
            heap.push(val);
            heap.sort((a, b) => a - b); // maintain sorted order
      }

      // Helper: pop from min-heap
      minPop(heap) {
            return heap.shift();
      }

      // Helper: peek min-heap
      minPeek(heap) {
            return heap[0];
      }

      // Helper: push into max-heap (store negatives)
      maxPush(heap, val) {
            heap.push(val);
            heap.sort((a, b) => b - a); // max first
      }

      // Helper: pop from max-heap
      maxPop(heap) {
            return heap.shift();
      }

      // Helper: peek max-heap
      maxPeek(heap) {
            return heap[0];
      }

      addNum(num) {
            // Step 1: Push into smallHeap (max-heap)
            this.maxPush(this.smallHeap, num);

            // Step 2: Ensure ordering property
            if (this.largeHeap.length > 0 && this.maxPeek(this.smallHeap) > this.minPeek(this.largeHeap)) {
                  this.minPush(this.largeHeap, this.maxPop(this.smallHeap));
            }

            // Step 3: Balance sizes
            if (this.smallHeap.length > this.largeHeap.length + 1) {
                  this.minPush(this.largeHeap, this.maxPop(this.smallHeap));
            } else if (this.largeHeap.length > this.smallHeap.length + 1) {
                  this.maxPush(this.smallHeap, this.minPop(this.largeHeap));
            }
      }

      findMedian() {
            if (this.smallHeap.length === this.largeHeap.length) {
                  return (this.maxPeek(this.smallHeap) + this.minPeek(this.largeHeap)) / 2;
            } else if (this.smallHeap.length > this.largeHeap.length) {
                  return this.maxPeek(this.smallHeap);
            } else {
                  return this.minPeek(this.largeHeap);
            }
      }
}
