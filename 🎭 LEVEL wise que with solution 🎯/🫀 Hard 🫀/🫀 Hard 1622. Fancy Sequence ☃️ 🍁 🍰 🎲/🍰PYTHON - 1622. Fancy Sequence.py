#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1622

#? ⌚ Time complexity ➺ O(log M) 👉🏻  M = per append (due to modular exponentiation), O(1) for rest

#? 🧺 Space complexity ➺ O(1)

class Fancy:
      M = 1_000_000_007    # Large prime modulus to prevent overflow

      def __init__(self):
            self.seq  = []       # Stores transformed values
            self.add  = 0        # Lazy cumulative addition offset
            self.mult = 1        # Lazy cumulative multiplication factor

      # ---------- Helper: Fast modular exponentiation (a^b % M) ----------
      def power(self, a: int, b: int) -> int:
            # Base case: anything raised to 0 is 1
            if b == 0:
                  return 1

            # Recursively compute half power
            half = self.power(a, b // 2)

            # Square the half result
            result = (half * half) % self.M

            # If exponent is odd, multiply once more by base
            if b % 2 == 1:
                  result = (result * a) % self.M

            return result

      # ---------- Append: neutralize current lazy offsets before storing ----------
      def append(self, val: int) -> None:
            # Reverse the current add/mult offsets so getIndex returns original val
            # Formula: x = (val - add) * modInverse(mult)  (mod M)
            x = ((val - self.add) % self.M + self.M) * self.power(self.mult, self.M - 2) % self.M
            self.seq.append(x)

      # ---------- AddAll: shift the global add offset ----------
      def addAll(self, inc: int) -> None:
            # All future getIndex calls will add this inc automatically
            self.add = (self.add + inc) % self.M

      # ---------- MultAll: scale both mult and add offsets ----------
      def multAll(self, m: int) -> None:
            # Scale the multiplier
            self.mult = (self.mult * m) % self.M
            # Also scale the add offset since (x*mult + add)*m = x*(mult*m) + (add*m)
            self.add  = (self.add  * m) % self.M

      # ---------- GetIndex: apply lazy offsets to stored value ----------
      def getIndex(self, idx: int) -> int:
            # Return -1 if index is out of bounds
            if idx >= len(self.seq):
                  return -1

            # Reconstruct original value using lazy formula: seq[idx] * mult + add
            return (self.seq[idx] * self.mult + self.add) % self.M