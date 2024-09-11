//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2220

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int minBitFlips(int start, int goal) {
            // count of one-bits in the two's complement binary
            // representation of the specified `int` value
            return Integer.bitCount(start ^ goal);
      }
}

// !------------------------------------------------------------------------------------------------

// ? ⌚ Time complexity ➺ O(1)

// ? 🧺 Space complexity ➺ O(1)

class Solution {
      public int minBitFlips(int start, int goal) {
            // variable will keep track of the number of bit flips required
            int flips = 0;

            // calculates the bitwise XOR (^) of `start` and `goal` and assigns the result
            // to `num`
            // determine which bits are different between -> Set 1 if different and 0 if not
            int num = start ^ goal;

            // run as long as `num` is not zero
            while (num != 0) {
                  // count the number of `1` in num by using AND (&) operator
                  flips += (num & 1); // essentially checks the least significant bit (LSB) of `num`
                  // `num` is then right-shifted one bit
                  num >>= 1;
            }

            // return total number of bit flips required to transform `start` into `goal`
            return flips;
      }
}

// !------------------------------------------------------------------------------------------------

// ? ⌚ Time complexity ➺ O(1)

// ? 🧺 Space complexity ➺ O(1)

class Solution {
      public int minBitFlips(int start, int goal) {
            // variable will keep track of the number of bit flips required
            int flips = 0;

            // calculates the bitwise XOR (^) of `start` and `goal` and assigns the result
            // to `num`
            // determine which bits are different between -> Set 1 if different and 0 if not
            int num = start ^ goal;

            // run as long as `num` is not zero
            while (num != 0) {
                  // essentially reduces `num` by one bit set to `1`
                  // in each iteration by subtracting `1` from `num`
                  // which flips all the bits up to and including the first `1` bit
                  // and then performing a bitwise AND with the original `num`,
                  // effectively removing the rightmost `1`
                  num = num & (num - 1);
                  // Increments the `flips` counter by `1` in each iteration
                  flips++;
            }

            // return total number of bit flips required to transform `start` into `goal`
            return flips;
      }
}

// !------------------------------------------------------------------------------------------------

// ? ⌚ Time complexity ➺ O(1)

// ? 🧺 Space complexity ➺ O(1)

class Solution {
      public int minBitFlips(int start, int goal) {
            // variable will keep track of the number of bit flips required
            int flips = 0;

            // while loop that continues as long as either `start` or `goal` is non-zero
            while (start != 0 || goal != 0) {
                  // extracts the least significant bit and checks if the LSB of `start` and
                  // `goal`
                  if ((start & 1) != (goal & 1)) {
                        // If they are different, it means a bit flip is required to make them the same
                        flips++;
                  }

                  // right shifts `start` by one bit
                  start >>>= 1;
                  // right shifts `goal` by one bit
                  goal >>>= 1;
            }

            // return total number of bit flips required to transform `start` into `goal`
            return flips;
      }
}
