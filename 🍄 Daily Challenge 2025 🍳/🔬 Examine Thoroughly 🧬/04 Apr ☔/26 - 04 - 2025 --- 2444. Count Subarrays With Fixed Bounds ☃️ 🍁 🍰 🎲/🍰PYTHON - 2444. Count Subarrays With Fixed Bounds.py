#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2444

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def countSubarrays(self, nums: List[int], minK: int, maxK: int) -> int:
            # pMin = most recent index where nums[i] == minK
            # pMax = most recent index where nums[i] == maxK
            # bad  = most recent index where nums[i] is out of [minK, maxK] range
            pMin = pMax = bad = -1

            # Initialize answer
            ans = 0

            # Loop through the array
            for i, num in enumerate(nums):
                  # If current number is equal to minK, update pMin
                  if num == minK:
                        pMin = i 

                  # If current number is equal to maxK, update pMax
                  if num == maxK:
                        pMax = i 

                  # If current number is outside [minK, maxK], update bad
                  if num < minK or num > maxK:
                        bad = i 

                  # If we have seen both minK and maxK at least once
                  if pMin != -1 and pMax != -1:
                        # Count valid subarrays ending at index 'i'
                        ans += max(0, min(pMin, pMax) - bad)

            # Return the total number of valid subarrays
            return ans  
