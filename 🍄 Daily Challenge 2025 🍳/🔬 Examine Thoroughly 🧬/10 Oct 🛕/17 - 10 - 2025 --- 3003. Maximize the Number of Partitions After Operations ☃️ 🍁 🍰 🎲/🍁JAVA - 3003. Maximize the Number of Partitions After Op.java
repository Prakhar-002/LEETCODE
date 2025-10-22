//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3003

//? ⌚ Time complexity ➺ O(m * n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

public class Solution {

      public int maxPartitionsAfterOperations(String s, int k) {
            int n = s.length();

            // left[i] = {segments_formed, bitmask_of_letters, unique_letters_count}
            int[][] left = new int[n][3];
            int[][] right = new int[n][3];

            // ------------------------------
            // Build prefix (left) statistics
            // ------------------------------
            int num = 0; // number of completed partitions so far
            int mask = 0; // bitmask of letters in current window
            int count = 0; // number of distinct letters in current window

            for (int i = 0; i < n - 1; i++) {
                  int bit = 1 << (s.charAt(i) - 'a');

                  // If current character not already in window
                  if ((mask & bit) == 0) {
                        count++;
                        // If still within k distinct letters, just add it
                        if (count <= k) {
                              mask |= bit;
                        } else {
                              // If limit exceeded, start new partition
                              num++;
                              mask = bit;
                              count = 1;
                        }
                  }

                  // Save prefix info after including s[i]
                  left[i + 1][0] = num; // partitions formed up to i
                  left[i + 1][1] = mask; // distinct letters bitmask
                  left[i + 1][2] = count; // current distinct count
            }

            // ------------------------------
            // Build suffix (right) statistics
            // ------------------------------
            num = 0;
            mask = 0;
            count = 0;

            for (int i = n - 1; i > 0; i--) {
                  int bit = 1 << (s.charAt(i) - 'a');

                  // If new character not seen yet on right side
                  if ((mask & bit) == 0) {
                        count++;
                        // Still within k, include it
                        if (count <= k) {
                              mask |= bit;
                        } else {
                              // Too many distinct letters → start new segment
                              num++;
                              mask = bit;
                              count = 1;
                        }
                  }

                  // Store suffix information for index i-1
                  right[i - 1][0] = num;
                  right[i - 1][1] = mask;
                  right[i - 1][2] = count;
            }

            // ------------------------------
            // Combine prefix & suffix segments
            // ------------------------------
            int maxVal = 0;

            for (int i = 0; i < n; i++) {
                  // Start with partitions from left + right + current segment
                  int seg = left[i][0] + right[i][0] + 2;

                  // Combine bitmask of chars from both sides
                  int combinedMask = left[i][1] | right[i][1];
                  int totalDistinct = Integer.bitCount(combinedMask);

                  // Case 1: both sides are full (exactly k distinct)
                  if (left[i][2] == k && right[i][2] == k && totalDistinct < 26) {
                        seg++;
                  }
                  // Case 2: combination overreaches limits — adjust segments
                  else if (Math.min(totalDistinct + 1, 26) <= k) {
                        seg--;
                  }

                  // Track maximum possible partitions
                  maxVal = Math.max(maxVal, seg);
            }

            return maxVal;
      }
}
