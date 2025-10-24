#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2048

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = C - n

#? 🧺 Space complexity ➺ O(1)

from collections import Counter

class Solution:
      def nextBeautifulNumber(self, n: int) -> int:
            # Iterate from n+1 upward until the next numerically balanced number is found
            for i in range(n + 1, 1224445):  # 1224445 is the largest possible bound
                  count = Counter(str(i))     # Count frequency of each digit

                  # A number is 'beautiful' if each digit appears exactly that many times
                  if all(count[d] == int(d) for d in count):
                        return i
