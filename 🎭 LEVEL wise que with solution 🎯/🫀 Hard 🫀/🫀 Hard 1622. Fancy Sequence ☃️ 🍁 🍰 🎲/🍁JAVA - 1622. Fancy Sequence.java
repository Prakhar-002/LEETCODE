//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1622

// ? ⌚ Time complexity ➺ O(log M) 👉🏻  M = per append(due to modular exponentiation), O(1) for rest

// ? 🧺 Space complexity ➺ O(1)

import java.util.ArrayList;
import java.util.List;

class Fancy {
      long M = 1_000_000_007; // Large prime modulus to prevent overflow
      List<Long> seq = new ArrayList<>(); // Stores transformed values
      long add = 0; // Lazy cumulative addition offset
      long mult = 1; // Lazy cumulative multiplication factor

      // ---------- Helper: Fast modular exponentiation (a^b % M) ----------
      long power(long a, long b) {
            // Base case: anything raised to 0 is 1
            if (b == 0)
                  return 1;

            // Recursively compute half power
            long half = power(a, b / 2);

            // Square the half result
            long result = (half * half) % M;

            // If exponent is odd, multiply once more by base
            if (b % 2 == 1) {
                  result = (result * a) % M;
            }

            return result;
      }

      // ---------- Constructor ----------
      public Fancy() {
      }

      // ---------- Append: neutralize current lazy offsets before storing ----------
      public void append(int val) {
            // Reverse the current add/mult offsets so getIndex returns original val
            // Formula: x = (val - add) * modInverse(mult) (mod M)
            long x = ((val - add) % M + M) * power(mult, M - 2) % M;
            seq.add(x);
      }

      // ---------- AddAll: shift the global add offset ----------
      public void addAll(int inc) {
            // All future getIndex calls will add this inc automatically
            add = (add + inc) % M;
      }

      // ---------- MultAll: scale both mult and add offsets ----------
      public void multAll(int m) {
            // Scale the multiplier
            mult = (mult * m) % M;
            // Also scale the add offset since (x*mult + add)*m = x*(mult*m) + (add*m)
            add = (add * m) % M;
      }

      // ---------- GetIndex: apply lazy offsets to stored value ----------
      public int getIndex(int idx) {
            // Return -1 if index is out of bounds
            if (idx >= seq.size())
                  return -1;

            // Reconstruct original value using lazy formula: seq[idx] * mult + add
            return (int) ((seq.get(idx) * mult + add) % M);
      }
}
