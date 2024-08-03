//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1460

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(target)

//? 🧺 Space complexity ➺ O(n) 👉🏻 making HashMap

import java.util.HashMap;

class Solution {
      public boolean canBeEqual(int[] target, int[] arr) {

            // making hashmap
            HashMap<Integer, Integer> targetCount = new HashMap<>();
            HashMap<Integer, Integer> arrCount = new HashMap<>();

            // count the freq of both elem
            for (int i = 0; i < arr.length; i++) {
                  targetCount.put(target[i], targetCount.getOrDefault(target[i], 0) + 1);
                  arrCount.put(arr[i], arrCount.getOrDefault(arr[i], 0) + 1);
            }

            // if length is not equal
            if (targetCount.size() != arrCount.size()) {
                  return false;
            }

            // check the freq of each elem
            for (int elem : target) {
                  // check for both counter
                  if (!targetCount.get(elem).equals(arrCount.get(elem))) {
                        return false;
                  }
            }

            return true;
      }
}