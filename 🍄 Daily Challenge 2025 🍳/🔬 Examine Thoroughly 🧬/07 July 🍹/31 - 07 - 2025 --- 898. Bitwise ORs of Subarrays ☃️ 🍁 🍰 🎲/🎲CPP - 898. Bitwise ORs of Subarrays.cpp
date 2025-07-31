//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 898

//? ⌚ Time complexity ➺ O(N log W) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(N log W)

class Solution {
public:
      int subarrayBitwiseORs(vector<int>& A) {
            // Set to hold all unique OR values
            unordered_set<int> ans;

            // Set to hold current ORs ending at current index
            unordered_set<int> cur;
            cur.insert(0);

            // Loop through all elements in array
            for (int x : A) {
                  unordered_set<int> next;

                  // Compute new OR values with current number
                  for (int y : cur) {
                        next.insert(x | y);
                  }

                  // Include the number itself
                  next.insert(x);

                  // Add all new results to final answer set
                  ans.insert(next.begin(), next.end());

                  // Move to next iteration
                  cur = next;
            }

            // Return total number of unique OR values
            return ans.size();
      }
};
