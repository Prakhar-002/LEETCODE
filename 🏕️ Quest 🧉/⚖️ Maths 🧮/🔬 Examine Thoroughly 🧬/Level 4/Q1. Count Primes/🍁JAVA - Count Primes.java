//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L4 Q1

//? ⌚ Time complexity ➺ O(n)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int countPrimes(int n) {
            if (n < 2) return 0;  // No primes less than 2

            boolean[] primes = new boolean[n];  // Array to track primality
            Arrays.fill(primes, true);           // Assume all numbers prime initially
            primes[0] = false;                   // 0 is not prime
            primes[1] = false;                   // 1 is not prime

            int i = 2;  // Start checking from the first prime number

            // Loop while i squared is less than n to mark multiples
            while (i * i < n) {
                  if (primes[i]) {
                        // Mark multiples of current prime starting at i*i as non-prime
                        for (int j = i * i; j < n; j += i) {
                              primes[j] = false;
                        }
                  }

                  i++;
            }

            // Count prime entries remaining in array
            int count = 0;
            for (boolean prime : primes) {
                  if (prime) count++;
            }

            return count;
      }
}
