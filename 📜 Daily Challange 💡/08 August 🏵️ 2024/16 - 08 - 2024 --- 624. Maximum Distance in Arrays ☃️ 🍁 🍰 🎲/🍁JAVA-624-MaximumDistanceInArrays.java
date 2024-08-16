//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 624

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(arrays)

//? 🧺 Space complexity ➺ O(1)

import java.util.List;

class Solution {
      public int maxDistance(List<List<Integer>> arrays) {
            // assigned the minimum and maximum values from the first array
            int curMin = arrays.get(0).get(0);
            int curMax = arrays.get(0).get(arrays.get(0).size() - 1);

            // track of the maximum absolute difference found so far
            int maxDifference = 0;

            // loop from 2nd array
            for (int i = 1; i < arrays.size(); i++) {
                  // extract the current array
                  List<Integer> arr = arrays.get(i);

                  // take the max of all possibility
                  maxDifference = Math.max(
                              maxDifference,
                              Math.max(
                                          // diff btw the highest value of the cur arr - curMin
                                          arr.get(arr.size() - 1) - curMin,
                                          // diff btw the `curMax` and the lowest value of the cur arr
                                          curMax - arr.get(0)
                                    )
                              );

                  // update the cur min max
                  curMin = Math.min(curMin, arr.get(0)); // `curMin` and the first element
                  curMax = Math.max(curMax, arr.get(arr.size() - 1)); // current `curMax` and the last element
            }

            return maxDifference;
      }
}
