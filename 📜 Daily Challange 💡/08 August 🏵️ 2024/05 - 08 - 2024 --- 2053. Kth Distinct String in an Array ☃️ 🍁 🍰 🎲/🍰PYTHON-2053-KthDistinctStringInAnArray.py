#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2053

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(arr)

#? 🧺 Space complexity ➺ O(n) 👉🏻 Using HashMap

from collections import defaultdict

class Solution:
      def kthDistinct(self, arr: List[str], k: int) -> str:
            # for calculating the string occurrences
            stringCount = defaultdict(int)

            # count by going through array
            for str in arr: 
                  stringCount[str] += 1

            # check string by going over array 
            for str in arr:
                  # if str is count is one it's means str is Distinct 
                  if stringCount[str] == 1:
                        # for k-th distinct we dec the k value
                        k -= 1
                        # if we got k == 0 this will be our ans
                        if k == 0 : return str

            # if we don't get the k-th distinct we return ""
            return ""
