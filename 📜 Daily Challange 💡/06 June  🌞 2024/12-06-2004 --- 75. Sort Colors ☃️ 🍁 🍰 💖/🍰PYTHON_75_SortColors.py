class Solution:
      def sortColors(self, nums: List[int]) -> None:
            # Two pointers start and end pointer
            st = 0
            end = len(nums) - 1

            i = 0

            while(i < len(nums)):
                  # If we found 0 we'll shift it in starting of array
                  if st != i and nums[i] == 0:
                        nums[i], nums[st] = nums[st], nums[i]
                        st += 1

                  # if we found 2 we'll shift it at end of array
                  elif end > i and nums[i] == 2:
                        nums[i], nums[end] = nums[end], nums[i]
                        end -= 1

                  # if we found 1 we'll inc pointer by one
                  else:
                        i += 1
