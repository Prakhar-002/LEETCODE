// not working yet
int checkRecord(int n) {
      int mod = pow(10, 9) + 7;

      double PorL[n + 1];

      double P[n +1];

      PorL[0] = P[0] = 1;
      PorL[1] = 2;
      P[1] = 1;

      for (int i = 2; i <= n; i++) {
            P[i] = PorL[i - 1];
            PorL[i] = (int)(P[i] + P[i - 1] + P[i - 2]) % mod;
      }

      long res = PorL[n];
      for (int i = 0; i < n; i++) { // inserting A into (n-1)-length strings
            long s = (int)(PorL[i] * PorL[n - i - 1]) % mod;
            res = (res + s) % mod;
      }

      return (int) res;
}