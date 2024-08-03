#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1460

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(target)

#? 🧺 Space complexity ➺ O(n) 👉🏻 making HashMap

from collections import defaultdict
from typing import Counter

class Solution:
      def canBeEqual(self, target: List[int], arr: List[int]) -> bool:
            # making hashmap 
            targetCount, arrCount = defaultdict(int), defaultdict(int)

            # count the freq of both elem
            for tc, ac in zip(target, arr):
                  targetCount[tc] += 1
                  arrCount[ac] += 1

            # if length is not equal
            if len(targetCount) != len(arrCount): return False

            # check the freq of each elem
            for elem in target:
                  # check for both counter
                  if targetCount[elem] != arrCount[elem]: return False 

            return True


#-------------------------------------------------------------------

#* One Line

class Solution:
      def canBeEqual(self, target: List[int], arr: List[int]) -> bool:
            return Counter(target) == Counter(arr)

