#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3005

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from collections import Counter 
from typing import List

class Solution:
      def maxFrequencyElements(self, nums: List[int]) -> int:
            freq = Counter(nums)                       # Count frequency of each element
            max_freq = max(freq.values())              # Find the maximum frequency

            # Sum frequencies of elements with max frequency
            return sum(count for count in freq.values() if count == max_freq)  
