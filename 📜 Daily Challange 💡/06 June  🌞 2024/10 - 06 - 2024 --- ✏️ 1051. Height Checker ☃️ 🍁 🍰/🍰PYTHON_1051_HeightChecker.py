# //! https://github.com/Prakhar-002/LEETCODE


# Todo 📌 QUESTION NUMBER 1051 

class Solution:
      def heightChecker(self, heights: List[int]) -> int:
            expected = heights.copy()

            expected.sort()

            count = 0

            for i in range(len(heights)):
                  if heights[i] != expected[i]:
                        count += 1

            return count 