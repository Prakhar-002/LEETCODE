//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 208

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(t)

class TrieNode {
      constructor() {
            // Object mapping character → child TrieNode
            this.children = {};
            // True if node marks the end of a complete word
            this.endOfWord = false;
      }
}

var Trie = function () {
      // Root node (empty)
      this.root = new TrieNode();
};

Trie.prototype.insert = function (word) {
      let cur = this.root;

      // Traverse each character
      for (let ch of word) {
            // Create node if absent
            if (!cur.children[ch]) {
                  cur.children[ch] = new TrieNode();
            }
            // Move to child
            cur = cur.children[ch];
      }

      // Mark end of word
      cur.endOfWord = true;
};

Trie.prototype.search = function (word) {
      let cur = this.root;

      // Traverse each character
      for (let ch of word) {
            if (!cur.children[ch]) {
                  return false;
            }
            cur = cur.children[ch];
      }

      return cur.endOfWord;
};

Trie.prototype.startsWith = function (prefix) {
      let cur = this.root;

      // Traverse each character
      for (let ch of prefix) {
            if (!cur.children[ch]) {
                  return false;
            }
            cur = cur.children[ch];
      }

      return true;
};
