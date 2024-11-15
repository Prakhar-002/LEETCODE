#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1574

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(arr)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def findLengthOfShortestSubarray(self, arr: List[int]) -> int:
            n = len(arr)

            # Step 1: Find the longest non-decreasing prefix
            left = 0
            while left + 1 < n and arr[left] <= arr[left + 1]:
                  left += 1

            # If the entire array is already sorted, no removal is needed
            if left == n - 1:
                  return 0

            # Step 2: Find the longest non-decreasing suffix
            right = n - 1
            while right > 0 and arr[right - 1] <= arr[right]:
                  right -= 1

            # Step 3: Calculate the minimum length to remove by comparing prefix and suffix
            # Removing everything after the prefix: n - left - 1
            # Removing everything before the suffix: right
            result = min(n - left - 1, right)

            # Step 4: Use two pointers to find the smallest middle part to remove
            i, j = 0, right
            while i <= left and j < n:
                  if arr[i] <= arr[j]:
                        # If arr[i] can be merged with arr[j], update the result
                        result = min(result, j - i - 1)
                        i += 1 # Move to the next element in the prefix
                  else:
                        j += 1 # Move to the next element in the suffix

            # Return the final result: the minimum length of the subarray to remove
            return result
