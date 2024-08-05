//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2053

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(arr)

//? 🧺 Space complexity ➺ O(n) 👉🏻 Using HashMap

import java.util.HashMap;

class Solution {
      public String kthDistinct(String[] arr, int k) {
            // for calculating the string occurrences
            HashMap<String, Integer> stringCount = new HashMap<>();

            // count by going through array
            for (String str : arr) {
                  stringCount.put(str, stringCount.getOrDefault(str, 0) + 1);
            }

            // check string by going over array
            for (String str : arr) {
                  // if str count is one it means str is Distinct
                  if (stringCount.get(str) == 1) {
                        // for k-th distinct we decrement the k value
                        k -= 1;
                        // if we got k == 0 this will be our answer
                        if (k == 0) {
                              return str;
                        }
                  }
            }

            // if we don't get the k-th distinct we return ""
            return "";
      }
}
