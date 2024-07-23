#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 1636

#? ⌚ Time complexity -> O(NLogN) 👉🏻 Build in sort

#? 🧺 Space complexity -> O(n) 👉🏻 using freq count HashMap 

from typing import Counter

class Solution:
      def frequencySort(self, nums: List[int]) -> List[int]:
            # count the freq of every num in nums
            freqCount = Counter(nums)

            # sort based on the freq of num 
            # if freq is same them sort by dec order of num
            nums.sort(key = lambda n : (freqCount[n], -n))

            return nums