//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3115

//? ⌚ Time complexity ➺ O(n * sqrt(n)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
      // Function for checking if a number is prime
      bool isPrime(int num) {
            // 1 is not prime
            if (num == 1) {
                  return false;
            }

            // 2 is prime
            if (num == 2) {
                  return true;
            }

            // Even numbers greater than 2 are not prime
            if (num % 2 == 0) {
                  return false;
            }

            // Check odd numbers up to the square root of num
            for (int i = 3; i <= sqrt(num); i += 2) {
                  if (num % i == 0) {
                        return false;
                  }
            }

            // If no divisors found, the number is prime
            return true;
      }

      int maximumPrimeDifference(vector<int>& nums) {
            int minIdx = 0, maxIdx = nums.size() - 1;

            // Find the first prime number from the start
            while (!isPrime(nums[minIdx])) {
                  minIdx++;
            }

            // Find the first prime number from the end
            while (!isPrime(nums[maxIdx])) {
                  maxIdx--;
            }

            // Return the difference between the indices
            return maxIdx - minIdx;
      }
};