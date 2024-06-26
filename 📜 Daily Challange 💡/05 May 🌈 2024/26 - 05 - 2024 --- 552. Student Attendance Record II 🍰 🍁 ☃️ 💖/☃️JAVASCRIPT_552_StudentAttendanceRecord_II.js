//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 552 

const mod = Math.pow(10, 9) + 7;

function checkRecord(n) {
      let PorL = new Array(n + 1).fill(0); // ending with P or L, no A [1, 2, 4, 7, 13]
      let P = new Array(n + 1).fill(0); // ending with P, no A [1, 1, 2, 4, 7]
      PorL[0] = P[0] = 1;
      PorL[1] = 2;
      P[1] = 1;

      for (let i = 2; i <= n; i++) {
            P[i] = PorL[i - 1];
            PorL[i] = (P[i] + P[i - 1] + P[i - 2]) % mod;
      }

      let res = PorL[n];
      for (let i = 0; i < n; i++) { // inserting A into (n-1)-length strings
            let s = (PorL[i] * PorL[n - i - 1]) % mod;
            res = (res + s) % mod;
      }

      return Math.trunc(res);
}