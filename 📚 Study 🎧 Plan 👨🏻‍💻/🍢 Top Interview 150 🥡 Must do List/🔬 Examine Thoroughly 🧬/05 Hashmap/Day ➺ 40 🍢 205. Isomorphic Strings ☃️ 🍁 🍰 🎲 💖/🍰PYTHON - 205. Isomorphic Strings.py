#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 205

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def isIsomorphic(self, s: str, t: str) -> bool:
            mapST = {}  # Mapping from characters in s to characters in t
            mapTS = {}  # Mapping from characters in t to characters in s

            for i in range(len(s)):
                  c1 = s[i]  # Current character from s
                  c2 = t[i]  # Current character from t

                  # Check if c1 has already been mapped
                  if c1 in mapST:
                        if mapST[c1] != c2:
                              return False  # Mismatch in mapping
                  else:
                        mapST[c1] = c2  # Create new mapping from c1 to c2

                  # Check if c2 has already been mapped
                  if c2 in mapTS:
                        if mapTS[c2] != c1:
                              return False  # Mismatch in reverse mapping
                  else:
                        mapTS[c2] = c1  # Create reverse mapping from c2 to c1

            return True  # All characters are mapped consistently
