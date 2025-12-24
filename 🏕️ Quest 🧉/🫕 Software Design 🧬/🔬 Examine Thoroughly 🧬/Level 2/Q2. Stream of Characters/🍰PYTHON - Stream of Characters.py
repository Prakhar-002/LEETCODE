#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Software Design L2 Q2

#? ⌚ Time complexity ➺ O(min(maxLen,len(w))) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(∑len(w))

import collections
from functools import reduce 

class StreamChecker:
      def __init__(self, words): # O((∑len(w))
            # Build a reversed trie so we can check suffixes efficiently
            def make_trie():
                  return collections.defaultdict(make_trie)

            self.trie = make_trie()

            # Insert each word reversed into the trie
            for w in words:
                  node = self.trie
                  for ch in reversed(w):
                        node = node[ch]
                  node['#'] = True  # mark end of a word

            # Keep track of the current stream as a string (reversed)
            self.stream = ""
            # Longest word length (we never need to keep more than this many characters)
            self.max_len = max(map(len, words)) if words else 0

      def query(self, letter): # O(min(maxLen,len(w)))
            # Add new letter to the front, keep at most max_len characters
            self.stream = (letter + self.stream)[:self.max_len]

            node = self.trie

            # Walk down the trie following the current stream
            for ch in self.stream:
                  if ch not in node:
                        return False
                  node = node[ch]
                  if node.get('#', False):
                        return True

            return False
