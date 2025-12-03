#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L2.4 Q3

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution(object):
      def repeatedStringMatch(self, A, B):
            # Minimum number of repetitions of A so that its length
            # is at least the length of B
            q = (len(B) - 1) // len(A) + 1

            # Try using q repetitions and q + 1 repetitions of A
            # This covers all possible cases where B can be a substring
            for i in range(2):
                  # If B appears as a substring in A repeated (q + i) times,
                  # return that repetition count
                  if B in A * (q + i):
                        return q + i

            # If B is never found as a substring, return -1
            return -1