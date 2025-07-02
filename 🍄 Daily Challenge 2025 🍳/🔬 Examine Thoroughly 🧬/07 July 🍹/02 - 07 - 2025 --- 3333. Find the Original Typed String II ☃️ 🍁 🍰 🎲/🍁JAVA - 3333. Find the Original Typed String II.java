//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3333

//? ⌚ Time complexity ➺ O(k * g) 👉🏻  n = len(groups)

//? 🧺 Space complexity ➺ O(k)

class Solution {
      static final int MOD = 1_000_000_007;

      public int possibleStringCount(String word, int k) {
            if (word.isEmpty()) return 0;

            List<Integer> groups = new ArrayList<>();
            int count = 1;

            // Step 1: Count group lengths
            for (int i = 1; i < word.length(); i++) {
                  if (word.charAt(i) == word.charAt(i - 1)) {
                        count++;
                  } else {
                        groups.add(count);
                        count = 1;
                  }
            }
            groups.add(count);

            // Step 2: Multiply group sizes
            long total = 1;
            for (int g : groups) {
                  total = (total * g) % MOD;
            }

            if (k <= groups.size()) return (int) total;

            // Step 3: DP to count invalid combinations
            int[] dp = new int[k];
            dp[0] = 1;

            for (int num : groups) {
                  int[] newDp = new int[k];
                  long sum = 0;

                  for (int s = 0; s < k; s++) {
                        if (s > 0) sum = (sum + dp[s - 1]) % MOD;
                        if (s > num) sum = (sum - dp[s - num - 1] + MOD) % MOD;
                        newDp[s] = (int) sum;
                  }
                  dp = newDp;
            }

            long invalid = 0;
            for (int i = groups.size(); i < k; i++) {
                  invalid = (invalid + dp[i]) % MOD;
            }

            return (int) ((total - invalid + MOD) % MOD);
      }
}
