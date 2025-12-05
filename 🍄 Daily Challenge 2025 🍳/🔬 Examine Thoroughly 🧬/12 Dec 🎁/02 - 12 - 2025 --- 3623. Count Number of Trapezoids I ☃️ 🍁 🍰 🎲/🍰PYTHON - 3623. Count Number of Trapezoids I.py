#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3623

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n) 

class Solution:
      def countTrapezoids(self, points: List[List[int]]) -> int:
            # Count points by their y-coordinate (horizontal levels)
            point_num = defaultdict(int)

            # Group points by y-coordinate only (x-coordinates don't matter for horizontal trapezoids)
            for point in points:
                  point_num[point[1]] += 1

            MOD = 10**9 + 7
            ans = 0        # Total number of trapezoids
            total_sum = 0  # Running sum of edges from previous levels

            # Process each horizontal level
            for p_num in point_num.values():
                  # Number of horizontal edges at this level = C(p_num, 2) = p*(p-1)/2
                  edge = p_num * (p_num - 1) // 2

                  # Each edge at current level can pair with ALL previous edges
                  # to form trapezoids (different y-coordinates guarantee parallel)
                  ans = (ans + edge * total_sum) % MOD

                  # Add current level's edges to running total for future levels
                  total_sum = (total_sum + edge) % MOD

            return ans
