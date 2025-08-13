//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 211

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(t)

import java.util.*;

class TrieNode {
      // Dictionary mapping character → child TrieNode
      Map<Character, TrieNode> children = new HashMap<>();
      // Boolean flag to indicate this node completes a valid word
      boolean endOfWord = false;
}

class WordDictionary {
      private TrieNode root;

      public WordDictionary() {
            // Root node of the Trie (empty state, no char)
            root = new TrieNode();
      }

      public void addWord(String word) {
            // Start from the root node
            TrieNode cur = root;

            // Traverse each character of the word
            for (char ch : word.toCharArray()) {
                  // If the child node does not exist for ch, create it
                  cur.children.putIfAbsent(ch, new TrieNode());
                  // Move down to the child node
                  cur = cur.children.get(ch);
            }

            // After inserting all characters, mark last node as end of a word
            cur.endOfWord = true;
      }

      public boolean search(String word) {
            // Start DFS from index 0 and root
            return dfs(0, root, word);
      }

      private boolean dfs(int j, TrieNode root, String word) {
            TrieNode cur = root;
            // Traverse characters starting from position j
            for (int i = j; i < word.length(); i++) {
                  char ch = word.charAt(i);

                  // Case 1: Wildcard '.'
                  if (ch == '.') {
                        // Try all children recursively
                        for (TrieNode child : cur.children.values()) {
                              if (dfs(i + 1, child, word)) {
                                    return true;
                              }
                        }
                        return false;
                  }
                  // Case 2: Normal character
                  else {
                        // Character not found → no match
                        if (!cur.children.containsKey(ch)) {
                              return false;
                        }
                        // Move to next node
                        cur = cur.children.get(ch);
                  }
            }
            // Return true if current node marks end of valid word
            return cur.endOfWord;
      }
}
