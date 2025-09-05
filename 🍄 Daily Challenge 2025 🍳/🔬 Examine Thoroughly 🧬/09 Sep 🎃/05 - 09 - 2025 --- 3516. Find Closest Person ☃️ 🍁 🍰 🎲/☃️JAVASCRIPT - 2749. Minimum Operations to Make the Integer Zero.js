//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2749

//? ⌚ Time complexity ➺ O(k)

//? 🧺 Space complexity ➺ O(1)

var makeTheIntegerZero = function (num1, num2) {
      let k = 1;
      // ------ Try increasing k stepwise; each k is an attempt
      while (true) {
            // ------ Calculate what remains after subtracting k * num2
            let x = num1 - num2 * k;

            // ------ If x is less than k, it's impossible to split x into k positive powers of two
            if (x < k) {
                  return -1;
            }

            // ------ If k >= bit count (number of set bits), it's possible
            // Count number of set bits (Hamming weight) in x
            let bitCount = x.toString(2).split('1').length - 1;
            if (k >= bitCount) {
                  return k;
            }

            // ------ Try next k
            k++;
      }
}
