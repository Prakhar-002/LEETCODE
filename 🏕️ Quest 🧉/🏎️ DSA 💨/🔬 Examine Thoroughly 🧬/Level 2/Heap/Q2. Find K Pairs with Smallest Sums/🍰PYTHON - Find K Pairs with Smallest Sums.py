#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L2.2 Q2

# ? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

# ? 🧺 Space complexity ➺ O(n)

import heapq

class Solution:
      def kSmallestPairs(self, nums1: List[int], nums2: List[int], k: int) -> List[List[int]]:
            # Handle edge case: empty input arrays return empty result
            if not nums1 or not nums2:
                  return []

            # Min-heap stores [sum, index1, index2] - smallest sum first
            heap = []

            # Track visited (i,j) pairs to prevent duplicate exploration
            visited = set()

            # Start with smallest possible pair: nums1[0] + nums2[0]
            heapq.heappush(heap, [nums1[0] + nums2[0], 0, 0])
            visited.add((0, 0))  # Mark starting pair as visited

            res = []  # Store k smallest pairs

            # Extract exactly k smallest pairs (or fewer if not enough pairs exist)
            while heap and len(res) < k:
                  # Pop pair with smallest sum
                  s, i, j = heapq.heappop(heap)
                  
                  # Add actual pair [nums1[i], nums2[j]] to result (not the sum)
                  res.append([nums1[i], nums2[j]])

                  # Expand right: same i, next j+1 (like matrix traversal)
                  if j + 1 < len(nums2) and (i, j + 1) not in visited:
                        visited.add((i, j + 1))
                        heapq.heappush(heap, [nums1[i] + nums2[j + 1], i, j + 1])

                  # Expand down: next i+1, same j
                  if i + 1 < len(nums1) and (i + 1, j) not in visited:
                        visited.add((i + 1, j))
                        heapq.heappush(heap, [nums1[i + 1] + nums2[j], i + 1, j])

            return res
