#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 347

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from collections import Counter

class Solution:
      def topKFrequent(self, nums: List[int], k: int) -> List[int]:
            # Step 1: Count the frequency of each number in the input list
            count = Counter(nums)

            # Step 2: Create a frequency bucket (list of lists) where the index represents the frequency
            freq = [[] for i in range(len(nums) + 1)]

            # Step 3: Fill the frequency bucket with numbers corresponding to their frequencies
            for num, cnt in count.items():
                  freq[cnt].append(num)

            # Step 4: Prepare the result list
            res = []

            # Step 5: Iterate through the frequency bucket in reverse order (high to low frequency)
            for i in range(len(freq) - 1, 0, -1):
                  for num in freq[i]:
                        res.append(num)
                        # Stop when we have collected `k` elements
                        if len(res) == k:
                              return res
