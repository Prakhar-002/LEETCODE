//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 211

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(t)

class TrieNode {
      constructor() {
            // Dictionary mapping character → child TrieNode
            this.children = {};
            // Boolean flag to indicate this node completes a valid word
            this.endOfWord = false;
      }
}

var WordDictionary = function () {
      // Root node of the Trie (empty state, no char)
      this.root = new TrieNode();
};

WordDictionary.prototype.addWord = function (word) {
      // Start from the root node
      let cur = this.root;

      // Traverse each character of the word
      for (let ch of word) {
            // If the child node does not exist for ch, create it
            if (!cur.children[ch]) {
                  cur.children[ch] = new TrieNode();
            }
            // Move down to the child node
            cur = cur.children[ch];
      }

      // After inserting all characters, mark last node as end of a word
      cur.endOfWord = true;
};

WordDictionary.prototype.search = function (word) {
      // DFS helper to handle '.' wildcards
      const dfs = (j, root) => {
            let cur = root;
            // Traverse characters starting from position j
            for (let i = j; i < word.length; i++) {
                  let ch = word[i];

                  // Case 1: Wildcard '.'
                  if (ch === ".") {
                        // Try all children recursively
                        for (let child of Object.values(cur.children)) {
                              if (dfs(i + 1, child)) {
                                    return true;
                              }
                        }
                        return false;
                  }
                  // Case 2: Normal character
                  else {
                        // Character not found → no match
                        if (!cur.children[ch]) {
                              return false;
                        }
                        // Move to next node
                        cur = cur.children[ch];
                  }
            }
            // Return true if current node marks end of valid word
            return cur.endOfWord;
      };

      // Start DFS from index 0 and root
      return dfs(0, this.root);
};
