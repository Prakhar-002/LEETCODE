class Solution:
      def heightChecker(self, heights: List[int]) -> int:
            height_freq = [0] * 101

            for h in heights:
                  height_freq[h] += 1

            expected = []

            for height in range(1, 101):
                  children = height_freq[height]

                  for _ in range(children):
                        expected.append(height)

            count = 0 

            for i in range(len(heights)):
                  if heights[i] != expected[i]:
                        count += 1

            return count