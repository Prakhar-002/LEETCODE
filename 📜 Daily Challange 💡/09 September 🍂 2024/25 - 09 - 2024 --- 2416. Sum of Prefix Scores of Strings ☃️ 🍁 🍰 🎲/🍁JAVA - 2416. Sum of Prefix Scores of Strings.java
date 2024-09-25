//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2416

//? ⌚ Time complexity ➺ O(n * l) 👉🏻  n = len(words) l = avg len(each word)

//? 🧺 Space complexity ➺ O(n * l) 

class PrefixNode {
      // Each node has an array named `children` of fixed size 26
      // representing the 26 lowercase English letters
      PrefixNode[] children;
      // `count` tracks how many words pass through this node
      int count;

      public PrefixNode() {
            children = new PrefixNode[26];
            count = 0;
      }
}

// Prefix Tree or Trie data structure
class PrefixTree {
      // `root`, initialized to an instance of `PrefixNode`
      PrefixNode root;

      public PrefixTree() {
            root = new PrefixNode();
      }

      // `insert` method is used to add a word to the Trie
      public void insert(String word) {
            // extract the root as cur to access the trie structure
            PrefixNode cur = root;
            // For each character in the word
            for (char ch : word.toCharArray()) {
                  // get the index (ASCII value of ch - 'a')
                  int i = ch - 'a';
                  // if there is no child node at that position
                  if (cur.children[i] == null) {
                        // creates one
                        cur.children[i] = new PrefixNode();
                  }
                  // then moves to child node
                  cur = cur.children[i];
                  // increments the `count`
                  cur.count++;
            }
      }

      // `getScore` method calculates the score for a given word
      // traversing the Trie according to the characters of the word
      public int getScore(String word) {
            // extract the root as cur to access the trie structure
            PrefixNode cur = root;
            // `score` variable for calculating the score of current word
            int score = 0;
            // For each character in the word
            for (char ch : word.toCharArray()) {
                  // get the index (ASCII value of ch - 'a')
                  int i = ch - 'a';
                  // moves to child node
                  cur = cur.children[i];
                  // increment the score by adding current char count
                  score += cur.count;
            }
            return score;
      }
}

class Solution {
      public int[] sumPrefixScores(String[] words) {
            int[] answer = new int[words.length];

            // create an instance of `PrefixTree`
            PrefixTree prefixTree = new PrefixTree();

            // for each word in the input array `words`
            for (String word : words) {
                  // inserts the word into the Prefix Tree using the `insert` method
                  prefixTree.insert(word);
            }

            // for each word in the input array `words`
            for (int i = 0; i < words.length; i++) {
                  // calculates the score for each word by calling the `getScore` method
                  // stores the results in the `answer` array
                  answer[i] = prefixTree.getScore(words[i]);
            }

            // returns the `answer` array, which contains the prefix scores for each input word
            return answer;
      }
}