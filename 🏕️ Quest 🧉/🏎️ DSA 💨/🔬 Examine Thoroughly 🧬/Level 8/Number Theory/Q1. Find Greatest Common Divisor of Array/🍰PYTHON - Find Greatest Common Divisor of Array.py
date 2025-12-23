#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L8.4 Q1

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def findGCD(self, nums: List[int]) -> int:
            # Find the minimum and maximum element in the array
            min_val = min(nums)
            max_val = max(nums)

            # Return the GCD of min and max
            return self.gcd(min_val, max_val)

      # Compute GCD of two numbers using Euclidean algorithm
      def gcd(self, a: int, b: int) -> int:
            # Base case: if a is 0, GCD is b
            if a == 0:
                  return b
            # Recursive case: gcd(a, b) = gcd(b % a, a)
            return self.gcd(b % a, a)
