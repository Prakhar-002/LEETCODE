#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3606

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from typing import List

class Solution:
      def validateCoupons(self, code: List[str], businessLine: List[str], isActive: List[bool]) -> List[str]:
            # Priority order: electronics < grocery < pharmacy < restaurant
            priority = {
                  "electronics": 0,
                  "grocery": 1,
                  "pharmacy": 2,
                  "restaurant": 3
            }

            # Helper: validate coupon code format
            def is_valid(s: str) -> bool:
                  """
                  Valid coupon: non-empty, alphanumeric + underscore only
                  """
                  return len(s) > 0 and all(ch.isalnum() or ch == '_' for ch in s)

            # Collect valid coupons as (priority, code) tuples
            valid = []

            # Filter valid coupons based on 3 conditions
            for i in range(len(code)):
                  if (isActive[i] and                       # 1. Must be active
                        businessLine[i] in priority and     # 2. Valid business line
                        is_valid(code[i])):                 # 3. Valid format
                        valid.append((priority[businessLine[i]], code[i]))

            # Sort: priority ascending, then lexicographical ascending
            valid.sort()

            # Extract codes only
            return [coupon for _, coupon in valid]
