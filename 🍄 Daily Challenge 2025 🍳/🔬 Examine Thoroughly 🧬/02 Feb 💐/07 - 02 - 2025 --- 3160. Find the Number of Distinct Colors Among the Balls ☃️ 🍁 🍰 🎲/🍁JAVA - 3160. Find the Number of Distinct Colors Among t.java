//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3160

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(queries)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int[] queryResults(int limit, int[][] queries) {
            int[] result = new int[queries.length]; // Stores the number of unique colors after each query

            Map<Integer, Integer> colorMap = new HashMap<>(); // Tracks the count of each color
            Map<Integer, Integer> ballMap = new HashMap<>(); // Maps each ball to its current color

            // pointer for result variable
            int i = 0;

            // Process each query (ball, color) pair
            for (int[] query : queries) {
                  int ball = query[0];
                  int color = query[1];

                  // If the ball is already present, remove its previous color mapping
                  if (ballMap.containsKey(ball)) {
                        int prevColor = ballMap.get(ball); // Get the previous color of the ball
                        colorMap.put(prevColor, colorMap.get(prevColor) - 1); // Decrease count of previous color

                        // If the previous color count reaches zero, remove it from the map
                        if (colorMap.get(prevColor) == 0) {
                              colorMap.remove(prevColor);
                        }
                  }

                  // Update the ball's color to the new one
                  ballMap.put(ball, color);

                  // Increase the count of the new color
                  colorMap.put(color, colorMap.getOrDefault(color, 0) + 1);

                  // Append the number of unique colors to the result list
                  result[i++] = colorMap.size();
            }

            // return the result 
            return result;
      }
}
