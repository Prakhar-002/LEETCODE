#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3838

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def mapWordWeights(self, words: List[str], weights: List[int]) -> str:
            # Maps weight mod 26 back to a letter (0→'z', 1→'y', ..., 25→'a')
            word_map = {
                  0:'z', 1:'y', 2:'x', 3:'w', 4:'v', 5:'u', 6:'t',
                  7:'s', 8:'r', 9:'q', 10:'p', 11:'o', 12:'n', 13:'m',
                  14:'l', 15:'k', 16:'j', 17:'i', 18:'h', 19:'g', 20:'f',
                  21:'e', 22:'d', 23:'c', 24:'b', 25:'a'
            }

            res = ""

            for word in words:
                  weight = 0

                  # Sum weights of each character in the word
                  for ch in word:
                        weight += weights[ord(ch) - ord('a')]

                  # Map the mod result to its corresponding letter
                  res += word_map[weight % 26]

            return res