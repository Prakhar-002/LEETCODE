//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1727

//? ⌚ Time complexity ➺ O(n * m) 

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int largestSubmatrix(int[][] matrix) {

            // Get dimensions
            int ROWS = matrix.length;
            int COLS = matrix[0].length;

            int maxArea = 0;

            // Stores (height, column)
            List<int[]> prevHeights = new ArrayList<>();

            // Traverse each row
            for (int row = 0; row < ROWS; row++) {

                  List<int[]> heights = new ArrayList<>();
                  Set<Integer> seen = new HashSet<>();

                  // STEP 1: Extend previous heights
                  for (int[] pair : prevHeights) {
                        int height = pair[0];
                        int col = pair[1];

                        // If current cell is 1 → extend height
                        if (matrix[row][col] == 1) {
                              heights.add(new int[] { height + 1, col });
                              seen.add(col);
                        }
                  }

                  // STEP 2: Start new heights
                  for (int col = 0; col < COLS; col++) {
                        if (!seen.contains(col) && matrix[row][col] == 1) {
                              heights.add(new int[] { 1, col });
                        }
                  }

                  // STEP 3: Sort descending by height
                  heights.sort((a, b) -> b[0] - a[0]);

                  // STEP 4: Compute max area
                  for (int i = 0; i < heights.size(); i++) {
                        int width = i + 1;
                        int height = heights.get(i)[0];

                        maxArea = Math.max(maxArea, width * height);
                  }

                  // STEP 5: Update previous heights
                  prevHeights = heights;
            }

            return maxArea;
      }
}