#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 212

#? ⌚ Time complexity ➺ O(m * n * 4 * 3 ^ (t - 1) + s) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(s)

from typing import List

class TrieNode:
      def __init__(self) -> None:
            # Dictionary: char → child TrieNode
            self.children = {}
            # Flag to indicate the current node is the end of a valid word
            self.endOfWord = False
            # Stores the complete word that ends at this node
            self.word = ""

      def addWord(self, word: str) -> None:
            # Start from this TrieNode
            cur = self

            # Insert each character into the Trie
            for ch in word:
                  # Create new TrieNode if path does not exist
                  if ch not in cur.children:
                        cur.children[ch] = TrieNode()
                  cur = cur.children[ch]

            # Mark this node as representing the full word
            cur.endOfWord = True
            cur.word = word


class Solution:
      def findWords(self, board: List[List[str]], words: List[str]) -> List[str]:
            root = TrieNode()

            # ----------------------------------------------------------
            # Step 1: Build Trie with all input words
            # ----------------------------------------------------------
            for word in words:
                  root.addWord(word)

            ROWS, COLS = len(board), len(board[0])
            res = []               # Stores all found words
            visit = set()          # Tracks visited positions during DFS

            # ----------------------------------------------------------
            # Step 2: DFS search using Trie guidance
            # ----------------------------------------------------------
            def dfs(r, c, node):
                  # Boundary + visited + character mismatch check
                  if (r < 0 or c < 0 or r >= ROWS or c >= COLS or
                        (r, c) in visit or
                        board[r][c] not in node.children
                  ):
                        return

                  # Mark this cell as visited
                  visit.add((r, c))
                  # Move down into the Trie
                  node = node.children[board[r][c]]

                  # If we found a complete word
                  if node.endOfWord:
                        res.append(node.word)  # Add to results
                        node.endOfWord = False # Avoid duplicate entries

                  # Explore all 4 directions
                  dfs(r + 1, c, node)
                  dfs(r - 1, c, node)
                  dfs(r, c + 1, node)
                  dfs(r, c - 1, node)

                  # Backtrack: unmark visited cell
                  visit.remove((r, c))

            # ----------------------------------------------------------
            # Step 3: Start DFS from each cell
            # ----------------------------------------------------------
            for r in range(ROWS):
                  for c in range(COLS):
                        dfs(r, c, root)

            return res
