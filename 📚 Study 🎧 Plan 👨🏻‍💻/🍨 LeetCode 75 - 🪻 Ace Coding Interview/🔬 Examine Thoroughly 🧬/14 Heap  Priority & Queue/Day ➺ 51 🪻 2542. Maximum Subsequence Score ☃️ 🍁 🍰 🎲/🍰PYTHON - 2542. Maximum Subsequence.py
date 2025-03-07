#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2542

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums1)

#? 🧺 Space complexity ➺ O(n)

import heapq

class Solution:
      def maxScore(self, nums1: List[int], nums2: List[int], k: int) -> int:
            n = len(nums1)

            # Step 1: Combine nums1 and nums2 into pairs
            # Each pair: (nums2[i], nums1[i])
            # nums2 value acts as potential minimum multiplier
            # nums1 value contributes to sum
            pairs = []
            for i in range(n):
                  pairs.append((nums2[i], nums1[i]))

            # Step 2: Sort pairs by nums2 value in descending order
            # This way, when we select the first k pairs, we get the largest possible minimum nums2 value
            pairs.sort(reverse=True, key=lambda x: x[0])

            # Step 3: Use a min-heap to manage selected nums1 values
            # We want to maintain exactly k selected elements, and maximize their sum
            min_heap = []

            # Current sum of selected nums1 values (up to k elements)
            cur_sum = 0

            # Maximum score found so far
            max_score = 0

            # Step 4: Process each pair
            for cur_min_num2, cur_num1 in pairs:
                  # Add current nums1 value to sum and heap
                  heapq.heappush(min_heap, cur_num1)
                  cur_sum += cur_num1

                  # If more than k elements are selected, remove the smallest nums1 value to keep exactly k
                  if len(min_heap) > k:
                        cur_sum -= heapq.heappop(min_heap)

                  # Once exactly k elements are selected, calculate score
                  if len(min_heap) == k:
                        # Score formula: (sum of selected nums1 values) * (minimum selected nums2 value)
                        # Since pairs are sorted, cur_min_num2 is the smallest nums2 in the current selection
                        max_score = max(max_score, cur_sum * cur_min_num2)

            return max_score
