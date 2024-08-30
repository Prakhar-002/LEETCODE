//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 947

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = No. of stones

//? 🧺 Space complexity ➺ O(n) -> keep track of visited stones

// https://github.com/Prakhar-002/LEETCODE

// ⌚ Time complexity -> O(n) ->  n = No. of stones

//  Space complexity -> O(n) -> keep track of visited stones

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
      // A recursive depth-first search (DFS) method that's used to mark all stones 
      // in the same row or column as visited
      void dfs(int &n, int idx, vector<bool> &visited,
                  vector<vector<int>> &stones) {
            visited[idx] = true;
            for (int i = 0; i < n; i++) {
                  if (!visited[i]) {
                        if (stones[idx][0] == stones[i][0])
                              dfs(n, i, visited, stones);

                        if (stones[idx][1] == stones[i][1])
                              dfs(n, i, visited, stones);
                  }
            }
      }

      // main method that calculates the maximum number of stones that can be removed by utilizing the `dfs` function
      int removeStones(vector<vector<int>> &stones) {
            int n = stones.size();
            int group = 0;

            vector<bool> visited(n);
            for (int i = 0; i < n; i++) {
                  if (!visited[i]) {
                        dfs(n, i, visited, stones);
                        group += 1;
                  }
            }
            return n - group;
      }
};