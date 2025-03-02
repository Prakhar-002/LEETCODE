#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2570

# ? ⌚ Time complexity ➺ O(n + m + k log k) 👉🏻  n = len(nums1) m = len(nums2)

# ? 🧺 Space complexity ➺ O(n + m)          👉🏻 k = No. of unique Ids

from collections import defaultdict
from typing import List

class Solution:
      def mergeArrays(self, nums1: List[List[int]], nums2: List[List[int]]) -> List[List[int]]:
            # Dictionary to store the sum of values for each unique ID
            id_to_sum = defaultdict(int)

            # Process first array and add values to the corresponding IDs
            for id, value in nums1:
                  id_to_sum[id] += value 

            # Process second array and add values to the corresponding IDs
            for id, value in nums2:
                  id_to_sum[id] += value

            # Initialize result list to store merged arrays
            merged_array = []

            # Sort IDs and prepare the final merged result
            for id in sorted(id_to_sum.keys()):
                  merged_array.append([id, id_to_sum[id]])

            # Return the merged array
            return merged_array

#!----------------------------------------------------------------------------------------------------------

# ? ⌚ Time complexity ➺ O(n + m)   👉🏻  n = len(nums1) 

# ? 🧺 Space complexity ➺ O(n + m)  👉🏻 m = len(nums2)

from typing import List 

class Solution:
      def mergeArrays(self, nums1: List[List[int]], nums2: List[List[int]]) -> List[List[int]]:
            # Lengths of both arrays
            n, m = len(nums1), len(nums2)

            # Pointers for both arrays
            i, j = 0, 0

            # Final merged result array
            merged_array = []

            # Merge process (two-pointer technique)
            while i < n and j < m:
                  # If IDs match, sum the values and add to result
                  if nums1[i][0] == nums2[j][0]:
                        merged_array.append([nums1[i][0], nums1[i][1] + nums2[j][1]])
                        i += 1
                        j += 1
                  # If nums1 ID is smaller, add it directly
                  elif nums1[i][0] < nums2[j][0]:
                        merged_array.append(nums1[i])
                        i += 1
                  # If nums2 ID is smaller, add it directly
                  else:
                        merged_array.append(nums2[j])
                        j += 1

            # Add any leftovers from nums1
            while i < n:
                  merged_array.append(nums1[i])
                  i += 1

            # Add any leftovers from nums2
            while j < m:
                  merged_array.append(nums2[j])
                  j += 1

            # Return merged result
            return merged_array
