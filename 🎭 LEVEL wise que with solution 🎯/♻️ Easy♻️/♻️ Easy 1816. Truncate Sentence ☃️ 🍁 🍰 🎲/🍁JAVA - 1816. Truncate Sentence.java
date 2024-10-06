//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1816

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

import java.util.Arrays;
import java.util.stream.Collectors;

class Solution {
      public String truncateSentence(String s, int k) {
            // return a string formed by joining the first k words from the string s,
            // where the words are separated by a single space " "
            return Arrays.stream(s.split(" "))
                        .limit(k)
                        .collect(Collectors.joining(" "));
      }
}
