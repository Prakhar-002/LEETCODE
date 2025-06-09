#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1061

#? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = Unions (s1, s2)

#? 🧺 Space complexity ➺ O(1)    -> m = Mapping baseStr

class Solution:
      def __init__(self):
            # Initialize the parent array for union-find
            self.parent = []

      def find(self, x):
            # Find the root of x with path compression
            if self.parent[x] != x:
                  self.parent[x] = self.find(self.parent[x])   # Compress path
            return self.parent[x]

      def smallestEquivalentString(self, s1: str, s2: str, baseStr: str) -> str:
            # Initialize parent array for 26 lowercase letters (0 to 25)
            self.parent = [i for i in range(26)]

            # Union corresponding characters from s1 and s2
            for a, b in zip(s1, s2):
                  # Find parents of characters a and b
                  pa = self.find(ord(a) - ord("a"))
                  pb = self.find(ord(b) - ord("a"))

                  # Always keep the lexicographically smaller character as the parent
                  if pa < pb:
                        self.parent[pb] = pa
                  else:
                        self.parent[pa] = pb

            # Build the resulting string using the smallest equivalent characters
            result = []

            for ch in baseStr:
                  # Find the smallest equivalent character
                  mapped = chr(self.find(ord(ch) - ord("a")) + ord("a"))
                  result.append(mapped)

            # Join all characters to form the final string
            return "".join(result)
