#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 594

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def findLHS(self, nums: List[int]) -> int:
            freq = Counter(nums)      # Count the frequency of each number
            maxLength = 0

            for num in freq:
                  # Check if num + 1 exists in the map
                  if num + 1 in freq:
                        # Update maximum length of harmonious subsequence
                        maxLength = max(maxLength, freq[num] + freq[num + 1])

            return maxLength
