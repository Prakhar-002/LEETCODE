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
