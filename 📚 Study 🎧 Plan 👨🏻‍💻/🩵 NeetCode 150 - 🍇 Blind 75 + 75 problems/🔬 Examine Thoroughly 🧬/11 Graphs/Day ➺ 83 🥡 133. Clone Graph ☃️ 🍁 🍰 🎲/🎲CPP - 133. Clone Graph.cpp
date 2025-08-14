//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 133

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Edge + Vertex

//? 🧺 Space complexity ➺ O(n)

/*
// Definition for a Node.
class Node {
public:
      int val;
      vector<Node*> neighbors;
      Node() {
            val = 0;
            neighbors = vector<Node*>();
      }
      Node(int _val) {
            val = _val;
            neighbors = vector<Node*>();
      }
      Node(int _val, vector<Node*> _neighbors) {
            val = _val;
            neighbors = _neighbors;
      }
};
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      Node* cloneGraph(Node* node) {
            // Map to store mapping: original node → cloned node
            unordered_map<Node*, Node*> oldToNew;

            // Start cloning if node is not null
            return (node != nullptr) ? clone(node, oldToNew) : nullptr;
      }

private:
      // DFS helper to clone nodes and neighbors
      Node* clone(Node* node, unordered_map<Node*, Node*>& oldToNew) {
            // If node already cloned → return it
            if (oldToNew.count(node)) {
                  return oldToNew[node];
            }

            // Create a copy of the current node
            Node* copy = new Node(node->val);
            oldToNew[node] = copy;

            // Recursively clone all neighbors
            for (auto nei : node->neighbors) {
                  copy->neighbors.push_back(clone(nei, oldToNew));
            }

            return copy;
      }
};
