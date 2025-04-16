#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2179

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from sortedcontainers import SortedList   # Import SortedList for efficient insertions and binary search

class Solution:
      def goodTriplets(self, nums1: List[int], nums2: List[int]) -> int:
            totalTriplets = 0                                    # Final result: count of good triplets
            positionInNums1 = [0] * len(nums1)                   # Stores index of each number in nums1
            seen = SortedList()                                  # Stores already seen numbers in sorted order

            # Step 1: Map each number in nums1 to its index
            for index, number in enumerate(nums1):
                  positionInNums1[number] = index                # Record the index of each number in nums1

            # Step 2: Transform nums2 to reflect the indices in nums1
            for i, number in enumerate(nums2):
                  nums1[i] = positionInNums1[number]             # Replace with index from nums1's perspective

            # Step 3: Traverse reversed transformed nums1 to count good triplets
            for i, current in enumerate(nums1[::-1]):            # Process from right to left
                  countSmaller = seen.bisect(current)            # Count how many values in seen < current
                  totalTriplets += (i - countSmaller) * (current - countSmaller)  # Count valid good triplets
                  seen.add(current)                              # Insert current into sorted list

            return totalTriplets                                 # Return total number of good triplets
