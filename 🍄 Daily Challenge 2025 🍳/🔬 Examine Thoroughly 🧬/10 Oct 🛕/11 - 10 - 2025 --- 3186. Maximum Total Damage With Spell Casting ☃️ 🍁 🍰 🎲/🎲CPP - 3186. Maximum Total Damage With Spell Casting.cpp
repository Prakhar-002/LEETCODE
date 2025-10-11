//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3186

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <map>
using namespace std;

class Solution {
public:
      long long maximumTotalDamage(vector<int>& power) {
            // Map to count frequency of each unique power value, keys in ascending order
            map<int, int> powerFrequency;
            for (int p : power) {
                  powerFrequency[p]++;
            }

            // Vector to hold pairs of (power value, frequency)
            // Add a large negative dummy value at index 0 to simplify indexing and bounds
            vector<pair<int, int>> freqList = {{-1000000000, 0}};
            for (auto& p : powerFrequency) {
                  freqList.push_back(p);
            }

            int n = (int)freqList.size();
            // DP array: f[i] = max total damage selecting from first i groups
            vector<long long> dp(n, 0);

            long long maxPrev = 0;  // Tracks max dp value for groups that don't clash
            long long answer = 0;

            // Two pointers technique:
            // 'r' moves forward through freqList,
            // 'l' moves forward to find non-overlapping groups (difference in power > 2)
            for (int r = 1, l = 1; r < n; r++) {
                  // Advance 'l' while power difference constraint is met
                  while (l < r && freqList[l].first < freqList[r].first - 2) {
                        maxPrev = max(maxPrev, dp[l]);
                        l++;
                  }

                  // Calculate dp[r] as best prior damage plus current group damage
                  dp[r] = maxPrev + 1LL * freqList[r].first * freqList[r].second;

                  // Update global answer
                  answer = max(answer, dp[r]);
            }

            return answer;
      }
};
