#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 15

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def threeSum(self, nums: List[int]) -> List[List[int]]:
            # variable to store the all triplets that sum to zero
            triplets = []

            # sort the nums for avoiding duplicates
            # and makes it easier to use the two-pointer technique effectively
            nums.sort()

            # iterate through the list
            # picks an element `num` along with its index `idx`
            for idx, num in enumerate(nums):
                  # skip elements that are the same as the previous element
                  if idx > 0 and num == nums[idx - 1]:
                        continue

                  left, right = idx + 1, len(nums) - 1
                  while left < right:
                        #  calculates the sum of the numbers at the current positions
                        threeSum = num + nums[left] + nums[right]

                        # if sum is > 0 shift the right pointer
                        if threeSum > 0:
                              right -= 1

                        # if sum is < 0 shift the left pointer
                        elif threeSum < 0:
                              left += 1

                        # `threeSum == 0` 
                        else :
                              # add triplet 
                              triplets.append([num, nums[left], nums[right]])
                              # inc the left pointer for next triplet
                              left += 1

                              #  Subsequently, the left pointer is moved to skip identical elements
                              while nums[left] == nums[left - 1] and left < right:
                                    # avoid duplicates in the triplet list.
                                    left += 1

            return triplets
