//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 703

//? ⌚ Time complexity ➺ O(n Log k) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(K) 👉🏻 Min-Heap Size

// The purpose of this class is to find and maintain the k-th largest element in a stream of numbers
class KthLargest {
      // Constructor initializes the KthLargest object
      // k: An integer that indicates the k-th largest element to maintain
      // nums: An array from which the k-th largest element needs to be maintained
      constructor(k, nums) {
            this.k = k;
            // Initialize the minHeap as a MinPriorityQueue
            this.minHeap = new MinPriorityQueue();

            // Iterate through each number in the nums array and add it to the heap
            for (let num of nums) {
                  this.add(num);
            }
      }

      // Method to add a new value and return the k-th largest element
      // val: An integer value that is to be added
      add(val) {
            if (this.minHeap.size() < this.k) {
                  // Add the new value to the min-heap if size is less than k
                  this.minHeap.enqueue(val);
            } else if (val > this.minHeap.front().element) {
                  // If val is greater than the smallest element and heap size is k,
                  // remove the smallest and add val
                  this.minHeap.dequeue();
                  this.minHeap.enqueue(val);
            }

            // Return the smallest element in the heap, which is the k-th largest overall
            return this.minHeap.front() ? this.minHeap.front().element : null;
      }
}