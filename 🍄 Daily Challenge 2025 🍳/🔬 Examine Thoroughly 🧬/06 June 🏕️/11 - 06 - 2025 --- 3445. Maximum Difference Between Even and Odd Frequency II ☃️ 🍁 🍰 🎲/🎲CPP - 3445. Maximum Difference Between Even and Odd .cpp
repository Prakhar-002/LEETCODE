//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3445

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int maxDifference(string s, int k) {
            // Lambda function to calculate 2-bit parity status
            // Bit 1 = parity of cnt_a, Bit 0 = parity of cnt_b
            auto getStatus = [](int cnt_a, int cnt_b) -> int {
                  return ((cnt_a & 1) << 1) | (cnt_b & 1);
            };

            int n = s.size();  // Length of input string
            int ans = INT_MIN; // Initialize max difference as smallest int

            // Try all character pairs from '0' to '4'
            for (char a = '0'; a <= '4'; ++a) {
                  for (char b = '0'; b <= '4'; ++b) {
                        if (a == b)
                              continue; // Skip same characters

                        // best[status] stores minimum prev_a - prev_b for that parity status
                        int best[4] = {INT_MAX, INT_MAX, INT_MAX, INT_MAX};

                        int cnt_a = 0, cnt_b = 0;   // Running count of a's and b's
                        int prev_a = 0, prev_b = 0; // Left window count of a's and b's
                        int left = -1;              // Left pointer of sliding window

                        // Slide the right pointer through the string
                        for (int right = 0; right < n; ++right) {
                              cnt_a += (s[right] == a); // Update count for 'a'
                              cnt_b += (s[right] == b); // Update count for 'b'

                              // Maintain window of size ≥ k and at least 2 'b's in left side
                              while (right - left >= k && cnt_b - prev_b >= 2) {
                                    int left_status = getStatus(prev_a, prev_b); // Get parity status

                                    // Update best value for this parity status
                                    best[left_status] = min(best[left_status], prev_a - prev_b);

                                    ++left;                   // Move left pointer
                                    prev_a += (s[left] == a); // Update left 'a' count
                                    prev_b += (s[left] == b); // Update left 'b' count
                              }

                              int right_status = getStatus(cnt_a, cnt_b); // Current window parity status

                              // Check if opposite a-parity status has a valid best value
                              if (best[right_status ^ 0b10] != INT_MAX) {
                                    ans = max(ans, cnt_a - cnt_b - best[right_status ^ 0b10]);
                              }
                        }
                  }
            }

            return ans; // Return the maximum difference found
      }
};
