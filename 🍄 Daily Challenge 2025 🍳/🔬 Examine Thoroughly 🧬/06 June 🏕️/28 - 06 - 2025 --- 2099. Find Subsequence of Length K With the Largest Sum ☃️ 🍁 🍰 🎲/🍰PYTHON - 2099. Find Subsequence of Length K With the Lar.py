#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2099

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def maxSubsequence(self, nums: List[int], k: int) -> List[int]:
            # Pair each number with its original index
            indexed = list(enumerate(nums))

            # Get the k largest elements by value (with index to preserve order later)
            top_k = sorted(indexed, key=lambda x: -x[1])[:k]

            # Sort those top k elements back by their original index to keep subsequence order
            top_k.sort()

            # Extract the values only
            return [val for idx, val in top_k]
