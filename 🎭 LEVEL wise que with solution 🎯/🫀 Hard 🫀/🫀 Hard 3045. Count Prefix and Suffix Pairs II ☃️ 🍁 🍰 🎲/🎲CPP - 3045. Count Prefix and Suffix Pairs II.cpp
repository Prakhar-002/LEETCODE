//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3045

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = No. of words

//? 🧺 Space complexity ➺ O(n * m)    👉🏻  m = max len(one word)

#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

struct TrieNode {
      unordered_map<string, TrieNode*> children;
      int count = 0;
};

class Trie {
public:
      TrieNode* root;

      Trie() {
            root = new TrieNode();
      }

      int add(const string& w) {
            TrieNode* cur = root;

            for (size_t i = 0; i < w.length(); ++i) {
                  string key = string(1, w[i]) + "," + string(1, w[w.length() - i - 1]);
                  if (cur->children.find(key) == cur->children.end()) {
                        cur->children[key] = new TrieNode();
                  }
                  cur = cur->children[key];
                  cur->count++;
            }

            return cur->count - 1;
      }
};

class Solution {
public:
      long long countPrefixSuffixPairs(const vector<string>& words) { // Use long long for result
            long long res = 0; // Initialize result as long long
            Trie root;

            for (auto it = words.rbegin(); it != words.rend(); ++it) {
                  res += root.add(*it);
            }

            return res;
      }
};
