#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 202

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def isHappy(self, n: int) -> bool:
            # Helper function: calculates sum of squares of all digits in a number
            def sumOfSqr(num):
                  total = 0
                  while num > 0:
                        digit = num % 10        # Extract last digit
                        total += digit ** 2     # Add square of digit to total
                        num //= 10              # Remove last digit
                  return total

            # Set to track numbers we've seen to detect cycles
            visit = set()

            # Keep processing until we reach 1 (happy) or detect cycle (unhappy)
            while n not in visit:
                  visit.add(n)                    # Mark current number as visited
                  n = sumOfSqr(n)                 # Replace with sum of squared digits

                  if n == 1:                      # Happy number reached 1
                        return True

            # Cycle detected - unhappy number
            return False
