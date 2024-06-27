#! https://github.com/Prakhar-002/LEETCODE


# Todo 📌 QUESTION NUMBER 1248 

class Solution:
    def numberOfSubarrays(self, nums: List[int], k: int) -> int:
        # 3 pointer sliding window problem
        # making 3 pointer left, middle assign with 0
        left, middle = 0, 0
        odd = 0
        SubArrays = 0

        # 3rd pointer iterate whole array
        for right in range(len(nums)):
            # update odd if we got any odd value
            if nums[right] % 2:
                odd += 1

            # when even we get odd greater then k
            while odd > k:
                # undo the odd value after shifting left pointer by 1
                if nums[left] % 2:
                    odd -= 1
                left += 1
                # and assign middle with left
                middle = left

            # Now the actual part when we got number of odd = k
            if odd == k:
                # we'll update our middle pointer up to that index when we got our first odd value
                while not nums[middle] % 2:
                    middle += 1
                # and add subArrays that can be made is => mid - left + 1
                # cause => [2, 2, 1, 1, 2, 1, 1]
                #          L               R => got 3 odd value
                #          M
                #  Update the pointer m upto first odd comes
                #           L  -  M  -  -  R
                # subArrays that can be made are
                #         [2, 2, 1, 1, 1, 2, 1]
                #         [2, 1, 1, 1, 2, 1]
                #         [1, 1, 1, 2, 1]
                # total 3 subArray that are => (M - L) + 1
                SubArrays += (middle - left) + 1

        return SubArrays
