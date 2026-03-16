//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1622

// ? ⌚ Time complexity ➺ O(log M) 👉🏻  M = per append(due to modular exponentiation), O(1) for rest

// ? 🧺 Space complexity ➺ O(1)

// Approach: Lazy propagation with modular inverse
// T.C : O(log M) per append (due to modular exponentiation), O(1) for rest
// S.C : O(n) for storing the sequence

#include <vector>
using namespace std;

class Fancy {
public:
      long long M = 1'000'000'007;    // Large prime modulus to prevent overflow
      vector<long long> seq;          // Stores transformed values
      long long add  = 0;             // Lazy cumulative addition offset
      long long mult = 1;             // Lazy cumulative multiplication factor

      // ---------- Helper: Fast modular exponentiation (a^b % M) ----------
      long long power(long long a, long long b) {
            // Base case: anything raised to 0 is 1
            if (b == 0)
                  return 1;

            // Recursively compute half power
            long long half = power(a, b / 2);

            // Square the half result
            long long result = (half * half) % M;

            // If exponent is odd, multiply once more by base
            if (b % 2 == 1) {
                  result = (result * a) % M;
            }

            return result;
      }

      // ---------- Constructor ----------
      Fancy() {}

      // ---------- Append: neutralize current lazy offsets before storing ----------
      void append(int val) {
            // Reverse the current add/mult offsets so getIndex returns original val
            // Formula: x = (val - add) * modInverse(mult)  (mod M)
            long long x = ((val - add) % M + M) * power(mult, M - 2) % M;
            seq.push_back(x);
      }

      // ---------- AddAll: shift the global add offset ----------
      void addAll(int inc) {
            // All future getIndex calls will add this inc automatically
            add = (add + inc) % M;
      }

      // ---------- MultAll: scale both mult and add offsets ----------
      void multAll(int m) {
            // Scale the multiplier
            mult = (mult * m) % M;
            // Also scale the add offset since (x*mult + add)*m = x*(mult*m) + (add*m)
            add  = (add  * m) % M;
      }

      // ---------- GetIndex: apply lazy offsets to stored value ----------
      int getIndex(int idx) {
            // Return -1 if index is out of bounds
            if (idx >= (int)seq.size())
                  return -1;

            // Reconstruct original value using lazy formula: seq[idx] * mult + add
            return (int) ((seq[idx] * mult + add) % M);
      }
};