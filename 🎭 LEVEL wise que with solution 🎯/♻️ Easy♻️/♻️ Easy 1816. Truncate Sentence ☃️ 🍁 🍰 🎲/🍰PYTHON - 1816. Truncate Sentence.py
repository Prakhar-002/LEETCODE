#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1816

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def truncateSentence(self, s: str, k: int) -> str:
            # return a string formed by joining the first k words from the string s, 
            # where the words are separated by a single space " "
            return (" ").join(s.split(" ")[:k])