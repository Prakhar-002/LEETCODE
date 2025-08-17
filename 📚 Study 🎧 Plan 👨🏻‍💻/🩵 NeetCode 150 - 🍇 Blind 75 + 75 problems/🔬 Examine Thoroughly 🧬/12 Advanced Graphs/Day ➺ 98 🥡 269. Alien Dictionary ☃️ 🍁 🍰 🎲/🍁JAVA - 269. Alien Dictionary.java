//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 269

//? ⌚ Time complexity ➺ O(N + V + E)

//? 🧺 Space complexity ➺ O(V + E)

import java.util.*;

public class Solution {
      // Class members to be accessible by the DFS helper method.
      private Map<Character, Set<Character>> adj; // Adjacency list for the graph.
      private Map<Character, Boolean> visited; // Tracks the state of nodes for cycle detection in DFS.
      private List<Character> result; // Stores the topologically sorted characters in reverse.

      public String foreignDictionary(String[] words) {
            // ----------------------------------------------------------
            // Step 1: Build Adjacency List (Graph Construction)
            // ----------------------------------------------------------
            adj = new HashMap<>();
            // Initialize the graph with all unique characters present in the words.
            for (String word : words) {
                  for (char c : word.toCharArray()) {
                        adj.putIfAbsent(c, new HashSet<>());
                  }
            }

            // Compare adjacent words to find ordering rules (edges).
            for (int i = 0; i < words.length - 1; i++) {
                  String w1 = words[i], w2 = words[i + 1];
                  int minLen = Math.min(w1.length(), w2.length());

                  // Edge case: If a longer word is a prefix of a shorter one (e.g., "abc", "ab"),
                  // the dictionary is invalid.
                  if (w1.length() > w2.length() &&
                              w1.substring(0, minLen).equals(w2.substring(0, minLen))) {
                        return "";
                  }

                  // Find the first differing character to establish an ordering rule.
                  for (int j = 0; j < minLen; j++) {
                        if (w1.charAt(j) != w2.charAt(j)) {
                              // The character from w1 must come before the character from w2.
                              // Add a directed edge from w1[j] to w2[j].
                              adj.get(w1.charAt(j)).add(w2.charAt(j));
                              // Once the first difference is found, we can stop comparing these two words.
                              break;
                        }
                  }
            }

            // ----------------------------------------------------------
            // Step 3: Execute DFS and Format Result
            // ----------------------------------------------------------
            visited = new HashMap<>(); // Initialize the visited map for DFS.
            result = new ArrayList<>(); // Stores the post-order traversal result.

            // Iterate through all characters to ensure all disconnected components are
            // visited.
            // Note: The order of iteration from `keySet()` can vary. For a stable result
            // if multiple valid answers exist, sorting the keys might be needed.
            for (char c : adj.keySet()) {
                  if (dfs(c)) { // If DFS detects a cycle, the ordering is invalid.
                        return "";
                  }
            }

            // The `result` list is in reverse topological order (post-order). Reverse it.
            Collections.reverse(result);
            // Build the final string from the sorted list of characters.
            StringBuilder sb = new StringBuilder();
            for (char c : result) {
                  sb.append(c);
            }
            return sb.toString();
      }

      // ----------------------------------------------------------
      // Step 2: Topological Sort using DFS (Helper Method)
      // ----------------------------------------------------------
      private boolean dfs(char ch) {
            // `visited` map tracks node states for cycle detection:
            // - Not in `visited`: Not visited yet.
            // - visited.get(ch) == true: Currently in the recursion stack (visiting).
            // - visited.get(ch) == false: Already visited and processed.
            if (visited.containsKey(ch)) {
                  return visited.get(ch); // Returns true if it's a cycle, false if already processed.
            }

            // Mark the current node as being in the recursion stack.
            visited.put(ch, true);

            // Recursively call DFS on all neighboring characters.
            // Use `adj.getOrDefault` in case a character has no outgoing edges.
            for (char next : adj.getOrDefault(ch, new HashSet<>())) {
                  if (dfs(next)) { // If a cycle is detected downstream, propagate it up.
                        return true;
                  }
            }

            // Mark the node as processed (removed from recursion stack).
            visited.put(ch, false);
            // Add the character to the result list (post-order traversal).
            result.add(ch);
            return false; // No cycle found from this path.
      }
}
