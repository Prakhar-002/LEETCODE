
#! https://github.com/Prakhar-002/LEETCODE


# Todo 📌 QUESTION NUMBER 46

#? ⌚ Time complexity -> O(n! * n^2) 👉 length of nums array

#? 🧺 Space complexity -> O(n! * n) 👉 length of nums array

class Solution: 
      def permute(self, nums: List[int]) -> List[List[int]]:
            # base case
            if len(nums) == 0:
                  return [[]]

            # call for n - 1 elem except 0th elem
            perms = self.permute(nums[1:])
            res = []

            # for every sequence we get
            for perm in perms:
                  # go to every position of sequence and insert nums[0]
                  for i in range(len(perm) + 1):
                        # make a copy of our perms cause we will not use our original perm
                        perm_copy = perm.copy()
                        # insert at every position our nums[0]
                        perm_copy.insert(i, nums[0])
                        # append in our res
                        res.append(perm_copy)

            return res