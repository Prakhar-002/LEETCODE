//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3583

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
      int specialTriplets(vector<int> &nums) {
            const int MOD = 1000000007;

            // Frequency count of each number
            unordered_map<int, int> numCnt;
            for (int num : nums) {
                  numCnt[num]++;
            }

            // partials[x] = how many x we've seen so far
            unordered_map<int, int> partials;

            long long ans = 0;

            for (int n : nums) {
                  int target = n * 2; // Need x where x*2 = n

                  // Left count: target values before current n
                  long long lCnt = partials[target];

                  // Update partials count
                  partials[n]++;

                  // Right count: target values remaining after current n
                  long long rCnt = numCnt[target] - partials[target];

                  ans = (ans + lCnt * rCnt) % MOD;
            }

            return ans;
      }
};
