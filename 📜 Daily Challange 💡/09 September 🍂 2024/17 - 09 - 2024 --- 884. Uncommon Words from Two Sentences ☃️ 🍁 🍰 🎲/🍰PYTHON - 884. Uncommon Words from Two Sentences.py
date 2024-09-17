#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 884

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = Total No. of Words in s1 + s2

#? 🧺 Space complexity ➺ O(n)

from collections import defaultdict

class Solution:
      def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
            # if any key that does not exist yet will have a default value of `0`
            count = defaultdict(int)

            # combines the two input strings (`s1` and `s2`) with a space between them
            # splits the result into a list of words
            for s in (s1 + " " + s2).split(" "):
                  # increments the count of each word in the `count` dictionary
                  count[s] += 1

            #  list comprehension to create a list of words that are occurred once 
            return [word for word, cnt in count.items() if cnt == 1]