//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 632

//? ⌚ Time complexity ➺ O(n log k) 👉🏻  n = Total elements

//? 🧺 Space complexity ➺ O(k) 👉🏻 k = Number of Lists

import java.util.*;

class Solution {
      public int[] smallestRange(List<List<Integer>> nums) {
            // Determines how many lists are in `nums`
            int k = nums.size();
            // Initializes `left` and `right` with the first element of the first list
            int left = nums.get(0).get(0);
            int right = nums.get(0).get(0);
            // PriorityQueue (min-heap) to manage the smallest elements across list
            PriorityQueue<int[]> minHeap = new PriorityQueue<>((a, b) -> a[0] - b[0]);

            // iterates over each list in `nums`
            for (int i = 0; i < k; i++) {
                  // extract the list at every index
                  List<Integer> numsList = nums.get(i);
                  // updates `left` to be the minimum values encountered so far
                  left = Math.min(left, numsList.get(0));
                  // updates `right` to be the maximum values encountered so far
                  right = Math.max(right, numsList.get(0));
                  // adds an array into the min-heap
                  // containing the first element of each list,
                  // along with the index of the list (`i`)
                  // and the index of the element in that list (`0`)
                  minHeap.offer(new int[] { numsList.get(0), i, 0 });
            }

            // Initializes the smallest range with the current `left` and `right`
            int[] smallestRange = new int[] { left, right };

            // Continues looping until a return condition is met
            while (true) {
                  // Polls the smallest element (array) from `minHeap`
                  // gives the smallest current number (`numsArr[0]`),
                  // its list index (`numsArr[1]`), and its element index (`numsArr[2]`)
                  int[] numsArr = minHeap.poll();
                  // Increments the element index to move to the next element in the same list
                  int idx = numsArr[2] + 1;

                  // If `idx` is equal to the length of the list `nums.get(numsArr[1])`
                  if (idx == nums.get(numsArr[1]).size()) {
                        // means one list is exhausted, and the current smallest range is returned
                        return smallestRange;
                  }

                  // fetches the `nextVal`, the next element from the same list
                  int nextVal = nums.get(numsArr[1]).get(idx);
                  // adds it into the min-heap
                  minHeap.offer(new int[] { nextVal, numsArr[1], idx });

                  // Updates `right` to be the maximum of the current `right` and `nextVal`
                  right = Math.max(right, nextVal);
                  // `left` is updated to be the first value of the new heap, (smallest)
                  left = minHeap.peek()[0];

                  // if the new range (`right - left`) is smaller than the current `smallestRange`
                  if (right - left < smallestRange[1] - smallestRange[0]) {
                        // updates `smallestRange` with new `left` and `right`
                        smallestRange = new int[] { left, right };
                  }
            }
      }
}
