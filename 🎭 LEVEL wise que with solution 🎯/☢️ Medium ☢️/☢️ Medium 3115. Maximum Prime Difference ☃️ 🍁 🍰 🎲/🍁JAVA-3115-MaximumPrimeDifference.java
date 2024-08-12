//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3115

//? ⌚ Time complexity ➺ O(n * sqrt(n)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      //  Function for checking if a number is prime
      private boolean isPrime(int num) {
            // 1 is not prime
            if (num == 1)
                  return false;

            // 2 is prime
            if (num == 2)
                  return true;

            // Even numbers greater than 2 are not prime
            if (num % 2 == 0)
                  return false;

            // loop for the root of num
            for (int i = 3; i * i <= num; i++) {
                  if (num % i == 0)
                        return false;
            }

            // If no divisors found, the number is prime
            return true;
      }

      public int maximumPrimeDifference(int[] nums) {
            // taking two variables
            int max = 0, min = 0;

            // apply forward loop and find first prime
            for (int i = 0; i < nums.length; i++) {
                  // get first prime
                  if (isPrime(nums[i])) {
                        // store idx of first prime
                        min = i;
                        // then break 
                        break;
                  }
            }

            // apply reverse loop and find last prime
            for (int i = nums.length - 1; i >= 0; i--) {
                  // get last prime
                  if (isPrime(nums[i])) {
                        // store the idx of last prime
                        max = i;
                        // break the loop
                        break;
                  }
            }

            // return the difference of max idx and min idx 
            return max - min;
      }
}