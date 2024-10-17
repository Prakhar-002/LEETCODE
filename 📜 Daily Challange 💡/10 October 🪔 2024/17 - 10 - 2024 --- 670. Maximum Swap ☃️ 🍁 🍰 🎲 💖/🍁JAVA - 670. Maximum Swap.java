//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 670

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int maximumSwap(int num) {
            // Step 1: Extract digits into a list
            List<Integer> digits = new ArrayList<>();
            int n = num;

            // Use modulus and division to extract each digit and store in a list
            while (n > 0) {
                  digits.add(n % 10);
                  n /= 10;
            }

            // Reverse the digits list to restore the correct order
            // (most significant to least significant)
            Collections.reverse(digits);

            // Initialize variables to keep track of the maximum digit and swap positions
            int maxDigit = -1;
            int maxIdx = -1;
            int swapIdx = -1;
            int prevMaxIdx = -1;

            // Step 2: Traverse digits from right to left
            for (int i = digits.size() - 1; i >= 0; i--) {
                  // If the current digit is greater than the maxDigit seen so far,
                  // update maxDigit and maxIdx
                  if (digits.get(i) > maxDigit) {
                        maxDigit = digits.get(i);
                        maxIdx = i;
                  }

                  // If the current digit is smaller than the maxDigit,
                  // store the indices for a potential swap
                  if (digits.get(i) < maxDigit) {
                        swapIdx = i;
                        prevMaxIdx = maxIdx;
                  }
            }

            // Step 3: Perform the swap if needed
            if (swapIdx != -1) {
                  // Swap the smaller digit with the largest digit that comes after it
                  int temp = digits.get(swapIdx);
                  digits.set(swapIdx, digits.get(prevMaxIdx));
                  digits.set(prevMaxIdx, temp);
            }

            // Step 4: Reconstruct the number from the modified list of digits
            int result = 0;
            for (int d : digits) {
                  // Build the number by shifting and adding digits
                  result = result * 10 + d;
            }

            // Return the result
            return result;
      }
}
