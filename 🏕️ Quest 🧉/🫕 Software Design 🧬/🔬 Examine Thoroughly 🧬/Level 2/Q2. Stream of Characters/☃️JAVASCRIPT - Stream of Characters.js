//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Software Design L2 Q2

//? ⌚ Time complexity ➺ O(min(maxLen,len(w))) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(∑len(w))

class StreamChecker {
      constructor(words) {
            // Trie node: children map and isEnd flag
            const TrieNode = function () {
                  this.children = {};
                  this.isEnd = false;
            };

            this.root = new TrieNode();
            this.stream = [];
            this.maxLen = 0;

            // Insert each word in reverse order into the trie
            for (const word of words) {
                  this.maxLen = Math.max(this.maxLen, word.length);
                  let node = this.root;
                  // Insert from last char to first (reverse)
                  for (let i = word.length - 1; i >= 0; i--) {
                        const ch = word[i];
                        if (!node.children[ch]) {
                              node.children[ch] = new TrieNode();
                        }
                        node = node.children[ch];
                  }
                  node.isEnd = true;
            }
      }

      query(letter) {
            // Append new letter to the stream
            this.stream.push(letter);

            // We only need to check the last maxLen characters
            const start = Math.max(0, this.stream.length - this.maxLen);
            let node = this.root;

            // Traverse from the most recent character backwards
            for (let i = this.stream.length - 1; i >= start; i--) {
                  const ch = this.stream[i];
                  if (!node.children[ch]) {
                        return false;
                  }
                  node = node.children[ch];
                  // If we hit the end of a word, this suffix matches
                  if (node.isEnd) {
                        return true;
                  }
            }

            return false;
      }
}
