#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 300

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(len(res))

class Solution:
      def lengthOfLIS(self, nums: List[int]) -> int:
            # This list stores the smallest tail value for increasing subsequences
            # of different lengths. It is NOT the actual LIS but helps compute its length.
            lis = []

            # Custom binary search function to find the position to replace in 'lis'
            def binary_search(arr, target):
                  left, right = 0, len(arr) - 1

                  while left <= right:
                        mid = (left + right) // 2
                        if arr[mid] == target:
                              return mid
                        elif arr[mid] > target:
                              right = mid - 1
                        else:
                              left = mid + 1

                  # If target is not found, return the position where it can be inserted
                  return left

            # Iterate through the input array
            for num in nums:
                  if not lis or num > lis[-1]:
                        # If current number is greater than last element in lis,
                        # it extends the increasing subsequence
                        lis.append(num)
                  else:
                        # Otherwise, replace the element at the found position
                        # to maintain the smallest possible tail
                        idx = binary_search(lis, num)
                        lis[idx] = num

            # The length of the list is the length of the longest increasing subsequence
            return len(lis)
