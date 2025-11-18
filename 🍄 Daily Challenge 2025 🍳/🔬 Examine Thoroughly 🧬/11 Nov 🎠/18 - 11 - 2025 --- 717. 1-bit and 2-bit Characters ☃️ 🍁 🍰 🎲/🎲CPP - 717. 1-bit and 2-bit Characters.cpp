//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 717

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(bits)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      bool isOneBitCharacter(vector<int>& bits) {
            int i = 0;

            // Traverse bits until second last index
            while (i < (int)bits.size() - 1) {
                  if (bits[i] == 1) {
                        // Two-bit character detected, skip next bit
                        i += 2;
                  } else {
                        // One-bit character, move by one
                        i += 1;
                  }
            }

            // Check if last bit is one-bit character
            return i == (int)bits.size() - 1;
      }
};
