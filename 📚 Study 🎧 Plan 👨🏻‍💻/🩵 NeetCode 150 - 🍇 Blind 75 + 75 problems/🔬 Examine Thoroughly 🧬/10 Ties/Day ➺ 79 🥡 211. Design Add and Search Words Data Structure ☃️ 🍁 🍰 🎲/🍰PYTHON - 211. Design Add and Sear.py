#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 211

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(t)

class TrieNode:
      def __init__(self) -> None:
            # Dictionary mapping character → child TrieNode
            self.children = {}
            # Boolean flag to indicate this node completes a valid word
            self.endOfWord = False


class WordDictionary:
      def __init__(self):
            # Root node of the Trie (empty state, no char)
            self.root = TrieNode()

      def addWord(self, word: str) -> None:
            # Start from the root
            cur = self.root

            # Traverse each character of the word
            for ch in word:
                  # If child node for ch doesn't exist, create it
                  if ch not in cur.children:
                        cur.children[ch] = TrieNode()
                  # Move down to that child node
                  cur = cur.children[ch]

            # After inserting all characters, mark the last node as end of word
            cur.endOfWord = True

      def search(self, word: str) -> bool:
            # Depth‑First Search function to handle wildcard '.'
            def dfs(j, root):
                  cur = root

                  # Check each char from position j onwards
                  for i in range(j, len(word)):
                        ch = word[i]

                        # Case 1: Wildcard '.'
                        if ch == ".":
                              # Explore all possible children
                              for child in cur.children.values():
                                    if dfs(i + 1, child):
                                          return True
                              return False

                        # Case 2: Normal character
                        else:
                              # If letter not found in children → no match
                              if ch not in cur.children:
                                    return False
                              # Move to next node
                              cur = cur.children[ch]

                  # At the end of the loop:
                  # Return True if current node marks a valid word
                  return cur.endOfWord

            # Start DFS from index 0 at the root
            return dfs(0, self.root)
