#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 3178

#? ⌚ Time complexity -> O(1) 

#? 🧺 Space complexity -> O(1) 

class Solution:
      def numberOfChild(self, n: int, k: int) -> int:
            # 1 2 3 4 | 5 4 3 2 | 1 2 3 4 | 5 4 3 2 | 1 2 3 4 | ...
            # group will be made of n - 1 length
            chunks = k // (n - 1)
            # The odd one chunk starts with number 1
            # while the even chunk starts with number n.
            return (k % (n - 1)) if chunks % 2 == 0 else (n - 1 - k % (n - 1))
