#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 152

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def maxProduct(self, nums: List[int]) -> int:
            # 'low'  → minimum product ending at current position
            # 'high' → maximum product ending at current position
            # Dono track karna zaroori hai because negative * negative = positive
            low, high = 1, 1

            # Result initially array ke maximum element se start karte hain
            # kyunki agar sab negative ho ya single element ho to bhi handle ho
            res = max(nums)

            # Traverse through each number in the array
            for n in nums:

                  # Agar element 0 hai to product chain break ho jati hai
                  # Isliye low aur high ko reset kar dete hain
                  if n == 0:
                        low = high = 1
                        continue

                  # Current number ke saath 3 possibilities hoti hain
                  # 1. Previous high * n
                  # 2. Previous low * n  (important for negative numbers)
                  # 3. Start new subarray from n
                  low, high = min(high * n, low * n, n), max(high * n, low * n, n)

                  # High ko result se compare karte hain
                  # kyunki high current position ka maximum product hai
                  res = max(res, high)

            # Final maximum product return
            return res