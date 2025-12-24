//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Software Design L2 Q2

//? ⌚ Time complexity ➺ O(min(maxLen,len(w))) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(∑len(w))

class StreamChecker {
      private TrieNode root;
      private StringBuilder stream;
      private int maxLen;

      // Trie node for lowercase letters
      private static class TrieNode {
            TrieNode[] children = new TrieNode[26];
            boolean isEnd;
      }

      public StreamChecker(String[] words) {
            root = new TrieNode();
            maxLen = 0;
            stream = new StringBuilder();

            // Insert each word in reverse order into the trie
            for (String word : words) {
                  maxLen = Math.max(maxLen, word.length());
                  TrieNode node = root;
                  // Insert from last char to first (reverse)
                  for (int i = word.length() - 1; i >= 0; i--) {
                        int idx = word.charAt(i) - 'a';
                        if (node.children[idx] == null) {
                              node.children[idx] = new TrieNode();
                        }
                        node = node.children[idx];
                  }
                  node.isEnd = true;
            }
      }

      public boolean query(char letter) {
            // Append new letter to the stream
            stream.append(letter);

            // We only need to check the last maxLen characters
            int start = Math.max(0, stream.length() - maxLen);
            TrieNode node = root;

            // Traverse from the most recent character backwards
            for (int i = stream.length() - 1; i >= start; i--) {
                  int idx = stream.charAt(i) - 'a';
                  if (node.children[idx] == null) {
                        return false;
                  }
                  node = node.children[idx];
                  // If we hit the end of a word, this suffix matches
                  if (node.isEnd) {
                        return true;
                  }
            }

            return false;
      }
}
