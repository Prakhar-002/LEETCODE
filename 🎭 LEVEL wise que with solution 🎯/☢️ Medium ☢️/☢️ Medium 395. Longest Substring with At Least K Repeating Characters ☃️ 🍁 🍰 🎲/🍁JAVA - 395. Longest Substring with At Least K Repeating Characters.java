// ! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 395

// ? ⌚ Time complexity ➺ O(n) 👉🏻 n = len(nums)

// ? 🧺 Space complexity ➺ O(1)

class Solution {
      public int longestSubstring(String s, int k) {
            int ans = 0;

            // Iterate through target number of unique characters allowed in window (1 to 26)
            for (int uniqueTarget = 1; uniqueTarget <= 26; uniqueTarget++) {
                  int[] freq = new int[26];
                  int l = 0;
                  int uniqueCount = 0;
                  int validCount = 0;

                  for (int r = 0; r < s.length(); r++) {
                        int idx = s.charAt(r) - 'a';

                        // Count new unique character added to window
                        if (freq[idx] == 0) {
                              uniqueCount++;
                        }

                        freq[idx]++;

                        // Increment valid count when character frequency reaches k
                        if (freq[idx] == k) {
                              validCount++;
                        }

                        // Shrink window from left if unique count exceeds target
                        while (uniqueCount > uniqueTarget) {
                              int leftIdx = s.charAt(l) - 'a';

                              if (freq[leftIdx] == k) {
                                    validCount--;
                              }

                              freq[leftIdx]--;

                              if (freq[leftIdx] == 0) {
                                    uniqueCount--;
                              }

                              l++;
                        }

                        // Update max length if all unique characters in current window appear at least k times
                        if (uniqueCount == uniqueTarget && validCount == uniqueTarget) {
                              ans = Math.max(ans, r - l + 1);
                        }
                  }
            }

            return ans;
      }
}