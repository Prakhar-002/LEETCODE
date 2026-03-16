//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1622

// ? ⌚ Time complexity ➺ O(log M) 👉🏻  M = per append(due to modular exponentiation), O(1) for rest

// ? 🧺 Space complexity ➺ O(1)

// Approach: Lazy propagation with modular inverse
// T.C : O(log M) per append (due to modular exponentiation), O(1) for rest
// S.C : O(n) for storing the sequence

class Fancy {
      constructor() {
            this.M = 1_000_000_007n;  // BigInt to prevent precision loss in JS
            this.seq = [];              // Stores transformed values
            this.add = 0n;             // Lazy cumulative addition offset
            this.mult = 1n;             // Lazy cumulative multiplication factor
      }

      // ---------- Helper: Fast modular exponentiation (a^b % M) ----------
      power(a, b) {
            // Base case: anything raised to 0 is 1
            if (b === 0n)
                  return 1n;

            // Recursively compute half power
            const half = this.power(a, b / 2n);

            // Square the half result
            let result = (half * half) % this.M;

            // If exponent is odd, multiply once more by base
            if (b % 2n === 1n) {
                  result = (result * a) % this.M;
            }

            return result;
      }

      // ---------- Append: neutralize current lazy offsets before storing ----------
      append(val) {
            // Reverse the current add/mult offsets so getIndex returns original val
            // Formula: x = (val - add) * modInverse(mult)  (mod M)
            const v = BigInt(val);
            const x = ((v - this.add) % this.M + this.M) * this.power(this.mult, this.M - 2n) % this.M;
            this.seq.push(x);
      }

      // ---------- AddAll: shift the global add offset ----------
      addAll(inc) {
            // All future getIndex calls will add this inc automatically
            this.add = (this.add + BigInt(inc)) % this.M;
      }

      // ---------- MultAll: scale both mult and add offsets ----------
      multAll(m) {
            const bm = BigInt(m);
            // Scale the multiplier
            this.mult = (this.mult * bm) % this.M;
            // Also scale the add offset since (x*mult + add)*m = x*(mult*m) + (add*m)
            this.add = (this.add * bm) % this.M;
      }

      // ---------- GetIndex: apply lazy offsets to stored value ----------
      getIndex(idx) {
            // Return -1 if index is out of bounds
            if (idx >= this.seq.length)
                  return -1;

            // Reconstruct original value using lazy formula: seq[idx] * mult + add
            return Number((this.seq[idx] * this.mult + this.add) % this.M);
      }
}