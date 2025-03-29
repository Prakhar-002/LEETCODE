#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2818

# ? ⌚ Time complexity ➺ O(N * sqrt(M) + N log N + k log N)

# ? 🧺 Space complexity ➺ O(n)  👉🏻  n = len(nums)

from heapq import heapify, heappop
from math import sqrt
from typing import List

class Solution:
      def maximumScore(self, nums: List[int], k: int) -> int:
            N = len(nums)
            MOD = 10 ** 9 + 7  # Modulo to prevent overflow
            maxScore = 1  # Final answer initialized to 1

            # Step 1: Compute Prime Scores for Each Number
            prime_scores = []
            for n in nums:
                  score = 0
                  for f in range(2, int(sqrt(n)) + 1):  # Check divisibility by numbers up to sqrt(n)
                        if n % f == 0:
                              score += 1
                              while n % f == 0:
                                    n = n // f  # Remove all occurrences of factor f

                  if n >= 2:  # If n is still greater than 2, it's prime
                        score += 1

                  prime_scores.append(score)  # Store the prime factor count for this number

            # Step 2: Compute Left and Right Boundaries for Each Index
            left_bound = [-1] * N  # Left nearest element with greater prime score
            right_bound = [N] * N  # Right nearest element with greater prime score

            stack = []  # Stack to keep indexes in decreasing order of scores

            for i, s in enumerate(prime_scores):
                  while stack and prime_scores[stack[-1]] < s:
                        index = stack.pop()
                        right_bound[index] = i  # Set right boundary

                  if stack:
                        left_bound[i] = stack[-1]  # Set left boundary

                  stack.append(i)  # Push current index onto stack

            # Step 3: Use a Max Heap to Process Elements in Descending Order
            min_heap = [(-n, i) for i, n in enumerate(nums)]  # Max heap with negative values
            heapify(min_heap)  # Convert list into a heap

            while k > 0:
                  n, index = heappop(min_heap)  # Get the max number
                  n = -n  # Convert back to positive
                  score = prime_scores[index]

                  left_cnt = index - left_bound[index]  # Number of elements to the left
                  right_cnt = right_bound[index] - index  # Number of elements to the right

                  count = left_cnt * right_cnt  # Possible operations using this number
                  operations = min(count, k)  # Use as many operations as possible

                  # Multiply result by `n^operations` under modulo
                  maxScore = (maxScore * pow(n, operations, MOD)) % MOD

                  k -= operations  # Reduce remaining operations

            return maxScore  # Return the final maximum score

