//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 208

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(t)

import java.util.HashMap;
import java.util.Map;

class TrieNode {
      // Map of character → child TrieNode
      Map<Character, TrieNode> children = new HashMap<>();
      // True if this node represents the end of a valid word
      boolean endOfWord = false;
}

class Trie {
      private TrieNode root;

      public Trie() {
            // Root node (empty) initialization
            root = new TrieNode();
      }

      public void insert(String word) {
            // Start from root
            TrieNode cur = root;

            // Traverse each character
            for (char ch : word.toCharArray()) {
                  // Create new node if missing
                  cur.children.putIfAbsent(ch, new TrieNode());
                  // Move to next node
                  cur = cur.children.get(ch);
            }

            // Mark this node as end of word
            cur.endOfWord = true;
      }

      public boolean search(String word) {
            TrieNode cur = root;

            // Traverse each character
            for (char ch : word.toCharArray()) {
                  if (!cur.children.containsKey(ch)) {
                        return false;
                  }
                  cur = cur.children.get(ch);
            }

            // Valid word only if endOfWord is true
            return cur.endOfWord;
      }

      public boolean startsWith(String prefix) {
            TrieNode cur = root;

            // Traverse each character
            for (char ch : prefix.toCharArray()) {
                  if (!cur.children.containsKey(ch)) {
                        return false;
                  }
                  cur = cur.children.get(ch);
            }

            return true;
      }
}
