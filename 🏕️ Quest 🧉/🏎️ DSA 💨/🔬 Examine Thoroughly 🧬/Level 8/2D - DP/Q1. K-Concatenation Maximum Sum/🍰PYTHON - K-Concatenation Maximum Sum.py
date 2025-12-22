#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L8.3 Q1

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def kConcatenationMaxSum(self, arr: List[int], k: int) -> int:
            # If all elements are <= 0, maximum subarray sum is 0
            if max(arr) <= 0:
                  return 0

            # sm = total sum of one copy of arr
            sm = sum(arr)
            # ct = current sum of subarray ending at current element
            ct = 0
            # mx = maximum subarray sum seen so far
            mx = 0

            # If k > 1, we consider two copies of arr (arr + arr)
            # This is enough to capture the best subarray that wraps from the end of one copy to the start of the next
            if k > 1:
                  arr = arr + arr  # concatenate arr with itself

            # Kadane's algorithm on the extended array
            for n in arr:
                  # Either extend the current subarray or start a new one from 0
                  ct = max(ct + n, 0)
                  # Update the maximum subarray sum seen so far
                  mx = max(mx, ct)

            # If k <= 1, we only have one copy, so answer is mx
            # If k > 1 and sm > 0, we can add (k-2) full copies of the array in the middle
            #   because the best subarray can wrap around and include the middle copies
            # Example: best subarray = [suffix of first copy] + [full middle copies] + [prefix of last copy]
            result = mx + (k - 2) * sm * (k > 1) * (sm > 0)
            return result % 1000000007
