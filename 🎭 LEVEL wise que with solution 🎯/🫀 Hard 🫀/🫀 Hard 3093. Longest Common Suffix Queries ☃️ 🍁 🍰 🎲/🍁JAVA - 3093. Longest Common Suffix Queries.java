// ! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3093

// ? ⌚ Time complexity ➺ O(C + Q) 👉🏻 C = Σ len(wordsContainer[i])

// ? 🧺 Space complexity ➺ O(c) 👉🏻 Q = Σ len(wordsQuery[i])

class Solution {

      // Each Trie node represents a suffix path.
      // Example:
      // "abcd" is inserted as d -> c -> b -> a
      static class TrieNode {

            // Index of the shortest container word
            // that passes through this node (suffix).
            int idx = -1;

            // Children for letters a-z.
            TrieNode[] children = new TrieNode[26];
      }

      public int[] stringIndices(String[] wordsContainer, String[] wordsQuery) {

            // Root of the suffix trie.
            TrieNode root = new TrieNode();

            // ==================================================
            // Build the Suffix Trie
            // ==================================================
            for (int i = 0; i < wordsContainer.length; i++) {

                  String word = wordsContainer[i];

                  // Root stores the globally shortest word.
                  // This acts as a fallback answer when
                  // no suffix match exists for a query.
                  if (root.idx == -1 ||
                              word.length() < wordsContainer[root.idx].length()) {
                        root.idx = i;
                  }

                  TrieNode node = root;

                  // Insert the word from right to left.
                  // Example:
                  // "abcd" -> d -> c -> b -> a

                  // Reversing words converts suffix matching
                  // into a normal Trie traversal.
                  for (int j = word.length() - 1; j >= 0; j--) {

                        int idx = word.charAt(j) - 'a';

                        // Create a new node if this suffix
                        // character path does not exist.
                        if (node.children[idx] == null) {
                              node.children[idx] = new TrieNode();
                        }

                        // Move to the next suffix node.
                        node = node.children[idx];

                        // Store the index of the shortest word
                        // that reaches this suffix.

                        // Why?
                        // If multiple words share the same suffix,
                        // the problem asks us to return the shortest
                        // matching word.
                        if (node.idx == -1 ||
                                    word.length() < wordsContainer[node.idx].length()) {
                              node.idx = i;
                        }
                  }
            }

            // Array to store answers for all queries.
            int[] ans = new int[wordsQuery.length];

            // ==================================================
            // Process Queries
            // ==================================================
            for (int i = 0; i < wordsQuery.length; i++) {

                  String word = wordsQuery[i];

                  TrieNode node = root;

                  // Default answer:
                  // If no suffix matches, return the globally
                  // shortest container word.
                  int best = root.idx;

                  // Traverse the query from right to left.
                  // We are trying to match the longest suffix.
                  for (int j = word.length() - 1; j >= 0; j--) {

                        int idx = word.charAt(j) - 'a';

                        // If the suffix path does not exist,
                        // we cannot match any longer suffix.
                        if (node.children[idx] == null) {
                              break;
                        }

                        // Move deeper into the trie.
                        node = node.children[idx];

                        // Update answer.
                        //
                        // Since we are moving deeper,
                        // every step means we matched
                        // a longer suffix.
                        //
                        // The node already stores the index
                        // of the shortest container word
                        // having this suffix.
                        best = node.idx;
                  }

                  // Store final answer for this query.
                  ans[i] = best;
            }

            return ans;
      }
}