#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3578

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n) 

class Solution:
      def countPartitions(self, nums: List[int], k: int) -> int:
            n = len(nums)
            mod = 10**9 + 7  # Modulus for answers due to potential large count

            # dp[i] = number of valid partitions for prefix nums[:i]
            dp = [0] * (n + 1)  
            dp[0] = 1  # Base case: empty prefix counts as 1 way

            # prefix[i] = sum of dp[0] + ... + dp[i], for quick range sums
            prefix = [0] * (n + 1)
            prefix[0] = 1

            cnt = SortedList()  # Sorted multiset to maintain current window elements

            j = 0  # Left pointer of sliding window
            for i in range(n):
                  cnt.add(nums[i])  # Add current element to window

                  # Shrink window from the left until max-min ≤ k
                  while j <= i and cnt[-1] - cnt[0] > k:
                        cnt.remove(nums[j])
                        j += 1

                  # Calculate dp[i+1] as sum of previous dp values from j to i
                  # Because all partitions ending between j and i are valid
                  dp[i + 1] = (prefix[i] - (prefix[j - 1] if j > 0 else 0)) % mod

                  # Update prefix sums for fast cumulative sum queries
                  prefix[i + 1] = (prefix[i] + dp[i + 1]) % mod

            # dp[n] gives number of valid partitions of entire nums array
            return dp[n]
