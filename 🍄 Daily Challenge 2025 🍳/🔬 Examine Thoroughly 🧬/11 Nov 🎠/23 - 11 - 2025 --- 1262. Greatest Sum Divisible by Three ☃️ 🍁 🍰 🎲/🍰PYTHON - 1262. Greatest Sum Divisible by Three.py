#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1262

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def maxSumDivThree(self, nums: List[int]) -> int:
            # Initialize total sum of elements
            total = 0
            # Track smallest sum of elements with remainder 1 mod 3
            smallest_one = float("inf")
            # Track smallest sum of elements with remainder 2 mod 3
            smallest_two = float("inf")

            # Iterate over each number in the list
            for n in nums:
                  total += n 
                  # If number has remainder 1 when divided by 3
                  if n % 3 == 1:
                        # Update smallest_two by considering current n plus smallest_one
                        smallest_two = min(smallest_two, n + smallest_one)
                        # Update smallest_one with minimum between current and n
                        smallest_one = min(smallest_one, n)
                  # If number has remainder 2 when divided by 3
                  if n % 3 == 2:
                        # Update smallest_one by considering current n plus smallest_two
                        smallest_one = min(smallest_one, n + smallest_two)
                        # Update smallest_two with minimum between current and n
                        smallest_two = min(smallest_two, n)

            # If total sum is divisible by 3, return total
            if total % 3 == 0:
                  return total
            # If remainder 1, subtract smallest_one from total to make divisible by 3
            if total % 3 == 1:
                  return total - smallest_one
            # If remainder 2, subtract smallest_two from total to make divisible by 3
            if total % 3 == 2:
                  return total - smallest_two
