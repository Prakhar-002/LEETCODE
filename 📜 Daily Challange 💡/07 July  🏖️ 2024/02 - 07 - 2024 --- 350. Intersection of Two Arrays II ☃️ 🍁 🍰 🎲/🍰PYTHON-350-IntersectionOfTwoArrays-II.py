
#! https://github.com/Prakhar-002/LEETCODE


# Todo 📌 QUESTION NUMBER 350

#? ⌚ Time complexity -> O(n) 👉 given

#? 🧺 Space complexity -> O(n) 👉 using HashMap


from typing import Counter


class Solution:
      def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
            # make a map of num : freq
            mp = Counter(nums1)

            res = []

            # traverse 2nd array
            for n in nums2:
                  #  if n contain in map
                  if( mp[n] > 0):
                        # add it to oue array res
                        res.append(n)
                        #  dec the freq of n from map
                        mp[n] -= 1

            return res

