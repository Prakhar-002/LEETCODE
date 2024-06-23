//! https://github.com/Prakhar-002/LEETCODE

class Node {
      constructor() {
            this.child = new Array(26).fill(null)
            this.str = null
      }
}

var insert = function (root, s) {
      for (let i = 0; i < s.length; i++) {
            ch = s.charAt(i)
            if (root.child[ch.charCodeAt(0) - 'a'.charCodeAt(0)] === null) {
                  root.child[ch.charCodeAt(0) - 'a'.charCodeAt(0)] = new Node();
            } 

            root = root.child[ch.charCodeAt(0) - 'a'.charCodeAt(0)];
            if (root.str !== null) {
                  return;
            }
      }

      root.str = s;
}

var searchPrefix = function (root, str) {
      for (let i = 0; i < str.length(); i++) {
            ch = str.charAt(i);

            if (root.child[ch.charCodeAt(0) - 'a'.charCodeAt(0)] === null) {
                  return null;
            }

            root = root.child[ch.charCodeAt(0) - 'a'.charCodeAt(0)];
            if (root.str !== null) {
                  return root.str;
            }
      }

      return null;
}

var replaceWords = function (dictionary, sentence) {
      root = new Node();

      for (const s of dictionary) {
            insert(root, s)
      }

      ans = []

      for (const word of sentence.split(" ")) {
            prefix = searchPrefix(root, word)
            if (prefix !== null) {
                  ans.push(prefix);
            } else {
                  ans.push(word);
            }
      }

      return ans.join(" ");
};