#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2085

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = Total no of words 

#? 🧺 Space complexity ➺ O(n)

from collections import defaultdict
from typing import Counter

class Solution:
      def countWords(self, words1: List[str], words2: List[str]) -> int:
            # `defaultdict` will automatically create a default value `0`

            # `wordsOne` will count occurrences of each word in `words1`
            wordsOne = defaultdict(int) 
            # `wordsTwo` will count occurrences of each word in `words2
            wordsTwo = defaultdict(int)

            # iterates through each word in `words1`
            for word in words1:
                  # increments the corresponding count in the `wordsOne`
                  wordsOne[word] += 1

            # # iterates through each word in `words2`
            for word in words2:
                  # increments the corresponding count in the `wordsTwo`
                  wordsTwo[word] += 1

            # hold the count of words that appear exactly once in both lists
            res = 0

            # iterates through each word in `words1`
            for word in words1:
                  # word appears exactly once in `words1` and in `words2`
                  if wordsOne[word] == 1 and wordsTwo[word] == 1:
                        # increments `res` by `1`
                        res += 1

            # returned as the result
            return res

#!------------------------------------------------------------------------------------ 

#* One Liner 

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = Total no of words 

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def countWords(self, words1: List[str], words2: List[str]) -> int:
            return sum (
                        1 
                        for word in words1 
                        if Counter(words1)[word] == 1 
                        and Counter(words2)[word] == 1
                  )