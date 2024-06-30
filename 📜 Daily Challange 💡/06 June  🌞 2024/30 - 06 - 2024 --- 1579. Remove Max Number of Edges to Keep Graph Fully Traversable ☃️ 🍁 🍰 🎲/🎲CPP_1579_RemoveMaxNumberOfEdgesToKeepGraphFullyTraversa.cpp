//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1579

//? ⌚ Time complexity -> O(n) 👉 given

//? 🧺 Space complexity -> O(1)

#include <vector>
#include <algorithm>
using namespace std;

class UnionFind{
private:
      int n;
      vector<int> parent;
      vector<int> rank;

public:
      UnionFind(int size) : n(size), parent(size + 1), rank(size + 1, 1){
            for (int i = 0; i <= size; ++i){
                  parent[i] = i;
            }
      }

      int find(int p){
            while (p != parent[p]){
                  // we'll update our parent of array value tp parent of parent of p
                  parent[p] = parent[parent[p]];
                  // than check for new parent
                  p = parent[p];
            }
            return p;
      }

      int union_(int firstNode, int secNode){
            // find parent of first node
            int firstNodeParent = find(firstNode);
            // find parent of second node
            int secNodeParent = find(secNode);

            // if they both have same parent so making an ege will give us a cycle
            if (firstNodeParent == secNodeParent){
                  // so in that case we return false and this will be our ans too
                  return 0;
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

            // once we got true mean we can union then we'll dec n by 1
            --n;

            return 1;
      }

      bool isConnected(){
            return n <= 1;
      }
};

class Solution{
public:
      int maxNumEdgesToRemove(int n, vector<vector<int>> &edges){
            // we'll build 2 union find separately
            // for alice and for bob
            UnionFind alice(n), bob(n);
            // num of edges we gonna keep
            int count = 0;

            for (const auto &edge : edges){
                  int type = edge[0];
                  int src = edge[1];
                  int dest = edge[2];

                  // if type is 3 means they both can travel 
                  if (type == 3){
                        count += (alice.union_(src, dest) | bob.union_(src, dest));
                  }
            }

            for (const auto &edge : edges){
                  int type = edge[0];
                  int src = edge[1];
                  int dest = edge[2];

                  //now add individually add for specific type 
                  if (type == 1){
                        count += alice.union_(src, dest);
                  }
                  else if (type == 2){
                        count += bob.union_(src, dest);
                  }
            }

            // if both of them could traverse the whole graph 
            // we'll return total nodes - number of nodes we used to build both UF model 
            if (bob.isConnected() && alice.isConnected()){
                  return edges.size() - count;
            }

            // if either of them not able to traverse the whole graph simply return -1
            return -1;
      }
};
