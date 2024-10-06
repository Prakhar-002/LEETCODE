#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1813

#? ⌚ Time complexity ➺ O(k) 👉🏻  k = min(n, m)

#? 🧺 Space complexity ➺ O(n + m) n = len(s1), m = len(s2)

class Solution:
      def areSentencesSimilar(self, sentence1: str, sentence2: str) -> bool:
            # splitting each sentence into a list of words
            s1 = sentence1.split(" ")
            s2 = sentence2.split(" ")

            # ensures that `s2` is always equal to or longer than `s1`
            if len(s2) < len(s1):
                  s1, s2 = s2, s1

            # initializes two pointers, `l1` and `l2`, 
            # for the lists `s1` and `s2` respectively (starting at 0)
            l1, l2 = 0, 0
            # iterates both sentences as long as the words at the 
            # current positions of `l1` and `l2` are the same
            while l1 < len(s1) and l2 < len(s2) and s1[l1] == s2[l2]:
                  # it increments both pointers
                  l1, l2 = l1 + 1, l2 + 1

            # initializes two more pointers, `r1` and `r2`, starting from the ends of `s1` and `s2`
            r1, r2 = len(s1) - 1, len(s2) - 1

            # iterates backwards as long as the words at the current positions of `r1` and `r2` are the same
            while r1 >= 0 and r2 >= 0 and s1[r1] == s2[r2]:
                  # decreasing both `r1` and `r2` for each match
                  r1, r2 = r1 - 1, r2 - 1

            # returns `True` if the pointers `l1` and `r1` have "crossed"
            return l1 > r1