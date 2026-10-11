#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2333

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums1)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def minSumSquareDiff(self, nums1: list[int], nums2: list[int], k1: int, k2: int) -> int:
            n = len(nums1)

            # Calculate absolute differences and track the maximum difference
            diff = [abs(nums1[i] - nums2[i]) for i in range(n)]
            max_diff = max(diff) if diff else 0

            # freq[d] stores the frequency of indices having difference d
            freq = [0] * (max_diff + 1)
            for d in diff:
                  freq[d] += 1

            # Total operations available across nums1 and nums2
            k = k1 + k2

            # Greedily reduce the largest differences down toward 0
            for curr_diff in range(max_diff, 0, -1):
                  if k <= 0:
                        break

                  # Determine how many differences of size curr_diff can be decreased by 1
                  opr_count = min(freq[curr_diff], k)

                  freq[curr_diff] -= opr_count
                  freq[curr_diff - 1] += opr_count
                  k -= opr_count

            # Compute the sum of squared differences
            res = 0
            for d in range(1, max_diff + 1):
                  res += freq[d] * d * d

            return res