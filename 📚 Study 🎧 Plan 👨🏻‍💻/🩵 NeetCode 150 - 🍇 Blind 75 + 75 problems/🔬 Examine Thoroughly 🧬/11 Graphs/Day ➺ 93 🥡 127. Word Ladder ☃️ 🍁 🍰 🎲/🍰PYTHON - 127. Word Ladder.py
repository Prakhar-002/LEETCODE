#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 127

#? ⌚ Time complexity ➺ O(n * m ^ 2) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n * m ^ 2)

from typing import List
from collections import deque

class Solution:
      def ladderLength(self, beginWord: str, endWord: str, wordList: List[str]) -> int:
            # ----------------------------------------------------------
            # Initial checks:
            # - If endWord is not in the list, a solution is impossible.
            # - (User's logic) If begin and end are the same, return 0.
            # ----------------------------------------------------------
            if (endWord not in wordList): # A slightly different check from user's `or (beginWord == endWord)`
                  return 0

            # Use a set for O(1) lookups and removals.
            words = set(wordList)
            # BFS queue, initialized with the starting word.
            q = deque([beginWord])
            # `res` will track the length of the transformation sequence.
            res = 0

            # ----------------------------------------------------------
            # Perform BFS
            # ----------------------------------------------------------
            while q:
                  # Each level in the BFS corresponds to one step in the ladder.
                  res += 1
                  # Process all nodes at the current level.
                  for _ in range(len(q)):
                        node = q.popleft()
                        # If we've reached the endWord, return the current length.
                        if node == endWord:
                              return res

                        # ----------------------------------------------------------
                        # Generate all possible one-letter-difference neighbors.
                        # ----------------------------------------------------------
                        for i in range(len(node)):
                              # Iterate through all characters 'a' through 'z'.
                              for c in range(97, 123):
                                    if chr(c) == node[i]:
                                          continue
                                    # Form a new potential neighbor word.
                                    nei = node[:i] + chr(c) + node[i + 1:]
                                    # If this neighbor is in our word list:
                                    if nei in words:
                                          # Add it to the queue for the next level.
                                          q.append(nei)
                                          # Remove from word list to prevent cycles and re-visiting.
                                          words.remove(nei)

            # If the queue becomes empty and we haven't found the endWord, it's impossible.
            return 0
