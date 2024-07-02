
#! https://github.com/Prakhar-002/LEETCODE


# Todo 📌 QUESTION NUMBER 350

#? ⌚ Time complexity -> O(n) 👉 given

#? 🧺 Space complexity -> O(n) 👉 using HashSet

class Solution:
      def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
            # making hash set of first array
            firstSet = set(nums1)

            res = []

            # traversing second array
            for n in nums2:
                  # if elem of 2nd array in the first array set
                  if n in firstSet:
                        # add to our res 
                        res.append(n)

            return res
