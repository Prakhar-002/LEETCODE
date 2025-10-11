//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3186

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {

      public long maximumTotalDamage(int[] power) {
            // TreeMap automatically sorts keys: each key is a spell damage,
            // value is the count (frequency) of spells with that damage.
            TreeMap<Integer, Integer> spellFrequency = new TreeMap<>();
            for (int p : power) {
                  spellFrequency.put(p, spellFrequency.getOrDefault(p, 0) + 1);
            }

            // freqList will hold pairs of [damage, frequency],
            // starting with a dummy pair to simplify logic.
            List<int[]> freqList = new ArrayList<>();
            freqList.add(new int[]{ -1000000000, 0 });

            // Add all unique damage and their counts in order
            for (Map.Entry<Integer, Integer> entry : spellFrequency.entrySet()) {
                  freqList.add(new int[]{ entry.getKey(), entry.getValue() });
            }

            int n = freqList.size();
            // dp[i]: maximum total damage considering spells up to freqList[i]
            long[] dp = new long[n];

            long maxPrevDamage = 0; // Tracks max dp value for valid separation
            long answer = 0; 
            int l = 1; // Points to earliest available spell that can combine with current one

            for (int r = 1; r < n; r++) {
                  // Move left pointer forward while separation constraint holds
                  // Spells must be >2 damage apart to combine, so update maxPrevDamage
                  while (l < r && freqList.get(l)[0] < freqList.get(r)[0] - 2) {
                        maxPrevDamage = Math.max(maxPrevDamage, dp[l]);
                        l++;
                  }

                  // Calculate damage for current spell group: add its total with best prior
                  dp[r] = maxPrevDamage + 1L * freqList.get(r)[0] * freqList.get(r)[1];
                  answer = Math.max(answer, dp[r]); // Update global result
            }

            // Return the maximum achievable total damage
            return answer;
      }
}
