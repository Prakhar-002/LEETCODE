//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L4 Q1

//? ⌚ Time complexity ➺ O(n)

//? 🧺 Space complexity ➺ O(n)

function countPrimes(n) {
      if (n < 2) return 0;  // No primes less than 2

      const primes = new Array(n).fill(true);  // Initialize array assuming all numbers prime
      primes[0] = false;  // 0 is not a prime
      primes[1] = false;  // 1 is not a prime

      let i = 2;
      while (i * i < n) {
            if (primes[i]) {
                  // Mark multiples of i as not prime starting at i^2
                  for (let j = i * i; j < n; j += i) {
                        primes[j] = false;
                  }
            }
            i++;
      }

      let count = 0;
      for (const isPrime of primes) {
            if (isPrime) count++;  // Count true entries representing primes
      }

      return count;
}
