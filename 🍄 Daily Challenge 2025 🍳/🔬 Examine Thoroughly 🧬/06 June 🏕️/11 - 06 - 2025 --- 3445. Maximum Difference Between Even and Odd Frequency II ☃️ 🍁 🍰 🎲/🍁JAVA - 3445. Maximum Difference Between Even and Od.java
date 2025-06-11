//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3445

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int maxDifference(String s, int k) {
            int n = s.length(); // Length of input string
            int ans = Integer.MIN_VALUE; // Initialize answer with lowest value

            // Try all possible pairs of characters from '0' to '4'
            for (char a = '0'; a <= '4'; ++a) {
                  for (char b = '0'; b <= '4'; ++b) {
                        if (a == b)
                              continue; // Skip if both characters are the same

                        int[] best = new int[4]; // best[status] stores the minimal (prev_a - prev_b)
                        Arrays.fill(best, Integer.MAX_VALUE); // Initialize best values with max

                        int cnt_a = 0, cnt_b = 0; // Total count of a's and b's so far
                        int prev_a = 0, prev_b = 0; // Count of a's and b's in the left segment
                        int left = -1; // Start of sliding window

                        // Move the right pointer through the string
                        for (int right = 0; right < n; ++right) {
                              // Count occurrences of a and b up to index 'right'
                              cnt_a += (s.charAt(right) == a) ? 1 : 0;
                              cnt_b += (s.charAt(right) == b) ? 1 : 0;

                              // Adjust the left pointer to maintain window of at least size k
                              // and ensure at least 2 'b's in the left half
                              while (right - left >= k && cnt_b - prev_b >= 2) {
                                    int left_status = getStatus(prev_a, prev_b); // Get parity status of left half

                                    // Store minimum difference of a's and b's for this status
                                    best[left_status] = Math.min(
                                                best[left_status],
                                                prev_a - prev_b
                                          );

                                    // Move the left pointer and update counts
                                    ++left;
                                    prev_a += (s.charAt(left) == a) ? 1 : 0;
                                    prev_b += (s.charAt(left) == b) ? 1 : 0;
                              }

                              int right_status = getStatus(cnt_a, cnt_b); // Parity status for current (right) window

                              // Check if there exists a valid left segment with flipped 'a' parity
                              if (best[right_status ^ 0b10] != Integer.MAX_VALUE) {
                                    ans = Math.max(
                                                ans,
                                                cnt_a - cnt_b - best[right_status ^ 0b10]
                                          );
                              }
                        }
                  }
            }

            return ans; // Return the maximum difference found
      }

      // Helper function to calculate 2-bit parity status
      // Bit 1: parity of cnt_a, Bit 0: parity of cnt_b
      private int getStatus(int cnt_a, int cnt_b) {
            return ((cnt_a & 1) << 1) | (cnt_b & 1);
      }
}