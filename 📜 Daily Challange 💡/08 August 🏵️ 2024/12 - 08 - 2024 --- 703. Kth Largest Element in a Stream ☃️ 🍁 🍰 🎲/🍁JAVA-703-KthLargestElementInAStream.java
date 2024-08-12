//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 703

//? ⌚ Time complexity ➺ O(n Log k) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(K) 👉🏻 Min-Heap Size

import java.util.PriorityQueue;

// The purpose of this class is to find 
// and maintain the k-th largest element in a stream of numbers
class KthLargest {
      // which will store the k largest elements in increasing order
      private PriorityQueue<Integer> minHeap;
      private int k;

      // `k`: An integer that indicates the k-th largest elem to maintain
      // `nums`: A list from which the k-th largest elem needs to be maintained
      public KthLargest(int k, int[] nums) {
            this.k = k;
            // initializes the minHeap as a PriorityQueue
            this.minHeap = new PriorityQueue<>();

            //  A `for` loop is used to iterate through each number in the `nums` array,
            // and each number is added to the heap using the `add` method
            for (int num : nums) {
                  add(num);
            }
      }

      // `val`: An integer value that is to be added
      public int add(int val) {
            if (minHeap.size() < k) {
                  // adds the new value `val` to the min-heap if size is less than k
                  minHeap.offer(val);
            } else if (val > minHeap.peek()) {
                  // if val is greater than the smallest element and heap size is k,
                  minHeap.poll();
                  // remove the smallest and add val
                  minHeap.offer(val);
            }

            // Returns the smallest element in the heap, which is the k-th largest overall
            return minHeap.peek();
      }
}
