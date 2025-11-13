//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L4 Q1

//? ⌚ Time complexity ➺ O(n)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
using namespace std;

class Solution {
public:
      int countPrimes(int n) {
            if (n < 2) return 0;  // No primes less than 2

            vector<bool> primes(n, true);  // Assume all are prime initially
            primes[0] = primes[1] = false; // 0 and 1 are not prime

            int i = 2;  // Start from the first prime number
            while (i * i < n) {
                  if (primes[i]) {
                        // Mark all multiples of i starting at i*i as non-prime
                        for (int j = i * i; j < n; j += i) {
                              primes[j] = false;
                        }
                  }
                  i++;
            }

            int count = 0;
            for (bool prime : primes) {
                  if (prime) count++;  // Count all primes
            }

            return count;
      }
};
