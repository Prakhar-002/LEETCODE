//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L8.4 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var findGCD = function (nums) {
      // Find the minimum and maximum element in the array
      const min = Math.min(...nums);
      const max = Math.max(...nums);

      // Return the GCD of min and max
      return gcd(min, max);
};

// Compute GCD of two numbers using Euclidean algorithm
function gcd(a, b) {
      // Base case: if a is 0, GCD is b
      if (a === 0) return b;
      // Recursive case: gcd(a, b) = gcd(b % a, a)
      return gcd(b % a, a);
}
