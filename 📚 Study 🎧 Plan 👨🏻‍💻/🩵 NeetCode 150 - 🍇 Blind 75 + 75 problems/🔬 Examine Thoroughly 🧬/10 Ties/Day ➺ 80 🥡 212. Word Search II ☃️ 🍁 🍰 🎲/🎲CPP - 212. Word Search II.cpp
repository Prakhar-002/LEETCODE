//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 212

//? ⌚ Time complexity ➺ O(m * n * 4 * 3 ^ (t - 1) + s) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(s)

#include <bits/stdc++.h>
using namespace std; 

class TrieNode {
public:
      // Map: char → child TrieNode
      unordered_map<char, TrieNode*> children;
      // Indicates the end of a valid word
      bool endOfWord = false;
      // Stores the complete word here
      string word = "";

      void addWord(const string& word) {
            TrieNode* cur = this;
            for (char ch : word) {
                  if (!cur->children.count(ch)) {
                        cur->children[ch] = new TrieNode();
                  }
                  cur = cur->children[ch];
            }
            cur->endOfWord = true;
            cur->word = word;
      }
};

class Solution {
public:
      vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
            TrieNode* root = new TrieNode();

            // Step 1: Build trie
            for (string& w : words) {
                  root->addWord(w);
            }

            int ROWS = board.size(), COLS = board[0].size();
            vector<string> res;
            vector<vector<bool>> visit(ROWS, vector<bool>(COLS, false));

            // Step 3: Start DFS from each cell
            for (int r = 0; r < ROWS; r++) {
                  for (int c = 0; c < COLS; c++) {
                        dfs(r, c, root, board, visit, res);
                  }
            }
            return res;
      }

private:
      void dfs(int r, int c, TrieNode* node, vector<vector<char>>& board,
                  vector<vector<bool>>& visit, vector<string>& res) {
            // Boundary / visited / char mismatch
            if (r < 0 || c < 0 || r >= board.size() || c >= board[0].size() ||
                  visit[r][c] || !node->children.count(board[r][c])) {
                  return;
            }

            visit[r][c] = true;
            node = node->children[board[r][c]];

            if (node->endOfWord) {
                  res.push_back(node->word);
                  node->endOfWord = false;
            }

            dfs(r + 1, c, node, board, visit, res);
            dfs(r - 1, c, node, board, visit, res);
            dfs(r, c + 1, node, board, visit, res);
            dfs(r, c - 1, node, board, visit, res);

            visit[r][c] = false;
      }
};
