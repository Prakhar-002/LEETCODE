class Solution:
      def checkRecord(self, n: int) -> int:
            mod = 10 ** 9 + 7

            PorL = []
            p = []

            PorL.append(1)
            PorL.append(2)

            p.append(1)
            p.append(1)

            for i in range(2, n + 1):
                  p.append(PorL[i - 1])
                  PorL.append((p[i] + p[i - 1] + p[i - 2]) % mod)

            res = PorL[n]

            for i in range(n):
                  s = (PorL[i] * PorL[n - i - 1]) % mod
                  res = (res + s) % mod

            return res