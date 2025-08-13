//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 208

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(t)

#include <bits/stdc++.h>
using namespace std;

class TrieNode {
public:
      // Map from character to child node
      unordered_map<char, TrieNode*> children;
      // Indicates if this node completes a valid word
      bool endOfWord = false;
};

class Trie {
private:
      TrieNode* root;

public:
      Trie() {
            // Initialize root node
            root = new TrieNode();
      }

      void insert(string word) {
            TrieNode* cur = root;

            // Traverse each character
            for (char ch : word) {
                  // If missing, create new TrieNode
                  if (!cur->children.count(ch)) {
                        cur->children[ch] = new TrieNode();
                  }
                  // Move to child
                  cur = cur->children[ch];
            }

            // Mark last node as an end of a word
            cur->endOfWord = true;
      }

      bool search(string word) {
            TrieNode* cur = root;

            // Traverse each character
            for (char ch : word) {
                  if (!cur->children.count(ch)) {
                        return false;
                  }
                  cur = cur->children[ch];
            }

            return cur->endOfWord;
      }

      bool startsWith(string prefix) {
            TrieNode* cur = root;

            // Traverse each character
            for (char ch : prefix) {
                  if (!cur->children.count(ch)) {
                        return false;
                  }
                  cur = cur->children[ch];
            }

            return true;
      }
};
