//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2220

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

var minBitFlips = function (start, goal) {
      // Convert the XOR result to binary string and count '1's
      return (start ^ goal).toString(2).split('1').length - 1;
};

//!------------------------------------------------------------------------------------------------ 

//? ⌚ Time complexity ➺  O(1)

//? 🧺 Space complexity ➺ O(1)

function minBitFlips(start, goal) {
      // variable will keep track of the number of bit flips required
      let flips = 0;

      // calculates the bitwise XOR (`^`) of `start` and `goal` and assigns the result to `num`
      // determine which bits are different between -> Set 1 if different and 0 if not
      let num = start ^ goal;

      //  run as long as `num` is not zero
      while (num) {
            // count the number of `1` in num by using AND (`&`) operator
            flips += (num & 1);  // essentially checks the least significant bit (LSB) of `num`
            // `num` is then right-shifted one bit
            num >>= 1;
      }

      // return total number of bit flips required to transform `start` into `goal`
      return flips;
}

//!------------------------------------------------------------------------------------------------

//? ⌚ Time complexity ➺  O(1)

//? 🧺 Space complexity ➺ O(1)

function minBitFlips(start, goal) {
      // variable will keep track of the number of bit flips required
      let flips = 0;

      // calculates the bitwise XOR (`^`) of `start` and `goal` and assigns the result to `num`
      // determine which bits are different between -> Set 1 if different and 0 if not
      let num = start ^ goal;

      // run as long as `num` is not zero
      while (num) {
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

//!------------------------------------------------------------------------------------------------

//? ⌚ Time complexity ➺  O(1)

//? 🧺 Space complexity ➺ O(1)

function minBitFlips(start, goal) {
      // variable will keep track of the number of bit flips required
      let flips = 0;

      // while loop that continues as long as either `start` or `goal` is non-zero
      while (start || goal) {
            // extracts the least significant bit and checks if the LSB of `start` and `goal` 
            if ((start & 1) !== (goal & 1)) {
                  // If they are different, it means a bit flip is required to make them the same
                  flips++;
            }

            // right shifts `start` by one bit 
            start >>= 1;
            // right shifts `goal` by one bit 
            goal >>= 1;
      }

      // return total number of bit flips required to transform `start` into `goal`
      return flips;
}