#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L3.3 Q3

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def waysToMakeFair(self, nums: List[int]) -> int:
            # Total sum of elements at even indices
            total_even = sum(nums[::2])
            # Total sum of elements at odd indices
            total_odd = sum(nums[1::2])

            # Prefix sums for even and odd indices (elements before current index)
            prefix_even = 0
            prefix_odd = 0

            count = 0  # Number of indices that can be removed to make array fair

            for i, num in enumerate(nums):
                  # Remove current element from its respective total sum
                  if i % 2 == 0:
                        total_even -= num   # Current even index removed from even total
                  else:
                        total_odd -= num    # Current odd index removed from odd total

                  # After removing nums[i],
                  # elements after i shift left and flip parity:
                  # new_even_sum = even prefix before i + odd suffix after i
                  # new_odd_sum  = odd prefix before i + even suffix after i
                  new_even_sum = prefix_even + total_odd
                  new_odd_sum = prefix_odd + total_even

                  # If sums of even and odd indices are equal, this index is valid
                  if new_even_sum == new_odd_sum:
                        count += 1

                  # Add current element to corresponding prefix sum for next iterations
                  if i % 2 == 0:
                        prefix_even += num
                  else:
                        prefix_odd += num

            return count
