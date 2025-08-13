//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 212

//? ⌚ Time complexity ➺ O(m * n * 4 * 3 ^ (t - 1) + s) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(s)

import java.util.*;

class TrieNode {
      // Map: char → child TrieNode
      Map<Character, TrieNode> children = new HashMap<>();
      // Indicates the end of a valid word
      boolean endOfWord = false;
      // Stores complete word at this node
      String word = "";

      void addWord(String word) {
            // Start from current node
            TrieNode cur = this;

            // Insert each character
            for (char ch : word.toCharArray()) {
                  cur.children.putIfAbsent(ch, new TrieNode());
                  cur = cur.children.get(ch);
            }

            // Mark as a full word
            cur.endOfWord = true;
            cur.word = word;
      }
}

class Solution {
      public List<String> findWords(char[][] board, String[] words) {
            TrieNode root = new TrieNode();

            // ----------------------------------------------------------
            // Step 1: Build Trie with all input words
            // ----------------------------------------------------------
            for (String word : words) {
                  root.addWord(word);
            }

            int ROWS = board.length, COLS = board[0].length;
            List<String> res = new ArrayList<>();
            boolean[][] visit = new boolean[ROWS][COLS];

            // ----------------------------------------------------------
            // Step 2: DFS search using Trie guidance
            // ----------------------------------------------------------
            Runnable dfs = new Runnable() {
                  public void run() {
                  } // placeholder
            }; // We’ll define dfs as a method below instead

            for (int r = 0; r < ROWS; r++) {
                  for (int c = 0; c < COLS; c++) {
                        dfs(r, c, root, board, visit, res);
                  }
            }
            return res;
      }

      private void dfs(int r, int c, TrieNode node, char[][] board,
                  boolean[][] visit, List<String> res) {
            // Out-of-bounds / already visited / character mismatch
            if (r < 0 || c < 0 || r >= board.length || c >= board[0].length ||
                        visit[r][c] || !node.children.containsKey(board[r][c])) {
                  return;
            }

            // Mark cell visited
            visit[r][c] = true;
            // Move into trie
            node = node.children.get(board[r][c]);

            // Found a complete word
            if (node.endOfWord) {
                  res.add(node.word);
                  node.endOfWord = false; // prevent duplicates
            }

            // Explore all four directions
            dfs(r + 1, c, node, board, visit, res);
            dfs(r - 1, c, node, board, visit, res);
            dfs(r, c + 1, node, board, visit, res);
            dfs(r, c - 1, node, board, visit, res);

            // Backtrack
            visit[r][c] = false;
      }
}
