//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 118

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n * n)

class Solution {
      public List<List<Integer>> generate(int numRows) {
            // Result list to store all rows
            List<List<Integer>> res = new ArrayList<>();

            // Add the first row
            res.add(new ArrayList<>(Arrays.asList(1)));

            // Generate rows from 2 to numRows
            for (int i = 1; i < numRows; i++) {
                  List<Integer> prev = res.get(i - 1);
                  List<Integer> row = new ArrayList<>();

                  // First element of each row is always 1
                  row.add(1);

                  // Compute middle elements using previous row
                  for (int j = 1; j < prev.size(); j++) {
                        row.add(prev.get(j - 1) + prev.get(j));
                  }

                  // Last element is also always 1
                  row.add(1);

                  // Add current row to result
                  res.add(row);
            }

            return res;
      }
}
