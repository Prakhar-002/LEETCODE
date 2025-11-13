//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 119

//? ⌚ Time complexity ➺ O(rowIdx * 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n) 

class Solution {
      public List<Integer> getRow(int rowIndex) {
            // Start with the first row
            List<Integer> res = new ArrayList<>();
            res.add(1);

            // Generate rows up to rowIndex
            for (int i = 0; i < rowIndex; i++) {
                  // Create a temporary list with size+1, filled with 0s
                  List<Integer> nextRow = new ArrayList<>(Collections.nCopies(res.size() + 1, 0));

                  // Fill new row based on current row values
                  for (int j = 0; j < res.size(); j++) {
                        nextRow.set(j, nextRow.get(j) + res.get(j));
                        nextRow.set(j + 1, nextRow.get(j + 1) + res.get(j));
                  }

                  // Move to next row
                  res = nextRow;
            }

            return res;
      }
}