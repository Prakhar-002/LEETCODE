//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 670

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      int maximumSwap(int num) {
            // Step 1: Extract digits into a vector
            vector<int> digits;
            int n = num;

            // Use modulus and division to extract each digit and store in a vector
            while (n > 0) {
                  digits.push_back(n % 10);
                  n /= 10;
            }

            // Reverse the digits vector to restore the correct order 
            // (most significant to least significant)
            reverse(digits.begin(), digits.end());

            // Initialize variables to keep track of the maximum digit and swap positions
            int max_digit = -1;
            int max_idx = -1;
            int swap_idx = -1;
            int prev_max_idx = -1;

            // Step 2: Traverse digits from right to left
            for (int i = digits.size() - 1; i >= 0; --i) {
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
                  swap(digits[swap_idx], digits[prev_max_idx]);
            }

            // Step 4: Reconstruct the number from the modified vector of digits
            int result = 0;
            for (int d : digits) {
                  // Build the number by shifting and adding digits
                  result = result * 10 + d;
            }

            // Return the result
            return result;
      }
};

