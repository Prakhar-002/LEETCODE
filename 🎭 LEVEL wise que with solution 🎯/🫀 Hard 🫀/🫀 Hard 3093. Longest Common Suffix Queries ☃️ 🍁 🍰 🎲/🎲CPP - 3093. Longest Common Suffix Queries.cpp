//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3093

// ? ⌚ Time complexity ➺ O(C + Q) 👉🏻  C = Σ len(wordsContainer[i])

// ? 🧺 Space complexity ➺ O(c) 👉🏻     Q = Σ len(wordsQuery[i])

#include <vector>
#include <string>
using namespace std;

class Solution {
public:

      // Each Trie node represents a suffix path.
      // Example:
      // "abcd" is inserted as d -> c -> b -> a
      struct TrieNode {

            // Index of the shortest container word
            // passing through this suffix node.
            int idx = -1;

            // Children for letters a-z.
            TrieNode* children[26];

            TrieNode() {
                  fill(children, children + 26, nullptr);
            }
      };

      vector<int> stringIndices(vector<string>& wordsContainer, vector<string>& wordsQuery) {

            // Root of the suffix trie
            TrieNode* root = new TrieNode();

            // ==================================================
            // Build the Suffix Trie
            // ==================================================
            for (int i = 0; i < wordsContainer.size(); i++) {

                  string& word = wordsContainer[i];

                  // Root stores the globally shortest word.
                  // This acts as the fallback answer when
                  // no suffix match exists.
                  if (
                        root->idx == -1 ||
                        word.size() < wordsContainer[root->idx].size()
                  ) {
                        root->idx = i;
                  }

                  TrieNode* node = root;

                  // Insert the word from right to left.
                  // Example:
                  // "abcd" -> d -> c -> b -> a
                  //
                  // Reversing the word converts suffix matching
                  // into a normal Trie traversal.
                  for (int j = word.size() - 1; j >= 0; j--) {

                        int idx = word[j] - 'a';

                        // Create child node if this suffix
                        // path does not exist.
                        if (!node->children[idx]) {
                              node->children[idx] = new TrieNode();
                        }

                        // Move to the next suffix node
                        node = node->children[idx];

                        // Store the index of the shortest word
                        // that reaches this suffix.
                        //
                        // Example:
                        // words = ["abcd", "bcd", "cd"]
                        //
                        // For suffix "cd", store index of "cd"
                        // because it is the shortest word
                        // sharing that suffix.
                        if (
                              node->idx == -1 ||
                              word.size() < wordsContainer[node->idx].size()
                        ) {
                              node->idx = i;
                        }
                  }
            }

            // ==================================================
            // Process Queries
            // ==================================================
            vector<int> ans(wordsQuery.size());

            for (int i = 0; i < wordsQuery.size(); i++) {

                  string& word = wordsQuery[i];

                  TrieNode* node = root;

                  // Default answer:
                  // globally shortest container word.
                  int best = root->idx;

                  // Traverse query from right to left
                  // to find the longest matching suffix.
                  for (int j = word.size() - 1; j >= 0; j--) {

                        int idx = word[j] - 'a';

                        // If suffix path does not exist,
                        // no longer suffix match is possible.
                        if (!node->children[idx]) {
                              break;
                        }

                        // Move deeper into the trie
                        node = node->children[idx];

                        // Since we matched one more character,
                        // we found a longer suffix match.
                        //
                        // This node already stores the index
                        // of the shortest word having this suffix.
                        best = node->idx;
                  }

                  ans[i] = best;
            }

            return ans;
      }
};