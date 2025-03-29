//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2818

//? ⌚ Time complexity ➺ O(N * sqrt(M) + N log N + k log N)

//? 🧺 Space complexity ➺ O(n)  👉🏻  n = len(nums)

// Modulo class to handle modular arithmetic efficiently (MOD = 10^9 + 7)
class Modulo {
      constructor(modulo) {
            this.modulo = modulo;
            this._phi = modulo - 1; // Euler's Totient Function for prime modulo
      }

      getPhi() {
            return this._phi;
      }

      // Compute modular inverse using Fermat's theorem: a^(mod-2) % mod
      getInverse(a) {
            return this.pow(a, this.getPhi() - 1);
      }

      // Modular addition (handling negative values)
      add(...numbers) {
            let result = 0;
            for (let number of numbers) {
                  result = (result + (number % this.modulo)) % this.modulo;
            }
            if (result < 0) result += this.modulo;
            return result;
      }

      // Fast modular multiplication using bitwise operations
      _quickMul(a, b) {
            // Ensure numbers are within the modulo range
            a = ((a % this.modulo) + this.modulo) % this.modulo;
            b = ((b % this.modulo) + this.modulo) % this.modulo;
            if (a === 0 || b === 0) return 0;
            let result = 0;
            while (b) {
                  while (b % 2 === 0) {
                        a = (a * 2) % this.modulo;
                        b /= 2;
                  }
                  if (b % 2 !== 0) {
                        result = (result + a) % this.modulo;
                        b--;
                  }
            }
            return result;
      }

      // Modular multiplication with support for division
      mul(...numbers) {
            let result = 1;
            for (let number of numbers) {
                  if (number > 0 && number < 1)
                        number = this.getInverse(Math.round(1 / number)); // Convert fractional number
                  result = this._quickMul(result, number);
                  if (result === 0) return 0;
            }
            if (result < 0) result += this.modulo;
            return result;
      }

      // Modular division using modular inverse
      div(a, b) {
            return this._quickMul(a, this.getInverse(b));
      }

      // Modular exponentiation using binary exponentiation (Fast power)
      pow(a, b) {
            a = ((a % this.modulo) + this.modulo) % this.modulo;
            if (a === 0) return 0;
            let result = 1;
            while (b) {
                  while (b % 2 === 0) {
                        a = this._quickMul(a, a);
                        b /= 2;
                  }
                  if (b % 2 !== 0) {
                        result = this._quickMul(result, a);
                        b--;
                  }
            }
            return result;
      }
}

// Create a Modulo object with MOD = 10^9 + 7
const mod = new Modulo(1000000007);

// Function to initialize the Sieve of Eratosthenes for prime factor counting
function initEratosthenesSieve(limit) {
      let sieve = Array(limit + 1).fill(0); // Array to store prime factor count for each number
      sieve[1] = 0; // 1 has no prime factors
      for (let i = 2; i <= limit; i++) {
            if (!sieve[i]) {
                  // If i is a prime, update multiples of i
                  for (let j = i; j <= limit; j += i) {
                        sieve[j]++; // Count prime factor occurrence
                  }
            }
      }
      return sieve;
}

// Precompute the number of distinct prime factors for numbers up to 100000
let primeFactorCount = initEratosthenesSieve(100000);

var maximumScore = function (nums, remainingOps) {
      const length = nums.length;
      const leftBound = Array(length).fill(0); // Stores left boundary indices (previous element with higher priority)
      const rightBound = Array(length).fill(length); // Stores right boundary indices (next element with higher priority)

      // Helper function to determine if left index has higher priority than right index
      function hasHigherPriority(leftIndex, rightIndex) {
            return primeFactorCount[nums[leftIndex]] >= primeFactorCount[nums[rightIndex]];
      }

      let stack = [];

      // Compute the left boundary for each index using a **monotonic stack**
      for (let i = 0; i < length; i++) {
            // Remove elements from the stack until we find an element with a greater prime factor count
            while (stack.length && !hasHigherPriority(stack[stack.length - 1], i)) {
                  stack.pop();
            }
            leftBound[i] = stack.length ? stack[stack.length - 1] : -1;
            stack.push(i); // Push current index to the stack
      }

      stack = [];

      // Compute the right boundary for each index using a **monotonic stack**
      for (let i = length - 1; i >= 0; i--) {
            // Remove elements from the stack until we find an element with a greater prime factor count
            while (stack.length && hasHigherPriority(i, stack[stack.length - 1])) {
                  stack.pop();
            }
            rightBound[i] = stack.length ? stack[stack.length - 1] : length;
            stack.push(i); // Push current index to the stack
      }

      // Create an array of indices sorted by `nums` in **descending order**
      const sortedIndices = Array.from(Array(length), (_, i) => i);
      sortedIndices.sort((a, b) => nums[b] - nums[a]); // Sort indices by values in descending order

      let result = 1; // Store the final maximum score

      // Process each element based on its sorted order (highest value first)
      for (let i = 0; i < length; i++) {
            const index = sortedIndices[i];

            // Calculate the number of operations we can use for this element
            const maxOperations = Math.min(
                  (index - leftBound[index]) * (rightBound[index] - index), // Contribution range
                  remainingOps // Remaining allowed operations
            );

            // Multiply the result with `nums[index]` raised to `maxOperations` (using modular exponentiation)
            result = mod.mul(result, mod.pow(nums[index], maxOperations));

            // Decrease the remaining operations
            remainingOps -= maxOperations;

            // If no more operations are left, return the result
            if (remainingOps === 0) return result;
      }
};
