//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3753

//? ⌚ Time complexity ➺ O(D^3 log(num2)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(D^2 log(num2))

class Solution {

      // String representation of current number
      private String s;

      // Total digits in current number
      private int n;

      // memo_cnt[pos][prev][curr]
      // Stores number of possible numbers from this state
      private long[][][] memo_cnt;

      // memo_sum[pos][prev][curr]
      // Stores total waviness contribution from this state
      private long[][][] memo_sum;

      public long totalWaviness(long num1, long num2) {

            // Prefix sum technique:
            // waviness(num1...num2) = waviness(0...num2) - waviness(0...num1-1)
            return solve(num2) - solve(num1 - 1);
      }

      // Returns total waviness of all numbers from 0 to num
      private long solve(long num) {

            // Numbers with less than 3 digits
            // cannot have peak or valley
            if (num < 100) {
                  return 0L;
            }

            s = Long.toString(num);
            n = s.length();

            // Maximum length of long value is <= 16 digits here
            memo_cnt = new long[16][10][10];
            memo_sum = new long[16][10][10];

            // Fill memo arrays with -1
            // -1 means state is not calculated yet
            for (int i = 0; i < 16; i++) {

                  for (int j = 0; j < 10; j++) {

                        Arrays.fill(memo_cnt[i][j], -1);
                        Arrays.fill(memo_sum[i][j], -1);
                  }
            }

            // dfs returns:
            // result[0] = count of numbers
            // result[1] = total waviness
            long[] result = dfs(
                        0, // current digit position
                        -1, // previous previous digit
                        -1, // previous digit
                        true, // restricted by num
                        true // ignoring leading zeroes
            );

            return result[1];
      }

      private long[] dfs(
                  int pos,
                  int prev,
                  int curr,
                  boolean isLimit,
                  boolean isLeading) {

            // All positions filled
            if (pos == n) {

                  // one valid number formed
                  // waviness contribution = 0 initially
                  return new long[] { 1L, 0L };
            }

            // Use memoized answer only when:
            // 1. no upper bound restriction
            // 2. actual number has started
            // 3. we have previous two digits
            if (!isLimit &&
                        !isLeading &&
                        prev >= 0 &&
                        curr >= 0) {

                  if (memo_cnt[pos][prev][curr] != -1) {

                        return new long[] {
                                    memo_cnt[pos][prev][curr],
                                    memo_sum[pos][prev][curr]
                        };
                  }
            }

            long count = 0; // total numbers possible
            long sum = 0; // total waviness

            // Highest digit we can place here
            int limit = isLimit
                        ? s.charAt(pos) - '0'
                        : 9;

            // Try placing every digit
            for (int digit = 0; digit <= limit; digit++) {

                  // Still skipping leading zeros
                  boolean newLeading = (isLeading && digit == 0);

                  // Move current digit to previous position
                  int newPrev = curr;

                  // Store new digit
                  // If still leading zeros, don't consider digit
                  int newCurr = newLeading
                              ? -1
                              : digit;

                  // Solve remaining digits
                  long[] next = dfs(
                              pos + 1,
                              newPrev,
                              newCurr,
                              isLimit && digit == limit,
                              newLeading);

                  long nextCount = next[0];
                  long nextSum = next[1];

                  // Check waviness only when we have 3 digits:
                  //
                  // prev curr digit
                  //
                  // Peak:
                  // prev < curr > digit
                  //
                  // Valley:
                  // prev > curr < digit
                  if (!newLeading &&
                              prev >= 0 &&
                              curr >= 0) {

                        boolean peak = prev < curr && curr > digit;

                        boolean valley = prev > curr && curr < digit;

                        // Current digit creates a wave
                        // Add it for every possible suffix number
                        if (peak || valley) {
                              sum += nextCount;
                        }
                  }

                  // Add contribution from remaining positions
                  count += nextCount;
                  sum += nextSum;
            }

            // Save calculated state
            if (!isLimit &&
                        !isLeading &&
                        prev >= 0 &&
                        curr >= 0) {

                  memo_cnt[pos][prev][curr] = count;
                  memo_sum[pos][prev][curr] = sum;
            }

            return new long[] {
                        count,
                        sum
            };
      }
}