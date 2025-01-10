//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3045

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = No. of words

//? 🧺 Space complexity ➺ O(n * m)    👉🏻  m = max len(one word)

import java.util.*;

class TrieNode {
      Map<String, TrieNode> children = new HashMap<>();
      int count = 0;
}

class Trie {
      TrieNode root = new TrieNode();

      public int add(String w) {
            TrieNode cur = root;

            for (int i = 0; i < w.length(); i++) {
                  String key = w.charAt(i) + "," + w.charAt(w.length() - i - 1);
                  cur.children.putIfAbsent(key, new TrieNode());
                  cur = cur.children.get(key);
                  cur.count++;
            }

            return cur.count - 1;
      }
}

class Solution {
      public long countPrefixSuffixPairs(String[] words) {
            long res = 0;
            Trie root = new Trie();

            for (int i = words.length - 1; i >= 0; i--) {
                  res += root.add(words[i]);
            }

            return res;
      }
}