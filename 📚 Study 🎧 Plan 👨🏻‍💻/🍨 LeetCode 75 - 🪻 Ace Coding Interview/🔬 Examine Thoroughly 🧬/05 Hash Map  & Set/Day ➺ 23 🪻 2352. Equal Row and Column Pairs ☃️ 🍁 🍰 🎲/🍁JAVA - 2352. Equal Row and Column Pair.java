//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2352

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = No. of rows

//? 🧺 Space complexity ➺ O(n * m)  -> m = No. of columns

import java.util.*;

public class Solution {
      public int equalPairs(int[][] grid) {
            // Step 1: Convert each row into a tuple (using List)
            List<List<Integer>> rowList = new ArrayList<>();
            for (int[] row : grid) {
                  List<Integer> rowTuple = new ArrayList<>();

                  for (int num : row) {
                        rowTuple.add(num);
                  }

                  rowList.add(rowTuple);
            }

            // Step 2: Convert each column into a tuple (using List)
            List<List<Integer>> colList = new ArrayList<>();
            for (int i = 0; i < grid[0].length; i++) {
                  List<Integer> colTuple = new ArrayList<>();

                  for (int j = 0; j < grid.length; j++) {
                        colTuple.add(grid[j][i]);
                  }

                  colList.add(colTuple);
            }

            // Step 3: Count the frequency of each row and column using HashMap
            Map<List<Integer>, Integer> rowCount = new HashMap<>();

            for (List<Integer> row : rowList) {
                  rowCount.put(row, rowCount.getOrDefault(row, 0) + 1);
            }

            Map<List<Integer>, Integer> colCount = new HashMap<>();

            for (List<Integer> col : colList) {
                  colCount.put(col, colCount.getOrDefault(col, 0) + 1);
            }

            // Step 4: Calculate the number of equal pairs
            int result = 0;
            for (Map.Entry<List<Integer>, Integer> entry : rowCount.entrySet()) {

                  List<Integer> row = entry.getKey();
                  int rowFrequency = entry.getValue();

                  if (colCount.containsKey(row)) {
                        result += rowFrequency * colCount.get(row); // Multiply counts of matching rows and columns
                  }
            }

            return result;
      }
}
