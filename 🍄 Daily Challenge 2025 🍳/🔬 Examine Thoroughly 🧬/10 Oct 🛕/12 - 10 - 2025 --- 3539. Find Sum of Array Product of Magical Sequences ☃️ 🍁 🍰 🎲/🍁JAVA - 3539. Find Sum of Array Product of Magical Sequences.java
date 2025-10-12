//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3539

//? ⌚ Time complexity ➺ O(N ^ 2 * K * L *logN) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(N⋅K⋅L⋅logN)

import java.util.*;

class Solution {
      static final int MOD = 1000000007; // Modulo to prevent overflow in calculations

      // Main function to compute the magical sum
      // totalCount: total items to choose
      // targetOdd: number of items required to be odd
      // numbers: array of available numbers to pick
      public int magicalSum(int totalCount, int targetOdd, int[] numbers) {
            // Memoization map to cache states defined by (remaining, oddNeeded, index,
            // carry)
            Map<String, Integer> memo = new HashMap<>();
            // Start recursive DFS from the first index, with all items to choose, required
            // odds, and no carry
            return dfs(totalCount, targetOdd, 0, 0, numbers, memo);
      }

      // Recursive DFS with memoization to count valid ways
      private int dfs(int remaining, int oddNeeded, int index, int carry,
                  int[] numbers, Map<String, Integer> memo) {

            // Construct a unique key for the current state
            String key = remaining + "," + oddNeeded + "," + index + "," + carry;

            // Check if this state has already been computed to avoid duplicate computation
            if (memo.containsKey(key))
                  return memo.get(key);

            // Pruning invalid states:
            // - remaining < 0: more items taken than allowed
            // - oddNeeded < 0: too many odd items taken
            // - remaining + number of set bits in carry < oddNeeded: not enough items left
            // to fulfill odd requirement
            if (remaining < 0 || oddNeeded < 0 || remaining + Integer.bitCount(carry) < oddNeeded)
                  return 0;

            // Base case: all items chosen
            // Check if the count of odd items matches the requirement
            if (remaining == 0)
                  return (oddNeeded == Integer.bitCount(carry)) ? 1 : 0;

            // Termination case: no more numbers left but still items to choose
            if (index >= numbers.length)
                  return 0;

            int ans = 0;

            // Iterate over the number of items to "take" from the current number
            for (int take = 0; take <= remaining; take++) {
                  // Calculate combinations: ways to choose 'take' items from 'remaining'
                  // Multiply by power of the current number raised to 'take', with modulo
                  int ways = (int) ((comb(remaining, take) * modPow(numbers[index], take)) % MOD);

                  // Update carry value according to how many items taken
                  int newCarry = carry + take;

                  // Recursive call: move to next number with updated remaining items, odds needed
                  // and carry
                  int sub = (int) ((ways * 1L * dfs(remaining - take,
                              oddNeeded - (newCarry % 2),
                              index + 1,
                              newCarry / 2,
                              numbers, memo)) % MOD);

                  // Aggregate result modulo MOD
                  ans = (ans + sub) % MOD;
            }

            // Cache result for current state
            memo.put(key, ans);

            return ans;
      }

      // Compute modular exponentiation: (base^exp) % MOD
      private long modPow(int base, int exp) {
            long res = 1;
            long b = base;
            while (exp > 0) {
                  if ((exp & 1) == 1)
                        res = (res * b) % MOD;
                  b = (b * b) % MOD;
                  exp >>= 1;
            }
            return res;
      }

      // Compute binomial coefficient nCk (combinations)
      private long comb(int n, int k) {
            if (k < 0 || k > n)
                  return 0;
            long res = 1;
            for (int i = 1; i <= k; i++) {
                  res = res * (n - i + 1) / i;
            }
            return res % MOD;
      }
}
