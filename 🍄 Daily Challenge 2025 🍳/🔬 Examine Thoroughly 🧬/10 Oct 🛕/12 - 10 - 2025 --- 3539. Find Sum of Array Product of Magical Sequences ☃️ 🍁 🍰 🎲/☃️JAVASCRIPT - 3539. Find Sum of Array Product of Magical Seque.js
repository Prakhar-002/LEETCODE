//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3539

//? ⌚ Time complexity ➺ O(N ^ 2 * K * L *logN) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(N⋅K⋅L⋅logN)

const MOD = 1000000007n;

function magicalSum(m, k, nums) {
      const n = nums.length;
      const numsB = nums.map(BigInt);

      // Precompute powtab[i][c] = nums[i]^c mod MOD for c in [0..m]
      const powtab = Array.from({ length: n }, () => Array(m + 1).fill(0n));
      for (let i = 0; i < n; i++) {
            powtab[i][0] = 1n;
            for (let c = 1; c <= m; c++) {
                  powtab[i][c] = (powtab[i][c - 1] * numsB[i]) % MOD;
            }
      }

      // Precompute combinations comb[r][c] = C(r, c) mod MOD for r,c in [0..m]
      const comb = Array.from({ length: m + 1 }, () => Array(m + 1).fill(0n));
      for (let i = 0; i <= m; i++) {
            comb[i][0] = 1n;
            for (let j = 1; j <= i; j++) {
                  comb[i][j] = (comb[i - 1][j - 1] + comb[i - 1][j]) % MOD;
            }
      }

      // dp[rem][carry][ones] holds the running total after processing some prefix of indices:
      // rem picks left to place, current carry value, ones bits produced so far
      let dp = Array.from({ length: m + 1 }, () =>
            Array.from({ length: m + 1 }, () => Array(k + 1).fill(0n))
      );
      dp[m][0][0] = 1n; // start with all m picks remaining, carry = 0, ones = 0

      for (let i = 0; i < n; i++) {
            const next = Array.from({ length: m + 1 }, () =>
                  Array.from({ length: m + 1 }, () => Array(k + 1).fill(0n))
            );
            const powi = powtab[i];
            for (let rem = 0; rem <= m; rem++) {
                  for (let carry = 0; carry <= m; carry++) {
                        for (let ones = 0; ones <= k; ones++) {
                              const base = dp[rem][carry][ones];
                              if (base === 0n) continue;
                              // Choose c copies of index i among the rem remaining positions
                              for (let c = 0; c <= rem; c++) {
                                    const t = c + carry;           // add c to current bit with carry in
                                    const bit = t & 1;             // output bit at this position
                                    const ones2 = ones + bit;      // update ones count
                                    if (ones2 > k) continue;
                                    const carry2 = t >> 1;         // carry to the next bit
                                    const rem2 = rem - c;

                                    // Transition weight = comb[rem][c] (ways to place c copies) * nums[i]^c
                                    let add = base;
                                    add = (add * comb[rem][c]) % MOD;
                                    add = (add * powi[c]) % MOD;

                                    next[rem2][carry2][ones2] = (next[rem2][carry2][ones2] + add) % MOD;
                              }
                        }
                  }
            }
            dp = next;
      }

      // Finish: only states with rem = 0 are valid
      // Leftover carry still contributes popcount(carry) ones
      let ans = 0n;
      for (let carry = 0; carry <= m; carry++) {
            const extra = popcount(carry);
            const need = k - extra;
            if (need >= 0 && need <= k) {
                  ans = (ans + dp[0][carry][need]) % MOD;
            }
      }

      return Number(ans);

      function popcount(x) {
            let cnt = 0;
            while (x) {
                  x &= x - 1;
                  cnt++;
            }
            return cnt;
      }
}