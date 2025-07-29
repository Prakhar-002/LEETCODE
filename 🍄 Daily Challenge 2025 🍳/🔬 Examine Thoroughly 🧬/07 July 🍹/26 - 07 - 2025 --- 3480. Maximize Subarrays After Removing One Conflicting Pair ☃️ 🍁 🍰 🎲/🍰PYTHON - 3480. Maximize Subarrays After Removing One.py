#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3480

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def maxSubarrays(self, n: int, conflictingPairs: List[List[int]]) -> int:

            # Initialize arrays to track the smallest and second smallest conflicts for each index
            minConflict = [2**31 - 1] * (n + 1)
            secondMinConflict = [2**31 - 1] * (n + 1)

            # Populate the conflict arrays from conflicting pairs
            for pair in conflictingPairs:
                  u = min(pair[0], pair[1])  # smaller index
                  v = max(pair[0], pair[1])  # larger index

                  # Update minimum conflicts
                  if minConflict[u] > v:
                        secondMinConflict[u] = minConflict[u]
                        minConflict[u] = v
                  elif secondMinConflict[u] > v:
                        secondMinConflict[u] = v

            totalValidSubarrays = 0
            minIndexWithMinConflict = n
            currentSecondMin = 0x3FFFFFFF  # large number

            # Array to track deletions at positions with minimum conflict
            deletionCount = [0] * (n + 1)

            # Iterate from the end of the array to the beginning
            for i in range(n, 0, -1):
                  
                  # Update the current position with the lowest minConflict seen so far
                  if minConflict[minIndexWithMinConflict] > minConflict[i]:
                        currentSecondMin = min(currentSecondMin, minConflict[minIndexWithMinConflict])
                        minIndexWithMinConflict = i
                  else:
                        currentSecondMin = min(currentSecondMin, minConflict[i])

                  # Count the number of valid subarrays starting from index i
                  totalValidSubarrays += min(minConflict[minIndexWithMinConflict], n + 1) - i

                  # Update deletion count for the current minimal conflict index
                  deletionCount[minIndexWithMinConflict] += min(
                        min(currentSecondMin, secondMinConflict[minIndexWithMinConflict]), n + 1
                  ) - min(minConflict[minIndexWithMinConflict], n + 1)

            # Add the maximum deletions to the total count
            return totalValidSubarrays + max(deletionCount)
