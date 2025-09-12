#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3227

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def doesAliceWin(self, s: str) -> bool:
            vowels = 0                    #      Alice begins by counting vowels in the string

            #      Alice examines each character
            for ch in s:
                  if ch in "aeiou":       #      Alice notices a vowel (beneficial for her)
                        vowels += 1       #      Alice counts the vowel she finds

            #      Decision: If Alice has found at least one vowel, she wins!
            #      From Bob's perspective: If there are zero vowels, Alice loses and Bob wins.
            return vowels > 0              #      Alice wins if at least one vowel, else Bob wins

