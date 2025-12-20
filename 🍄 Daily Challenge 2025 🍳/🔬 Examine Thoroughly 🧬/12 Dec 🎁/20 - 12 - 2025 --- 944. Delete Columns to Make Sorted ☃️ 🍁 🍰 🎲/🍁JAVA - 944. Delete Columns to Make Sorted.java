//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 944

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(strs)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int minDeletionSize(String[] strs) {
            // If there are no strings or the first string is empty, return 0
            if (strs == null || strs.length == 0 || strs[0].length() == 0) {
                  return 0;
            }

            // Number of columns = length of each string (all strings have same length)
            int numCols = strs[0].length();
            // Counter for columns that are not sorted (need to be deleted)
            int deletionCount = 0;

            // Traverse each column j
            for (int j = 0; j < numCols; ++j) {
                  // Traverse each row from index 1 to end (compare with previous row)
                  for (int i = 1; i < strs.length; ++i) {
                        // If current char is less than the one above it, column is not sorted
                        if (strs[i].charAt(j) < strs[i - 1].charAt(j)) {
                              // This column must be deleted; increment counter and break inner loop
                              deletionCount++;
                              break;
                        }
                  }
            }

            // Return the total number of columns to delete
            return deletionCount;
      }
}
