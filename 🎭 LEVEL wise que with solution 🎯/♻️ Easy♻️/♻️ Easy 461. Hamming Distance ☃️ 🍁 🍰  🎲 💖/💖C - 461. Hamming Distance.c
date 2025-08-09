//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 461

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = 32

//? 🧺 Space complexity ➺ O(1)

int hammingDistance(int x, int y) {
      // Step 1: XOR to get differing bits
      int d = x ^ y;

      // Step 2: Counter for differing bits
      int count = 0;

      // Step 3: Loop until no set bits remain
      while (d != 0) {
            // Remove the lowest set bit
            d &= d - 1;

            // Increment counter
            count++;
      }

      // Step 4: Return the total count
      return count;
}
