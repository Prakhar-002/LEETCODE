// Not working yet
var checkRecord = function(n) {
      let mod = 1000000007

      let PorL = [];
      let p = [];

      PorL.push(1)
      PorL.push(2)

      p.push(1)
      p.push(1)

      for (let i = 2; i <= n; i++){
            p.push(PorL[i - 1])
            PorL.push((p[i] + p[i - 1] + p[i - 2]) % mod)
      }

      let res = PorL[n];

      for (let i = 0; i < n; i++) {
            let s = (PorL[i] * PorL[n - i - 1]) % mod;
            res = (res + s) % mod;
      }

      return res;
};