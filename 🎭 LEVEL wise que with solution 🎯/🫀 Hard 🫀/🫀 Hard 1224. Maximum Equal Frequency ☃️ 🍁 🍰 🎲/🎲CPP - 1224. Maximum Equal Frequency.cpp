//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1224

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
      int maxEqualFreq(vector<int>& nums) {
            // cnt[num]  = how many times num has appeared so far
            unordered_map<int, int> cnt;
            // freq[f]   = how many distinct numbers currently have frequency f
            unordered_map<int, int> freq;

            int maxF = 0;    // Highest frequency seen so far
            int res  = 0;    // Longest valid prefix length

            for (int i = 0; i < (int)nums.size(); i++) {
                  int num = nums[i];

                  // ---------- Update count for current number ----------
                  int prevCnt = cnt[num];    // defaults to 0 if not present
                  cnt[num]++;

                  // ---------- Update frequency map ----------
                  // Remove old frequency bucket
                  freq[prevCnt]--;
                  // Add to new frequency bucket
                  freq[prevCnt + 1]++;

                  // ---------- Track max frequency ----------
                  maxF = max(maxF, prevCnt + 1);

                  // ---------- Check 3 validity conditions ----------
                  // Condition 1: every number appears exactly maxF times
                  //              and removing one still leaves equal freqs
                  bool cond1 = (long long)maxF * freq[maxF] == i;

                  // Condition 2: all but one number appear maxF-1 times,
                  //              and that one number appears maxF times (remove it once)
                  bool cond2 = (long long)(maxF - 1) * (freq[maxF - 1] + 1) == i;

                  // Condition 3: every number appears exactly once (maxF == 1)
                  //              removing any one element keeps the rest valid
                  bool cond3 = maxF == 1;

                  if (cond1 || cond2 || cond3) {
                        res = i + 1;
                  }
            }

            return res;
      }
};