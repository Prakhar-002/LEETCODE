//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3753

//? ⌚ Time complexity ➺ O(D^3 log(num2)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(D^2 log(num2))

class Solution {
public:
      long long totalWaviness(long long num1, long long num2) {

            using ll = long long;


            // Function returns total waviness from range [0, num]
            auto solve = [&](ll num) -> ll {

                  // Numbers having less than 3 digits
                  // cannot create peak or valley
                  if (num < 100) {
                        return 0;
                  }


                  string s = to_string(num);
                  int n = s.size();


                  // memo_cnt[pos][prev][curr]
                  // stores number of possible numbers
                  // from current state
                  ll memo_cnt[16][10][10];


                  // memo_sum[pos][prev][curr]
                  // stores total waviness from current state
                  ll memo_sum[16][10][10];


                  // Mark every state as unvisited
                  memset(memo_cnt, -1, sizeof(memo_cnt));
                  memset(memo_sum, -1, sizeof(memo_sum));



                  auto dfs = [&](
                        this auto&& dfs,
                        int pos,
                        int prev,
                        int curr,
                        bool isLimit,
                        bool isLeading
                  ) -> pair<ll, ll> {


                        // All digits are placed
                        if (pos == n) {

                              // one valid number formed
                              // current waviness = 0
                              return {1, 0};
                        }



                        // Memoization only works when:
                        // 1. number is not restricted by limit
                        // 2. leading zero part is finished
                        // 3. previous two digits exist
                        if (
                              !isLimit &&
                              !isLeading &&
                              prev >= 0 &&
                              curr >= 0
                        ) {

                              if (memo_cnt[pos][prev][curr] != -1) {

                                    return {
                                          memo_cnt[pos][prev][curr],
                                          memo_sum[pos][prev][curr]
                                    };
                              }
                        }



                        // cnt = total numbers generated
                        // sum = total waviness generated
                        ll cnt = 0;
                        ll sum = 0;


                        // Maximum digit allowed at current position
                        int limit = isLimit ? s[pos] - '0' : 9;



                        // Try every digit
                        for (int digit = 0; digit <= limit; digit++) {


                              // Check if still ignoring leading zeros
                              bool newLeading = (
                                    isLeading &&
                                    digit == 0
                              );


                              // Shift window:
                              // prev curr digit
                              int newPrev = curr;


                              // Current digit becomes next curr
                              int newCurr = newLeading ? -1 : digit;



                              // Calculate answer for remaining digits
                              auto [subCnt, subSum] = dfs(
                                    pos + 1,
                                    newPrev,
                                    newCurr,
                                    isLimit && digit == limit,
                                    newLeading
                              );



                              // Need 3 digits to check waviness
                              if (
                                    !newLeading &&
                                    prev >= 0 &&
                                    curr >= 0
                              ) {


                                    // Peak:
                                    // prev < curr > digit
                                    bool peak =
                                          prev < curr &&
                                          curr > digit;


                                    // Valley:
                                    // prev > curr < digit
                                    bool valley =
                                          prev > curr &&
                                          curr < digit;



                                    // If current middle digit forms wave,
                                    // add contribution for every suffix
                                    if (peak || valley) {
                                          sum += subCnt;
                                    }
                              }



                              // Add suffix contribution
                              cnt += subCnt;
                              sum += subSum;
                        }



                        // Save calculated result
                        if (
                              !isLimit &&
                              !isLeading &&
                              prev >= 0 &&
                              curr >= 0
                        ) {

                              memo_cnt[pos][prev][curr] = cnt;
                              memo_sum[pos][prev][curr] = sum;
                        }


                        return {cnt, sum};
                  };



                  // first  -> count of numbers
                  // second -> total waviness
                  auto [count, totalSum] = dfs(
                        0,
                        -1,
                        -1,
                        true,
                        true
                  );


                  return totalSum;
            };



            // Prefix sum:
            // answer [num1, num2]
            // = answer [0, num2] - answer [0, num1 - 1]
            return solve(num2) - solve(num1 - 1);
      }
};