//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3085

//? ⌚ Time complexity ➺ O(m ^ 2) 👉🏻  m = unique alphabet

//? 🧺 Space complexity ➺ O(m)

import java.util.*;

class Solution {
      public int minimumDeletions(String word, int k) {
            // Step 1: Count frequency of each character
            Map<Character, Integer> freq = new HashMap<>();
            for (char c : word.toCharArray()) {
                  freq.put(c, freq.getOrDefault(c, 0) + 1);
            }

            int res = word.length(); // Start with maximum deletions possible

            // Step 2: Try every frequency as target
            for (int target : freq.values()) {
                  int deleted = 0;

                  for (int f : freq.values()) {
                        if (f < target) {
                              deleted += f; // Too small, delete all
                        } else if (f > target + k) {
                              deleted += f - (target + k); // Too big, reduce to target + k
                        }
                  }

                  res = Math.min(res, deleted);
            }

            return res;
      }
}
