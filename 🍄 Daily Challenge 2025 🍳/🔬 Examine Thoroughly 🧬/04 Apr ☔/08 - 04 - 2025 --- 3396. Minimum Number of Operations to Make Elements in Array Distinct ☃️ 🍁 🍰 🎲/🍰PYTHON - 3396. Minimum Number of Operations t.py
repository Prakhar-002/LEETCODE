#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3396

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def minimumOperations(self, nums: List[int]) -> int:
            # Initialize a set to store unique elements from the end
            unique_set = set()

            # Traverse the array from the end
            for num in reversed(nums):
                  # If a duplicate is found, break the loop
                  if num in unique_set:
                        break

                  # Otherwise, add the number to the set
                  unique_set.add(num)

            # Calculate the number of elements before the unique suffix
            rem_len = len(nums) - len(unique_set)

            # Calculate the minimum number of operations
            # If rem_len is divisible by 3, return the quotient
            # Otherwise, return quotient + 1 to cover remaining elements
            return rem_len // 3 if not rem_len % 3 else (rem_len // 3) + 1
