//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1331

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int[] arrayRankTransform(int[] arr) {
            if (arr.length == 0) {
                  return arr;
            }

            // Step 1: Create a copy of the original array
            int sortedArr[] = arr.clone();

            // Step 2: Sort the copied array
            Arrays.sort(sortedArr);

            // Step 3: Assign ranks to elements in sorted order
            Hashtable<Integer, Integer> rankMap = new Hashtable<>();
            int rank = 1;

            for (int num : sortedArr) {
                  if (!rankMap.containsKey(num)) {
                        rankMap.put(num, rank++);
                  }
            }

            // Step 4: Replace elements in the original array with their ranks
            for (int i = 0; i < arr.length; i++) {
                  arr[i] = rankMap.get(arr[i]);
            }

            return arr;
      }
}