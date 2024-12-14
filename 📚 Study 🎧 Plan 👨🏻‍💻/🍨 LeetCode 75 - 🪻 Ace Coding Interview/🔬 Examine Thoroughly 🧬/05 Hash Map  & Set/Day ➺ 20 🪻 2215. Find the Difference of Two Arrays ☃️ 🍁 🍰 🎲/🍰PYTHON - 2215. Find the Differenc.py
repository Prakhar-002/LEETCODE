#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2215

#? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = len(nums) n1 = unique in nums1

#? 🧺 Space complexity ➺ O(n1, n2)  -> m = len(nums) n2 = unique in nums2

class Solution: 
      def findDifference(self, nums1, nums2):
            # Create sets to store unique elements from both arrays
            nums1_set = set(nums1)
            nums2_set = set(nums2)

            # Find elements unique to nums1
            unique_to_nums1 = [num for num in nums1_set if num not in nums2_set]

            # Find elements unique to nums2
            unique_to_nums2 = [num for num in nums2_set if num not in nums1_set]

            # Return the result as a list of lists
            return [unique_to_nums1, unique_to_nums2]
