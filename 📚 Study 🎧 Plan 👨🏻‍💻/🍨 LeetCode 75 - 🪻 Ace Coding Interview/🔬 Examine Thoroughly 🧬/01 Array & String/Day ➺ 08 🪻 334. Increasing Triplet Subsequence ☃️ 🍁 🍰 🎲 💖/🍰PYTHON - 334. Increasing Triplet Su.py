#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 334

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      # Define a method 'increasingTriplet' that takes 'nums' as a list of integers
      def increasingTriplet(self, nums: List[int]) -> bool:
            # Check if the list is empty or has fewer than 3 elements; no triplet is possible
            if not nums or len(nums) < 3:
                  return False  # Return False if the condition is met

            # Initialize 'a' to positive infinity (this will track the smallest number)
            a = float("inf")
            # Initialize 'b' to positive infinity (this will track the second smallest number)
            b = float("inf")

            # Iterate over each number in the list
            for num in nums:
                  # If the current number is smaller than or equal to 'a', update 'a'
                  if num <= a:
                        a = num

                  # Else if the current number is smaller than or equal to 'b', update 'b'
                  elif num <= b:
                        b = num

                  # If the current number is greater than both 'a' and 'b', return True (triplet found)
                  else:
                        return True

            # If the loop completes without finding an increasing triplet, return False
            return False
