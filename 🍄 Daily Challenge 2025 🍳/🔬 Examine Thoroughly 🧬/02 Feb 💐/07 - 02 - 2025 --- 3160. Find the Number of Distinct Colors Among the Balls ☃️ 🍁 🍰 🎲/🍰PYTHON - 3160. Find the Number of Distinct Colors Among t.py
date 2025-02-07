#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3160

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(queries)

#? 🧺 Space complexity ➺ O(n)

from collections import defaultdict
from typing import List

class Solution:
      def queryResults(self, limit: int, queries: List[List[int]]) -> List[int]:
            result = []  # Stores the number of unique colors after each query

            # defaultdict(int) initializes missing keys with 0 by default
            color_map = defaultdict(int)  # Tracks the count of each color
            ball_map = {}  # Maps each ball to its current color

            # Process each query (ball, color) pair
            for ball, color in queries:
                  # If the ball is already present, remove its previous color mapping
                  if ball in ball_map:
                        prev_color = ball_map[ball]  # Get the previous color of the ball
                        color_map[prev_color] -= 1  # Decrease count of previous color
                        
                        # If the previous color count reaches zero, remove it from the map
                        if color_map[prev_color] == 0:
                              del color_map[prev_color]

                  # Update the ball's color to the new one
                  ball_map[ball] = color

                  # Increase the count of the new color
                  color_map[color] += 1  

                  # Append the number of unique colors to the result list
                  result.append(len(color_map))

            return result  # Return the list of unique color counts after each query
