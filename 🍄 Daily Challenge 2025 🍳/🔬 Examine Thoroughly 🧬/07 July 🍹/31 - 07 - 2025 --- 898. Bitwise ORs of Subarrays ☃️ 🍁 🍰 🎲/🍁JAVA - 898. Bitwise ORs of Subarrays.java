//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 898

//? ⌚ Time complexity ➺ O(N log W) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(N log W)

class Solution {
      public int subarrayBitwiseORs(int[] A) {
            // Set to store all unique OR results
            Set<Integer> ans = new HashSet<>();

            // Set to store OR results of subarrays ending at current index
            Set<Integer> cur = new HashSet<>();
            cur.add(0);

            // Iterate through each number in the array
            for (int x : A) {
                  // Temporary set to store new OR results for current element
                  Set<Integer> next = new HashSet<>();

                  // Compute OR between current number and previous OR results
                  for (int y : cur) {
                        next.add(x | y);
                  }

                  // Also include the current number as a subarray on its own
                  next.add(x);

                  // Add all results to the main answer set
                  ans.addAll(next);

                  // Move to next iteration
                  cur = next;
            }

            // Return count of unique OR results
            return ans.size();
      }
}
