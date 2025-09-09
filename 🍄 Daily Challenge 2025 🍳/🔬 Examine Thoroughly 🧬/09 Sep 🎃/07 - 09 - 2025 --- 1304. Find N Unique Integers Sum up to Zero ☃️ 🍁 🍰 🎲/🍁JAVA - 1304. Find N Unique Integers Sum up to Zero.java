//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1304

//? ⌚ Time complexity ➺ O(n) 

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int[] sumZero(int n) {
            int[] arr = new int[n]; // Initialize the result array to store integers
            int idx = 0; // Index pointer for filling array

            // Add pairs of (-val, val) for each value from 1 to n / 2
            for (int val = 1; val <= n / 2; val++) {
                  arr[idx++] = -val; // Append negative value to balance positive
                  arr[idx++] = val; // Append positive value for zero sum pairing
            }
            // If n is odd, add 0 to ensure total sum is zero
            if (n % 2 == 1) {
                  arr[idx] = 0; // Append zero if required
            }
            return arr; // Return the array with n integers summing to zero
      }
}
