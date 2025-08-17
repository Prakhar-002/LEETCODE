//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 269

//? ⌚ Time complexity ➺ O(N + V + E)

//? 🧺 Space complexity ➺ O(V + E)

#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm> // for min and reverse
using namespace std;

class Solution {
public:
      // Class members to be accessible by the DFS helper method.
      unordered_map<char, unordered_set<char>> adj; // Adjacency list for the graph.
      unordered_map<char, bool> visited;                 // Tracks node state for cycle detection.
      string result;                                     // Stores the topologically sorted characters in reverse.

      /**
       * Finds the lexicographical order of characters based on a sorted list of words.
       * @param words A list of words sorted according to the alien dictionary's rules.
       * @return A string representing the character order, or "" if the order is invalid.
       */
      string foreignDictionary(vector<string>& words) {
            // ----------------------------------------------------------
            // Step 1: Build Adjacency List (Graph Construction)
            // ----------------------------------------------------------
            // Initialize the graph with all unique characters present in the words.
            // Accessing `adj[ch]` creates a default entry if it doesn't exist.
            for (const auto& word : words) {
                  for (char ch : word) {
                        adj[ch];
                  }
            }

            // Compare adjacent words to find ordering rules (edges).
            for (size_t i = 0; i < words.size() - 1; ++i) {
                  const string& w1 = words[i], & w2 = words[i + 1];
                  size_t minLen = min(w1.length(), w2.length());

                  // Edge case: If a longer word is a prefix of a shorter one (e.g., "abc", "ab"),
                  // the dictionary is invalid.
                  if (w1.length() > w2.length() &&
                        w1.substr(0, minLen) == w2.substr(0, minLen)) {
                        return "";
                  }

                  // Find the first differing character to establish an ordering rule.
                  for (size_t j = 0; j < minLen; ++j) {
                        if (w1[j] != w2[j]) {
                              // The character from w1 must come before the character from w2.
                              // Add a directed edge from w1[j] to w2[j].
                              adj[w1[j]].insert(w2[j]);
                              // Once the first difference is found, stop comparing these two words.
                              break;
                        }
                  }
            }

            // ----------------------------------------------------------
            // Step 3: Execute DFS and Format Result
            // ----------------------------------------------------------
            // Iterate through all characters to ensure all disconnected components are visited.
            // Using `const auto& pair` is an efficient way to iterate through a map.
            for (const auto& pair : adj) {
                  if (dfs(pair.first)) { // If DFS detects a cycle, the ordering is invalid.
                        return "";
                  }
            }

            // The `result` string is built in reverse topological order (post-order). Reverse it.
            reverse(result.begin(), result.end());
            return result;
      }

      // ----------------------------------------------------------
      // Step 2: Topological Sort using DFS (Helper Method)
      // ----------------------------------------------------------
      bool dfs(char ch) {
            // `visited` map tracks node states for cycle detection:
            // - Not in `visited`: Not visited yet.
            // - visited[ch] == true: Currently in the recursion stack (visiting).
            // - visited[ch] == false: Already visited and processed.
            if (visited.find(ch) != visited.end()) {
                  return visited[ch]; // Returns true if it's a cycle, false if already processed.
            }

            // Mark the current node as being in the recursion stack.
            visited[ch] = true;

            // Recursively call DFS on all neighboring characters.
            for (char next : adj[ch]) {
                  if (dfs(next)) { // If a cycle is detected downstream, propagate it up.
                        return true;
                  }
            }

            // Mark the node as processed (removed from recursion stack).
            visited[ch] = false;
            // Add the character to the result string (post-order traversal).
            result.push_back(ch);
            return false; // No cycle found from this path.
      }
};
