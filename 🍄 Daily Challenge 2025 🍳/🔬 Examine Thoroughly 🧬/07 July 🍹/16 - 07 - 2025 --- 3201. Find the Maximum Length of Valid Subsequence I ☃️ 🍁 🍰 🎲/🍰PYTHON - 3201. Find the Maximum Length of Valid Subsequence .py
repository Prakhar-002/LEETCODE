#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3201

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def maximumLength(self, nums: List[int]) -> int:
            res = 0  # Stores the maximum subsequence length found

            # Try all 4 parity patterns: [even, even], [even, odd], [odd, even], [odd, odd]
            for pattern in [[0, 0], [0, 1], [1, 0], [1, 1]]:
                  count = 0  # Current length of matching subsequence

                  # Loop through each number in the input list
                  for num in nums:
                        # Check if the number matches the current parity in the pattern
                        # (count % 2) switches between 0 and 1 to alternate the pattern
                        if num % 2 == pattern[count % 2]:
                              count += 1  # Extend subsequence

                  # Update the result if current subsequence is longer
                  res = max(res, count)

            return res  # Return the longest matching subsequence length

#!----------------------------------------------------------------------

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def maximumLength(self, nums: List[int]) -> int:
            n = len(nums)
            odd_count = 0         # Count of odd numbers
            even_count = 0        # Count of even numbers
            alt_count = 1         # Count of alternating parity sequence
            prev = nums[0]        # Previous number for parity comparison

            for i in range(n):
                  if nums[i] % 2 == 1:
                        odd_count += 1
                  else:
                        even_count += 1

                  # Check for parity alternation with previous number
                  if i >= 1 and nums[i] % 2 != prev % 2:
                        alt_count += 1
                        prev = nums[i]

            # Return max of all three
            return max(odd_count, even_count, alt_count)
