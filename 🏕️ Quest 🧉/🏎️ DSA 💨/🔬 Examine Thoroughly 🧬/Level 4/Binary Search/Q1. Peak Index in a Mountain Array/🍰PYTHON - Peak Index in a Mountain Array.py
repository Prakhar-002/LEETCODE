#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L4.3 Q1

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def peakIndexInMountainArray(self, arr: List[int]) -> int:
            # Binary search on the mountain array
            l, r = 0, len(arr) - 1

            # Loop until the search space shrinks to one element
            while l < r:
                  mid = l + (r - l) // 2  # Avoid potential overflow style

                  # If middle element is less than the next one,
                  # we are on the increasing slope, so peak is to the right
                  if arr[mid] < arr[mid + 1]:
                        l = mid + 1
                  else:
                        # We are on the decreasing slope (or at peak),
                        # so peak is at mid or to the left
                        r = mid

            # l (or r) now points to the peak index
            return l
