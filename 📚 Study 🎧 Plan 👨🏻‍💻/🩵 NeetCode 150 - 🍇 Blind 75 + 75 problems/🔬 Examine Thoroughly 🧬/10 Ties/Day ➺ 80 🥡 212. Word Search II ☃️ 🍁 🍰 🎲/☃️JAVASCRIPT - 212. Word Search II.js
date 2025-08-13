//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 212

//? ⌚ Time complexity ➺ O(m * n * 4 * 3 ^ (t - 1) + s) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(s)

class TrieNode {
      constructor() {
            this.children = {};
            this.isWord = false;
      }

      addWord(word) {
            let cur = this;
            for (const c of word) {
                  if (!(c in cur.children)) {
                        cur.children[c] = new TrieNode();
                  }
                  cur = cur.children[c];
            }
            cur.isWord = true;
      }
}

var findWords = function (board, words) {
      const root = new TrieNode();
      for (const word of words) {
            root.addWord(word);
      }

      const ROWS = board.length,
            COLS = board[0].length;
      const res = new Set(),
            visit = new Set();

      const dfs = (r, c, node, word) => {
            if (
                  r < 0 ||
                  c < 0 ||
                  r >= ROWS ||
                  c >= COLS ||
                  visit.has(`${r},${c}`) ||
                  !(board[r][c] in node.children)
            ) {
                  return;
            }

            visit.add(`${r},${c}`);
            node = node.children[board[r][c]];
            word += board[r][c];
            if (node.isWord) {
                  res.add(word);
            }

            dfs(r + 1, c, node, word);
            dfs(r - 1, c, node, word);
            dfs(r, c + 1, node, word);
            dfs(r, c - 1, node, word);

            visit.delete(`${r},${c}`);
      };

      for (let r = 0; r < ROWS; r++) {
            for (let c = 0; c < COLS; c++) {
                  dfs(r, c, root, '');
            }
      }

      return Array.from(res);
};
