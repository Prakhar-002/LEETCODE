//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2601

//? ⌚ Time complexity ➺ O(n + m * sqrt(m)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m) 👉🏻 m = max(nums)

#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution {
private:
      bool isPrime(int n) {
            for (int f = 2; f <= sqrt(n); f++) {
                  if (n % f == 0) {
                        return false;
                  }
            }
            return true;
      }

public:
      bool primeSubOperation(vector<int>& nums) {
            // Array to store the largest prime less than or equal to each index
            int maxVal = *max_element(nums.begin(), nums.end());
            vector<int> primes(maxVal + 1, 0);

            primes[0] = primes[1] = 0; // primes[i] => largest prime <= i

            // Build the primes array for numbers up to max(nums)
            for (int i = 2; i <= maxVal; i++) {
                  if (isPrime(i)) {
                        primes[i] = i; // Append the prime number
                  } else {
                        // If not prime, append the largest prime found so far
                        primes[i] = primes[i - 1];
                  }
            }

            int prev = 0; // Initialize the previous value in the sequence to 0

            // Iterate over each number in the input list
            for (int n : nums) {
                  // Find the largest prime that we can subtract from n to get a new value > prev
                  int upperBound = n - prev;

                  // Get the largest prime less than or equal to upper_bound
                  int largestPrime = upperBound > 0 ? primes[upperBound - 1] : 0;

                  // Check if the result of subtraction maintains the strictly increasing order
                  if (n - largestPrime <= prev) {
                        return false; // If not, return false immediately
                  }

                  // Update prev to the new number after subtraction
                  prev = n - largestPrime;
            }

            // If the loop completes, the sequence can be made strictly increasing
            return true;
      }
};

