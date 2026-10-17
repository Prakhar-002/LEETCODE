#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3551

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def minSwaps(self, nums: list[int]) -> int:
            # Helper function to compute the sum of digits of a number
            def digit_sum(n: int) -> int:
                  res = 0
                  while n:
                        res += n % 10
                        n //= 10
                  return res

            ans = []
            items = {}

            # Map each number to its original index and pair it with its digit sum
            for i, n in enumerate(nums):
                  items[n] = i
                  ans.append((digit_sum(n), n))

            # Sort primarily by digit sum, secondarily by number value
            ans.sort()

            # Target sorted order of elements
            target = [num for _, num in ans]
            res = 0

            # Iterate and swap elements to their target positions
            for i in range(len(nums)):
                  if nums[i] != target[i]:
                        res += 1

                        # Find current index of the target element
                        j = items[target[i]]

                        # Swap elements in nums
                        nums[i], nums[j] = nums[j], nums[i]

                        # Update positions in the map
                        items[nums[j]] = j
                        items[nums[i]] = i

            return res