//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2322

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      // Function to calculate score difference as defined in the problem
      int calc(int part1, int part2, int part3) {
            return max(part1, max(part2, part3)) - min(part1, min(part2, part3));
      }

      int minimumScore(vector<int> &nums, vector<vector<int>> &edges) {
            int n = nums.size();  // Total number of nodes in the tree

            // Building adjacency list for the graph
            vector<vector<int>> e(n);
            for (auto &v : edges) {
                  e[v[0]].push_back(v[1]);  // Add edge from v[0] to v[1]
                  e[v[1]].push_back(v[0]);  // Add edge from v[1] to v[0]
            }

            int sum = 0;  // This will store the total XOR of all node values
            for (int x : nums) {
                  sum ^= x;  // Compute XOR of all values
            }

            int res = INT_MAX;  // Initialize result to maximum possible value

            // Second DFS to calculate XOR and evaluate cut at different positions
            function<int(int, int, int, int)> dfs2 = [&](int x, int f, int oth, int anc) {
                  int son = nums[x];  // Start XOR with current node value
                  for (auto &y : e[x]) {
                        if (y == f) {
                              continue;  // Skip parent node
                        }
                        son ^= dfs2(y, x, oth, anc);  // Recurse and collect XOR values
                  }

                  if (f == anc) {
                        return son;  // Skip cut at the same parent
                  }

                  // Calculate and update minimum score
                  res = min(res, calc(oth, son, sum ^ oth ^ son));
                  return son;  // Return XOR of subtree
            };

            // First DFS to simulate first cut
            function<int(int, int)> dfs = [&](int x, int f) {
                  int son = nums[x];  // Start XOR with current node
                  for (auto &y : e[x]) {
                        if (y == f) {
                              continue;  // Skip parent node
                        }
                        son ^= dfs(y, x);  // Recurse and collect XOR
                  }

                  // Try second cut for each child
                  for (auto &y : e[x]) {
                        if (y == f) {
                              dfs2(y, x, son, x);  // Evaluate second cut at child
                        }
                  }

                  return son;  // Return XOR of subtree rooted at x
            };

            dfs(0, -1);  // Start DFS from root node with no parent
            return res;  // Return the minimum score found
      }
};
