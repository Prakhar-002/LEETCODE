//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3045

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = No. of words

//? 🧺 Space complexity ➺ O(n * m)    👉🏻  m = max len(one word)

class TrieNode {
      constructor() {
            this.children = {};
            this.count = 0;
      }
}

class Trie {
      constructor() {
            this.root = new TrieNode();
      }

      add(word) {
            let cur = this.root;

            for (let i = 0; i < word.length; i++) {
                  const key = `${word[i]},${word[word.length - i - 1]}`;
                  if (!cur.children[key]) {
                        cur.children[key] = new TrieNode();
                  }
                  cur = cur.children[key];
                  cur.count++;
            }

            return cur.count - 1;
      }
}


var countPrefixSuffixPairs = function (words) {
      let res = 0;
      const root = new Trie();

      for (let i = words.length - 1; i >= 0; i--) {
            res += root.add(words[i]);
      }

      return res;
}

