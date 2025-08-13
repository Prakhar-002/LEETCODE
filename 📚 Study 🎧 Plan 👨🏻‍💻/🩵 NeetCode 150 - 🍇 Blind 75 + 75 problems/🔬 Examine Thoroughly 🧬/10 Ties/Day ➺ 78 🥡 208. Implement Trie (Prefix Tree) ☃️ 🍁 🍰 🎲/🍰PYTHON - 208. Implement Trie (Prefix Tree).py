#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 208

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(t) 

class TrieNode:
      def __init__(self) -> None:
            # Dictionary mapping character → child TrieNode
            self.children = {}
            # Boolean flag to indicate this node completes a valid word
            self.endOfWord = False


class Trie:
      def __init__(self):
            # Root node of the Trie (empty character state)
            self.root = TrieNode()

      def insert(self, word: str) -> None:
            # Start from the root node
            cur = self.root

            # Traverse each character of the word
            for ch in word:
                  # If the child node does not exist for ch, create it
                  if ch not in cur.children:
                        cur.children[ch] = TrieNode()

                  # Move down to the child node
                  cur = cur.children[ch]

            # After inserting all characters, mark last node as end of a word
            cur.endOfWord = True

      def search(self, word: str) -> bool:
            # Start from the root
            cur = self.root

            # Traverse each character of the word
            for ch in word:
                  # If the required character is not found → word doesn't exist
                  if ch not in cur.children:
                        return False

                  # Move to the next node
                  cur = cur.children[ch]

            # Word exists only if last node is marked as end of word
            return cur.endOfWord

      def startsWith(self, prefix: str) -> bool:
            # Start from the root
            cur = self.root

            # Traverse each character in the prefix
            for ch in prefix:
                  # If prefix breaks, return False
                  if ch not in cur.children:
                        return False

                  # Move to the next node
                  cur = cur.children[ch]

            # All characters of prefix are found
            return True
