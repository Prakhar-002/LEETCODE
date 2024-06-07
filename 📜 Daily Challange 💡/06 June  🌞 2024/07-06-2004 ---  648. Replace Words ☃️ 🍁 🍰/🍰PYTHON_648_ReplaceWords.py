class Node:
      def __init__(self):
            self.child = [None] * 26
            self.str = None


def insert(root, s):
      for ch in s:
            if root.child[ord(ch) - ord('a')] is None:
                  root.child[ord(ch) - ord('a')] = Node()

            root = root.child[ord(ch) - ord('a')]

      root.str = s

def search_prefix(root, str):
      for ch in str:            
            if root.child[ord(ch) - ord('a')] is None:
                  return None
            
            root = root.child[ord(ch) - ord('a')]
            if root.str is not None:
                  return root.str
            
      return None


class Solution:
      def replaceWords(self, dictionary: List[str], sentence: str) -> str:
            root = Node()

            for s in dictionary:
                  insert(root, s)

            ans = []

            for word in sentence.split():
                  prefix = search_prefix(root, word)
                  if prefix is not None:
                        ans.append(prefix)
                  else :
                        ans.append(word)

            return (" ").join(ans)