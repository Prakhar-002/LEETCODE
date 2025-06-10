//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3442

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int maxDifference(String s) {
            int[] freq = new int[26]; // Frequency array for 'a' to 'z'

            for (char ch : s.toCharArray()) {
                  freq[ch - 'a']++; // Count frequency of each character
            }

            int evenFreq = Integer.MAX_VALUE; // Initialize to large number for min
            int oddFreq = Integer.MIN_VALUE; // Initialize to small number for max

            for (int value : freq) {
                  if (value == 0)
                        continue; // Skip unused characters

                  if (value % 2 == 0) {
                        evenFreq = Math.min(evenFreq, value); // Update minimum even freq
                  } else {
                        oddFreq = Math.max(oddFreq, value); // Update maximum odd freq
                  }
            }

            // If no even or odd found, avoid returning garbage value
            if (evenFreq == Integer.MAX_VALUE || oddFreq == Integer.MIN_VALUE) {
                  return 0;
            }

            return oddFreq - evenFreq; // Return the difference
      }
}
