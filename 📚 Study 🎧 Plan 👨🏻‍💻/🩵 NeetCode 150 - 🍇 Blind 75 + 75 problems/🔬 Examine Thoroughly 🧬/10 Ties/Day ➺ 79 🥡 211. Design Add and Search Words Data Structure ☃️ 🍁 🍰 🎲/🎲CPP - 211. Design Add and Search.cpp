//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 211

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(t)

#include <bits/stdc++.h>
using namespace std;

class TrieNode {
public:
      // Dictionary mapping character → child TrieNode
      unordered_map<char, TrieNode*> children;
      // Boolean flag to indicate this node completes a valid word
      bool endOfWord = false;
};

class WordDictionary {
private:
      TrieNode* root;

public:
      WordDictionary() {
            // Root node of the Trie (empty state, no char)
            root = new TrieNode();
      }

      void addWord(string word) {
            // Start from the root node
            TrieNode* cur = root;

            // Traverse each character of the word
            for (char ch : word) {
                  // If the child node does not exist for ch, create it
                  if (!cur->children.count(ch)) {
                        cur->children[ch] = new TrieNode();
                  }
                  // Move down to the child node
                  cur = cur->children[ch];
            }

            // After inserting all characters, mark last node as end of a word
            cur->endOfWord = true;
      }

      bool search(string word) {
            // Start DFS from index 0 and root
            return dfs(0, root, word);
      }

private:
      bool dfs(int j, TrieNode* root, string& word) {
            TrieNode* cur = root;
            // Traverse characters starting from position j
            for (int i = j; i < (int)word.size(); i++) {
                  char ch = word[i];

                  // Case 1: Wildcard '.'
                  if (ch == '.') {
                        // Try all children recursively
                        for (auto& [_, child] : cur->children) {
                              if (dfs(i + 1, child, word)) {
                                    return true;
                              }
                        }
                        return false;
                  }
                  // Case 2: Normal character
                  else {
                        // Character not found → no match
                        if (!cur->children.count(ch)) {
                              return false;
                        }
                        // Move to next node
                        cur = cur->children[ch];
                  }
            }
            // Return true if current node marks end of valid word
            return cur->endOfWord;
      }
};
