//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3003

//? ⌚ Time complexity ➺ O(m * n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
      int maxPartitionsAfterOperations(string s, int k) {
            int n = s.length();

            // left[i] holds info for prefix ending at i:
            // [0] = number of partitions formed
            // [1] = bitmask representing distinct chars in current partition
            // [2] = count of distinct characters in current partition
            vector<vector<int>> left(n, vector<int>(3)); 

            // right[i] holds similar suffix info starting at i
            vector<vector<int>> right(n, vector<int>(3)); 

            int num = 0;       // count of partitions formed so far
            int mask = 0;      // bitmask of characters in current partition
            int count = 0;     // number of distinct characters so far

            // Build prefix partition info from left to right
            for (int i = 0; i < n - 1; i++) {
                  int binary = 1 << (s[i] - 'a');    // char bit position
                  // If character not yet appeared in current partition
                  if ((mask & binary) == 0) {
                        count++;
                        // If still within k distinct chars allowed, add it
                        if (count <= k) {
                              mask |= binary;
                        } else {
                              // Exceeded k distinct chars → start new partition
                              num++;
                              mask = binary;
                              count = 1;
                        }
                  }
                  // Store current prefix info at i+1
                  left[i + 1][0] = num;
                  left[i + 1][1] = mask;
                  left[i + 1][2] = count;
            }

            // Reset for suffix computation
            num = 0; mask = 0; count = 0;

            // Build suffix partition info from right to left
            for (int i = n - 1; i > 0; i--) {
                  int binary = 1 << (s[i] - 'a');
                  if ((mask & binary) == 0) {
                        count++;
                        if (count <= k) {
                              mask |= binary;
                        } else {
                              num++;
                              mask = binary;
                              count = 1;
                        }
                  }
                  // Store suffix info at i-1
                  right[i - 1][0] = num;
                  right[i - 1][1] = mask;
                  right[i - 1][2] = count;
            }

            int Max = 0;  // track maximum partitions achievable

            // Try partitioning at each possible split point i
            for (int i = 0; i < n; i++) {
                  // Sum partitions from left and right plus 2 for potential current partition and separation
                  int seg = left[i][0] + right[i][0] + 2;

                  // Combine distinct characters from left and right partitions
                  int totMask = left[i][1] | right[i][1];
                  int totCount = 0;

                  // Count number of distinct characters (popcount)
                  while (totMask) {
                        totMask &= (totMask - 1);
                        totCount++;
                  }

                  // If both sides have exactly k distinct chars and total < 26, can create extra partition
                  if (left[i][2] == k && right[i][2] == k && totCount < 26) {
                        seg++;
                  }
                  // If combined count + 1 does not exceed k, adjust partitions count
                  else if (min(totCount + 1, 26) <= k) {
                        seg--;
                  }

                  Max = max(Max, seg);
            }

            return Max;
      }
};
