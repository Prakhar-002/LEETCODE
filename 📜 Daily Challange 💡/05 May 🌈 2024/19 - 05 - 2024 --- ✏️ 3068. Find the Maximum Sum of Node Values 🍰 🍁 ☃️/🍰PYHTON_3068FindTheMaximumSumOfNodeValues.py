class Solution:
    def maximumValueSum(self, nums: List[int], k: int, edges: List[List[int]]) -> int:
        xor_arr = [(n ^ k) - n for n in nums]
        xor_arr.sort(reverse=True)
        res = sum(nums)

        for i in range(0, len(nums), 2):
            if i == len(nums) - 1:
                break

            path_sum = xor_arr[i] + xor_arr[i + 1]

            if path_sum <= 0:
                break

            res += path_sum

        return res