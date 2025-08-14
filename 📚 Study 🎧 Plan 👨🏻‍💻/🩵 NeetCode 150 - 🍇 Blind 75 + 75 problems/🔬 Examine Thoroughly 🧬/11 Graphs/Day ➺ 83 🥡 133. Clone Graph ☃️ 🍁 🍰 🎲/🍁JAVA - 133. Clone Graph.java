//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 133

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Edge + Vertex

//? 🧺 Space complexity ➺ O(n)

/*
// Definition for a Node.
class Node {
      public int val;
      public List<Node> neighbors;
      public Node() {
            neighbors = new ArrayList<Node>();
      }
      public Node(int _val) {
            val = _val;
            neighbors = new ArrayList<Node>();
      }
      public Node(int _val, ArrayList<Node> _neighbors) {
            val = _val;
            neighbors = _neighbors;
      }
}
*/

class Solution {
      public Node cloneGraph(Node node) {
            // Map to store mapping: original node → cloned node
            Map<Node, Node> oldToNew = new HashMap<>();

            // ----------------------------------------------------------
            // DFS helper to clone nodes and their neighbors recursively
            // ----------------------------------------------------------
            return (node != null) ? clone(node, oldToNew) : null;
      }

      private Node clone(Node node, Map<Node, Node> oldToNew) {
            // If node is already cloned → return it
            if (oldToNew.containsKey(node)) {
                  return oldToNew.get(node);
            }

            // Create a copy of the current node (no neighbors yet)
            Node copy = new Node(node.val);
            oldToNew.put(node, copy);

            // Recursively clone all neighbors
            for (Node nei : node.neighbors) {
                  copy.neighbors.add(clone(nei, oldToNew));
            }

            return copy; 
      }
}
