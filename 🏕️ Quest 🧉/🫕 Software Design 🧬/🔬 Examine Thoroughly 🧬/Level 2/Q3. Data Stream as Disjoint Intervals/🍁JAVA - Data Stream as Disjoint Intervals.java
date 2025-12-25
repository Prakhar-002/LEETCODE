//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Software Design L2 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class SummaryRanges {
      // TreeSet to store all added numbers in sorted order
      // TreeSet keeps numbers sorted, so we can iterate in increasing order
      private TreeSet<Integer> treeSet;

      public SummaryRanges() {
            treeSet = new TreeSet<>();
      }

      public void addNum(int value) {
            // Add the number to the TreeSet
            // This ensures we have all unique numbers in sorted order
            treeSet.add(value);
      }

      public int[][] getIntervals() {
            // List to store the resulting intervals [start, end]
            List<int[]> res = new ArrayList<>();

            // Iterate over each number in the TreeSet (in sorted order)
            for (int n : treeSet) {
                  // If res is not empty and the current number is consecutive to the last interval
                  if (!res.isEmpty() && res.get(res.size() - 1)[1] + 1 == n) {
                        // Extend the last interval’s end to include this number
                        res.get(res.size() - 1)[1] = n;
                  } else {
                        // Otherwise, start a new interval [n, n]
                        res.add(new int[]{n, n});
                  }
            }

            // Convert list to array and return
            return res.toArray(new int[0][]);
      }
}
