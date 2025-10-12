//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3539

//? ⌚ Time complexity ➺ O(N ^ 2 * K * L *logN) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(N⋅K⋅L⋅logN)

#include <vector>
#include <unordered_map>
using namespace std;

const int MOD = 1000000007;

class Solution {
public:
      // Entry point: returns the number of magical sequences as defined by the problem
      int magicalSum(int totalCount, int targetOdd, vector<int>& numbers) {
            // Memoization map: stores states as a string "remaining,oddNeeded,index,carry"
            unordered_map<string, int> memo;
            // Start DFS with all balls to pick, target odds, at index 0, and no initial carry
            return dfs(totalCount, targetOdd, 0, 0, numbers, memo);
      }

private:
      // Main DP/DFS recursive helper
      // remaining: how many balls/items left to pick
      // oddNeeded: how many odd-counts are needed
      // index: current index in numbers[]
      // carry: running "carry" which tracks the parity accumulation as bits
      // memo: memoization map for speedup
      int dfs(int remaining, int oddNeeded, int index, int carry,
            vector<int>& numbers, unordered_map<string, int>& memo) {

            // Compose a unique key for the memoization table
            string key = to_string(remaining) + "," + to_string(oddNeeded) + "," +
                        to_string(index) + "," + to_string(carry);

            // Return memoized answer if computed already
            if (memo.count(key)) return memo[key];

            // Invalid state 1: too many or too few picked, or parities can't be matched
            if (remaining < 0 || oddNeeded < 0 || remaining + __builtin_popcount(carry) < oddNeeded)
                  return 0;

            // Base case: used all the picks
            // Check parity matches between accumulated carry and required odds
            if (remaining == 0)
                  return (oddNeeded == __builtin_popcount(carry)) ? 1 : 0;

            // Base case: ran out of numbers to pick from, but still need more
            if (index >= (int)numbers.size())
                  return 0;

            int ans = 0;
            // Try picking 'take' number of current numbers[index]
            for (int take = 0; take <= remaining; take++) {
                  // Number of ways to choose 'take' items of current number
                  // math.comb in Python, here combinatorial function
                  int ways = (int)((comb(remaining, take) * modPow(numbers[index], take)) % MOD);
                  // Accumulate carry for the next step
                  int newCarry = carry + take;
                  // Recur for the rest
                  int sub = (int)(ways * 1LL * dfs(
                        remaining - take, // reduce items to pick
                        oddNeeded - (newCarry % 2), // update odd count needed, parity
                        index + 1, // move to next number
                        newCarry / 2, // update carry (shift right)
                        numbers, memo
                  ) % MOD);
                  ans = (ans + sub) % MOD;
            }
            // Memoize the answer for current state
            return memo[key] = ans;
      }

      // Modular exponentiation: calculates (base^exp) % MOD efficiently
      long long modPow(int base, int exp) {
            long long res = 1, b = base;
            while (exp > 0) {
                  if (exp & 1) res = (res * b) % MOD;
                  b = (b * b) % MOD;
                  exp >>= 1;
            }
            return res;
      }

      // Combination: computes binomial coefficient (n choose k)
      long long comb(int n, int k) {
            if (k < 0 || k > n) return 0;
            long long res = 1;
            for (int i = 1; i <= k; i++)
                  res = res * (n - i + 1) / i;
            return res % MOD;
      }
};
