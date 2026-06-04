#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3751

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums1 - nums2)

#? 🧺 Space complexity ➺ O(1)

class Solution:

      def totalWaviness(self, num1: int, num2: int) -> int:

            # Count peaks and valleys in the digit sequence of a number
            def waviness(n):
                  waviness = 0

                  for i in range(1, len(n) - 1):
                        peak   = n[i - 1] < n[i] > n[i + 1]    # Middle digit is highest
                        valley = n[i - 1] > n[i] < n[i + 1]    # Middle digit is lowest

                        if peak or valley:
                              waviness += 1

                  return waviness

            ans = 0

            # Accumulate waviness for every number in the range
            for i in range(num1, num2 + 1):
                  ans += waviness(str(i))

            return ans