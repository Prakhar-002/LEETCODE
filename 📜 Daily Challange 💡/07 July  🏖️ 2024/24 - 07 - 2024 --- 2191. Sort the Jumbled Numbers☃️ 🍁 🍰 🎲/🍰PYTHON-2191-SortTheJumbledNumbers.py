#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 2191

#? ⌚ Time complexity -> O(NLogN) 👉🏻 Build in sort

#? 🧺 Space complexity -> O(n) 👉🏻 making pairs array

class Solution:
      def sortJumbled(self, mapping: List[int], nums: List[int]) -> List[int]:
            pairs = []

            # Go through the whole arrye
            for i, num in enumerate(nums):
                  # To convert the number acc to mapped array 
                  mapNum = 0
                  # for extracting the exact number not the reversed of it
                  base = 1

                  # handle the case where num is 0
                  if num == 0:
                        mapNum = mapping[num]

                  # extract the num acc to map array
                  while num > 0:
                        # get the last digit
                        digit = num % 10
                        # divide by 10
                        num //= 10
                        # multiply with base and add the num given in mapping
                        mapNum += base * mapping[digit]
                        # inc base by * 10
                        base *= 10

                  # we got the mapNum and index of it
                  # we have to sort it base on the map Number 
                  # if they are same then we will sort acc to the index 
                  pairs.append((mapNum, i))

            # this will sort by mapNum first and then acc to idx
            pairs.sort()

            # extract the real value by idx from nums
            return [nums[pair[1]] for pair in pairs]