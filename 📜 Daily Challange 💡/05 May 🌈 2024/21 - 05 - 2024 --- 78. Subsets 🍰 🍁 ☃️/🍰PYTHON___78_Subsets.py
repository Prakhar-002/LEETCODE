#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 78

class Solution:
    def solver(self, arr, idx, temp, result):
        if idx == len(arr):
            result.append([n for n in temp])
            return

        temp.append(arr[idx])
        self.solver(arr, idx + 1, temp, result)
        temp.pop()
        self.solver(arr, idx + 1, temp, result)

    def subsets(self, nums: List[int]) -> List[List[int]]:
        result = []
        temp = []
        self.solver(nums, 0, temp, result)
        return result


class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        subset = []
        res = []

        def dfs(i):
            # Base case: Reached the end of the input, add the current subset to the result.
            if i >= len(nums):
                res.append(subset[:])  # append a copy, very important!
                return

            # Include nums[i] in the subset.
            subset.append(nums[i])
            dfs(i + 1)

            # Exclude nums[i] from the subset (backtracking).
            subset.pop()
            dfs(i + 1)

        dfs(0)  # start with the first index

        return res
