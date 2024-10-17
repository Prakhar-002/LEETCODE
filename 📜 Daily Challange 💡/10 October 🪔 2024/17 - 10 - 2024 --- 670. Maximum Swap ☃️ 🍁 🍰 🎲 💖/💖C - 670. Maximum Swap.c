//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 670

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maximumSwap(int num) {
      // Step 1: Extract digits into an array
      int digits[10];  // Assuming the number has at most 10 digits
      int n = num;
      int len = 0;

      // Use modulus and division to extract each digit and store in an array
      while (n > 0) {
            digits[len++] = n % 10;
            n /= 10;
      }

      // Reverse the digits array to restore the correct order 
      // (most significant to least significant)
      for (int i = 0; i < len / 2; i++) {
            int temp = digits[i];
            digits[i] = digits[len - 1 - i];
            digits[len - 1 - i] = temp;
      }

      // Initialize variables to keep track of the maximum digit and swap positions
      int max_digit = -1;
      int max_idx = -1;
      int swap_idx = -1;
      int prev_max_idx = -1;

      // Step 2: Traverse digits from right to left
      for (int i = len - 1; i >= 0; i--) {
            // If the current digit is greater than the max_digit seen so far, 
            // update max_digit and max_idx
            if (digits[i] > max_digit) {
                  max_digit = digits[i];
                  max_idx = i;
            }

            // If the current digit is smaller than the max_digit, 
            // store the indices for a potential swap
            if (digits[i] < max_digit) {
                  swap_idx = i;
                  prev_max_idx = max_idx;
            }
      }

      // Step 3: Perform the swap if needed
      if (swap_idx != -1) {
            // Swap the smaller digit with the largest digit that comes after it
            int temp = digits[swap_idx];
            digits[swap_idx] = digits[prev_max_idx];
            digits[prev_max_idx] = temp;
      }

      // Step 4: Reconstruct the number from the modified array of digits
      int result = 0;
      for (int i = 0; i < len; i++) {
            // Build the number by shifting and adding digits
            result = result * 10 + digits[i];
      }

      // Return the result
      return result;
}

