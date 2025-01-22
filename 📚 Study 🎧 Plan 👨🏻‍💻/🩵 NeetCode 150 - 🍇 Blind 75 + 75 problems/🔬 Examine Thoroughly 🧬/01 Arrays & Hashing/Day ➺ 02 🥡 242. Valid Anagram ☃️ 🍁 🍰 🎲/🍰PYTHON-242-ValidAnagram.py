#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 242

#? ⌚ Time complexity ➺ O(s + t) 👉🏻  s, t = len(s), len(t) 

#? 🧺 Space complexity ➺ O(1) 

from collections import Counter, defaultdict

class Solution:
      def isAnagram(self, s: str, t: str) -> bool:
            # if length of both string is not equal 
            if len(s) != len(t): return False

            # make hashmap for both
            # max length of both hashmaps will be 26 so content space
            sCount, tCount = defaultdict(int), defaultdict(int)

            # count the freq of both 
            for sc, tc in zip(s, t):
                  sCount[sc] += 1
                  tCount[tc] += 1

            # check for freq of every char in s
            for ch in s:
                  if sCount[ch] != tCount[ch]: return False

            return True

#-------------------------------------------------------

# * one line

#? ⌚ Time complexity -> O(s + t) -> s, t = len(s), len(t) 

#?  Space complexity -> O(1)  

class Solution:
      def isAnagram(self, s: str, t: str) -> bool:
            return Counter(s) == Counter(t)

#-------------------------------------------------------

#? ⌚ Time complexity -> O(N Log N) ->  N = max(len(s), len(t))

#? Space complexity -> O(1)  

#* one line

class Solution:
      def isAnagram(self, s: str, t: str) -> bool:
            return sorted(s) == sorted(t)
