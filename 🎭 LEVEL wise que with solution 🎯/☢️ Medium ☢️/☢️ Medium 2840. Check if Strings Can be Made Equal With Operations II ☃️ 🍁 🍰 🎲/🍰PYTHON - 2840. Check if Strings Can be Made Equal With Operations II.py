#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2840

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s1)

#? 🧺 Space complexity ➺ O(26) 

class Solution:
      def checkStrings(self, s1: str, s2: str) -> bool:
            # even[i] tracks net frequency of char i at even positions
            # odd[i]  tracks net frequency of char i at odd  positions
            even = [0] * 26
            odd  = [0] * 26

            for i in range(len(s1)):
                  if i % 2 == 0:
                        # Add s1 char, subtract s2 char at even index
                        even[ord(s1[i]) - ord('a')] += 1
                        even[ord(s2[i]) - ord('a')] -= 1
                  else:
                        # Add s1 char, subtract s2 char at odd index
                        odd[ord(s1[i]) - ord('a')] += 1
                        odd[ord(s2[i]) - ord('a')] -= 1

            # All frequencies must cancel out for a valid rearrangement
            for i in range(26):
                  if even[i] != 0 or odd[i] != 0:
                        return False

            return True