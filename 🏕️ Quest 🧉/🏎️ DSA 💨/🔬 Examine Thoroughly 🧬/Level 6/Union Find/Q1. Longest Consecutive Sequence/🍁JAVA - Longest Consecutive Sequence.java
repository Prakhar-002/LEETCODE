//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.1 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int longestConsecutive(int[] nums) {
            // HashSet provides O(1) average case lookups
            Set<Integer> hashSet = new HashSet<>();
            for (int num : nums) {
                  hashSet.add(num);
            }

            int longest = 0; // Length of longest consecutive sequence found

            // Only process numbers that are sequence starts (no n-1 predecessor)
            for (int n : hashSet) {
                  // If n-1 doesn't exist, n is the start of a sequence
                  if (!hashSet.contains(n - 1)) {
                        int curStreak = 1; // Current sequence length
                        int cur = n; // Current number in sequence

                        // Extend sequence as long as next number exists
                        while (hashSet.contains(cur + 1)) {
                              curStreak++;
                              cur++;
                        }

                        // Update maximum if current streak is longer
                        longest = Math.max(longest, curStreak);
                  }
            }

            return longest;
      }
}
