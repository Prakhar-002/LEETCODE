//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3043

//? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = len(arr1), m = len(arr2)

//? 🧺 Space complexity ➺ O(m)

import java.util.*;

class Solution {
      public int longestCommonPrefix(int[] arr1, int[] arr2) {
            // if `arr1` is longer than `arr2`
            if (arr1.length > arr2.length) {
                  // they are swapped
                  // This ensures that `arr1` is the shorter of the two arrays
                  int[] temp = arr1;
                  arr1 = arr2;
                  arr2 = temp;
            }

            // Creating a Set of Numerical Prefixes
            Set<Integer> prefixSet = new HashSet<>();

            // For each number `num` in `arr1
            for (int num : arr1) {
                  // `123`, `prefixSet` will get `123`, `12`, and `1`
                  // until `num` becomes 0 or is already in the set
                  while (num > 0 && !prefixSet.contains(num)) {
                        // added to the `prefixSet
                        prefixSet.add(num);
                        // and the number is continually divided by 10
                        num /= 10;
                  }
            }

            // `longestPrefix` is to keep track of the longest common prefix found
            int longestPrefix = 0;

            // For each number `num` in `arr2`
            for (int num : arr2) {
                  // until num either becomes 0 or is found in `prefixSet`
                  while (num > 0 && !prefixSet.contains(num)) {
                        // number is continually divided by 10
                        num /= 10;
                  }

                  // If such a common number `num` (prefix) is found in `prefixSet`
                  if (num > 0) {
                        // length of this number is compared with `longestPrefix`
                        // updated if this prefix is longer
                        longestPrefix = Math.max(longestPrefix, String.valueOf(num).length());
                  }
            }

            // returns the longest common prefix
            return longestPrefix;
      }
}