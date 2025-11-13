#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Maths L3 Q3

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n ^ 2)

class Solution:
      @functools.lru_cache(None)    # Cache results to avoid redundant calculations (memoization)
      def rearrangeSticks(self, n, k, mod=10**9 + 7):
            if n == k:
                  return 1    # Base case: only one way when all sticks are visible
            if k == 0:
                  return 0    # Base case: no way if zero sticks visible with positive n

            # Recursive relation:
            # 1) Place the tallest stick at the front, making it visible:
            #    arrange remaining n-1 sticks so that k-1 are visible
            # 2) Place the tallest stick not at the front, so it is hidden:
            #    arrange remaining n-1 sticks so that k remain visible and
            #    multiply by (n-1) because the tallest stick can be placed in
            #    any of the other (n-1) positions
            return (
                  self.rearrangeSticks(n - 1, k - 1) + 
                  self.rearrangeSticks(n - 1, k) * (n - 1)
            ) % mod  # Use modulo to avoid overflow and keep results manageable
