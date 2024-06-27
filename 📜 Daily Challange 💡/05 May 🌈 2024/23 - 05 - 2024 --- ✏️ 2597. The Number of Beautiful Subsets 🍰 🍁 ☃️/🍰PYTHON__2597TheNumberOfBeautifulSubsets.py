#! https://github.com/Prakhar-002/LEETCODE


#Todo 📌 QUESTION NUMBER 2597 


class Solution:

    count = 0

    def is_safe(self, nums, part, j, k):
        for n in part:
            if abs(nums[j] - n) == k:
                return False
        return True

    def beautifulSubsets(self, nums: List[int], k: int) -> int:

        self.count = 0
        part = []

        def subSetArr(i):
            if i >= len(nums):
                self.count = self.count + 1
                return

            if self.is_safe(nums, part, i, k):
                part.append(nums[i])
                subSetArr(i + 1)
                part.pop()

            subSetArr(i + 1)

        subSetArr(0)
        return self.count - 1
