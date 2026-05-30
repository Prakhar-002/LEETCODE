#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3093

# ? ⌚ Time complexity ➺ O(C + Q) 👉🏻  C = Σ len(wordsContainer[i])

# ? 🧺 Space complexity ➺ O(c) 👉🏻     Q = Σ len(wordsQuery[i])

from typing import List

# Trie node used to store suffixes of container words
class TrieNode:
      def __init__(self):
            # Index of the shortest word that reaches this node
            self.idx = -1

            # One child for each lowercase letter (a-z)
            self.children = [None] * 26


class Solution:
      def stringIndices(self, wordsContainer: List[str], wordsQuery: List[str]) -> List[int]:

            # Root of the suffix trie
            root = TrieNode()

            # ---------------- Build Suffix Trie ----------------
            for i, word in enumerate(wordsContainer):

                  # Keep track of the globally shortest word.
                  # This will be used when no suffix match is found.
                  if (
                        root.idx == -1
                        or len(word) < len(wordsContainer[root.idx])
                  ):
                        root.idx = i

                  node = root

                  # Insert the word from right to left.
                  # Reversing the word converts suffix matching
                  # into a normal trie traversal.
                  for ch in reversed(word):
                        idx = ord(ch) - ord('a')

                        # Create the child node if it does not exist
                        if not node.children[idx]:
                              node.children[idx] = TrieNode()

                        # Move to the next node
                        node = node.children[idx]

                        # Store the index of the shortest word
                        # that passes through this suffix node.
                        if (
                              node.idx == -1
                              or len(word) < len(wordsContainer[node.idx])
                        ):
                              node.idx = i

            # ---------------- Process Queries ----------------
            ans = []

            for word in wordsQuery:

                  # Start traversal from the root
                  node = root

                  # Default answer is the globally shortest word
                  best = root.idx

                  # Traverse query from right to left
                  # to find the longest matching suffix
                  for ch in reversed(word):
                        idx = ord(ch) - ord('a')

                        # If suffix path does not exist,
                        # no longer suffix match is possible
                        if not node.children[idx]:
                              break

                        # Move to matching suffix node
                        node = node.children[idx]

                        # Update answer with the best word
                        # for the current matched suffix
                        best = node.idx

                  ans.append(best)

            return ans 
