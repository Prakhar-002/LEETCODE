//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 717

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(bits)

//? 🧺 Space complexity ➺ O(1)

// Java version
class Solution {
      public boolean isOneBitCharacter(int[] bits) {
            int i = 0;

            // Traverse the bits array until the second last bit
            while (i < bits.length - 1) {
                  if (bits[i] == 1) {
                        // If the bit is 1, skip the next bit because it's a two-bit character
                        i += 2;
                  } else {
                        // If the bit is 0, move to the next bit
                        i += 1;
                  }
            }

            // If we end exactly on the last bit, it means the last character is a one-bit character (0)
            return i == bits.length - 1;
      }
}
