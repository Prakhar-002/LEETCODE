//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3622

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      bool checkDivisibility(int n) {
            int digitSum = 0;
            int digitProduct = 1;
            int org = n;

            // Extract each digit to calculate sum and product
            while (n > 0) {
                  int digit = n % 10;

                  digitSum += digit;
                  digitProduct *= digit;

                  n /= 10;
            }

            // Return true if divisible by the total sum of digit sum and product
            return (org % (digitSum + digitProduct)) == 0;
      }
};