//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 2192

//? ⌚ Time complexity -> O(n^2) 👉 given

//? 🧺 Space complexity -> O(n) 👉 given 

#include<vector>
using namespace std;

class Solution {
      void dfs(vector<vector<int>> &graph, int i, int j, vector<vector<int>> &ancestors){
            // get tha list of ancestors at index j mean that will be ancestors of our index i
            for(auto & g : graph[j]){
                  // checking if empty or last elem is not same elem 
                  // means 0 is not the ancestor of 0
                  if(ancestors[g].empty() || ancestors[g].back() != i){
                        // push back into our array
                        ancestors[g].push_back(i);
                        // call for next element
                        dfs(graph, i, g, ancestors);
                  }
            }
      }

public:
      vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
            vector<vector<int>> ancestors(n);
            vector<vector<int>> graph(n);

            // edgeList = [[0,3],[0,4],[1,3],[2,4],[2,7],[3,5],[3,6],[3,7],[4,6]]

            for(auto & edge : edges){
                  graph[edge[0]].push_back(edge[1]);
            }

            //* graph = [[3, 4], [3], [4, 7], [5, 6, 7], [6]]

            // We call our function for every index o to N
            // call with our graph and index and index of list of ancestor
            // and our ans ancestors
            for(int i = 0; i < n; i++){
                  dfs(graph, i, i, ancestors);
            }

            return ancestors;
      }
};

// -----------------------------------------------------------------------

class Solution {

private:
      void dfs(int elem, vector<vector<int>> &vertex, vector<bool> &isVisited){
            isVisited[elem] = true;
            for (int i = 0; i < vertex[elem].size(); i++){
                  if (isVisited[vertex[elem][i]]){
                        continue;
                  }
                  dfs(vertex[elem][i], vertex, isVisited);
            }
      }

public:
      vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
            vector<vector<int>> ancestors(n);
            vector<vector<int>> vertex(n);

            for (int i = 0; i < edges.size(); i++){
                  vertex[edges[i][0]].push_back(edges[i][1]);
            }

            for (int i = 0; i < n; i++){
                  vector<bool> isVisited(n, false);
                  dfs(i, vertex, isVisited);
                  for (int j = 0; j < n; j++){
                        if (i == j){
                              continue;
                        }
                        if (isVisited[j]){
                              ancestors[j].push_back(i);
                        }
                  }
            }
            return ancestors;
      }
};
