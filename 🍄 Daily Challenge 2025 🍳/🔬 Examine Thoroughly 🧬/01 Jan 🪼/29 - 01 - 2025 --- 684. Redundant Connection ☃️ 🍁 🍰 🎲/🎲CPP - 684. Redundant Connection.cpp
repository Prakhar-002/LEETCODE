//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 684

//* UnionFun find algorithm

//? ⌚ Time complexity -> O(n) 👉 length of edges array

//? 🧺 Space complexity -> O(n) 👉 using 2 arr of length equal to len of edges

#include <vector>
using namespace std;

class Solution{

private:
      // finding the parent of our node
      int find(int n, std::vector<int> &parent){
            // find it in our parent array
            int p = parent[n];

            while (p != parent[p]){
                  // we'll update our parent of array value to parent of parent of p
                  parent[p] = parent[parent[p]];
                  // then check for new parent
                  p = parent[p];
            }
            return p;
      }

      bool union_nodes(int firstNode, int secNode, std::vector<int> &parent, std::vector<int> &rank){
            // find parent of first node
            int firstNodeParent = find(firstNode, parent);
            // find parent of second node
            int secNodeParent = find(secNode, parent);

            // if they both have same parent so making an edge will give us a cycle
            if (firstNodeParent == secNodeParent){
                  // so in that case we return false and this will be our ans too
                  return false;
            }

            // if rank of first parent is greater than other
            if (rank[firstNodeParent] > rank[secNodeParent]){
                  // then our parent node will be first one
                  // and we'll update the parent of sec node to first node parent
                  parent[secNodeParent] = firstNodeParent;
                  // and node then rank of ultimate parent of first node...
                  // ...will be inc by rank of ultimate parent of second node
                  rank[firstNodeParent] += rank[secNodeParent];
            }
            else{
                  // vice-versa
                  parent[firstNodeParent] = secNodeParent;
                  rank[secNodeParent] += rank[firstNodeParent];
            }

            return true;
      }

public:
      vector<int> findRedundantConnection(vector<vector<int>> &edges){
            // parent array will store ultimate parent of each node
            vector<int> parent(edges.size() + 1);
            for (int i = 0; i < parent.size(); i++){
                  parent[i] = i;
            }
            // rank array will give the info about node which one of them will be parent
            // node among all
            vector<int> rank(edges.size() + 1, 1);

            for (const auto &edge : edges){
                  int firstNode = edge[0];
                  int secNode = edge[1];
                  // if we get false anywhere in whole edges array
                  if (!union_nodes(firstNode, secNode, parent, rank)){
                        // that will be our ans
                        return edge;
                  }
            }
            // just for missing return statement error
            return edges[0];
      }
};