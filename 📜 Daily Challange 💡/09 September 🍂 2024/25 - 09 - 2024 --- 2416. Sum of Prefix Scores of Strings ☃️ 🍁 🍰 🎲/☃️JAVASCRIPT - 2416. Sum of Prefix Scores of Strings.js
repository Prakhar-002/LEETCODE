//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2416

//? ⌚ Time complexity ➺ O(n * l) 👉🏻  n = len(words) l = avg len(each word)

//? 🧺 Space complexity ➺ O(n * l) 

class PrefixNode {
      constructor() {
            // Each node has an array named `children` of fixed size 26
            // representing the 26 lowercase English letters
            this.children = new Array(26).fill(null);
            // `count` tracks how many words pass through this node
            this.count = 0;
      }
}

// Prefix Tree or Trie data structure
class PrefixTree {
      constructor() {
            // `root`, initialized to an instance of `PrefixNode`
            this.root = new PrefixNode();
      }

      // `insert` method is used to add a word to the Trie
      insert(word) {
            let cur = this.root;
            // For each character in the word
            for (let ch of word) {
                  // get the index (ASCII value of ch - 'a')
                  let i = ch.charCodeAt(0) - 'a'.charCodeAt(0);
                  // if there is no child node at that position, create one
                  if (!cur.children[i]) {
                        cur.children[i] = new PrefixNode();
                  }
                  // move to child node
                  cur = cur.children[i];
                  // increment the `count`
                  cur.count++;
            }
      }

      // `getScore` method calculates the score for a given word
      // traversing the Trie according to the characters of the word
      getScore(word) {
            let cur = this.root;
            let score = 0;
            // For each character in the word
            for (let ch of word) {
                  // get the index (ASCII value of ch - 'a')
                  let i = ch.charCodeAt(0) - 'a'.charCodeAt(0);
                  // move to child node
                  cur = cur.children[i];
                  // increment the score by adding current char of word
                  score += cur.count;
            }
            return score;
      }
}

var sumPrefixScores = function (words) {
      let answer = [];

      // create an instance of `PrefixTree`
      let prefixTree = new PrefixTree();

      // for each word in the input array `words`
      for (let word of words) {
            // insert the word into the Prefix Tree using the `insert` method
            prefixTree.insert(word);
      }

      // for each word in the input array `words`
      for (let word of words) {
            // calculate the score for each word by calling the `getScore` method
            // append the results to the `answer` array
            answer.push(prefixTree.getScore(word));
      }

      // return the `answer` array, which contains the prefix scores for each input word
      return answer;
};

