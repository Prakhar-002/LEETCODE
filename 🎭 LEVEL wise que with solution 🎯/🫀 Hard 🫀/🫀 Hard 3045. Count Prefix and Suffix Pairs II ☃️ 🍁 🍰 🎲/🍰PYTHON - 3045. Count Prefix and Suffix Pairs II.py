#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3045

#? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = No. of words

#? 🧺 Space complexity ➺ O(n * m)    👉🏻  m = max len(one word)

class TrieNode:
      def __init__(self):
            self.children = {}
            self.count = 0

class Trie:
      def __init__(self):
            self.root = TrieNode()

      def add(self, w):
            cur = self.root

            for c1, c2 in zip(w, reversed(w)):
                  if (c1, c2) not in cur.children:
                        cur.children[(c1, c2)] = TrieNode()
                  cur = cur.children[(c1, c2)]
                  cur.count += 1

            return cur.count - 1

      # def count(self, w):
      #       cur = self.root

      #       for c1, c2 in zip(w, reversed(w)):
      #             if (c1, c2) not in cur.children:
      #                   return 0
      #             cur = cur.children[(c1, c2)]

      #       return cur.count

class Solution:
      def countPrefixSuffixPairs(self, words: List[str]) -> int:
            res = 0
            root = Trie()

            for w in reversed(words):
                  # res += root.count(w)
                  # root.add(w)
                  res += root.add(w)

            return res


#!----------------------------------------------------------------------------------------

#? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = No. of words

#? 🧺 Space complexity ➺ O(n * m)    👉🏻  m = max len(one word)

from collections import defaultdict

class Solution:
      def countPrefixSuffixPairs(self, words: List[str]) -> int:
            root = (T := lambda: defaultdict(T))()
            res = 0

            for w in words:
                  x = root
                  for i in zip(w, reversed(w)):
                        res += (x := x[i]).get(0, 0)
                  x[0] = x.get(0, 0) + 1

            return res