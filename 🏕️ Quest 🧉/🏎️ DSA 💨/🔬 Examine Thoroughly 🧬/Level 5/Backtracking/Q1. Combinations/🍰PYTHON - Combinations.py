#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Maths L3 Quiz Q1

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(k) 

class Solution:
      def combine(self, n: int, k: int) -> List[List[int]]:
            res = []   # List to store all valid combinations
            comb = []  # Temporary list to hold the current combination being formed

            def backtracking(start):
                  # If the current combination has reached the size k, add a copy to results
                  if len(comb) == k:
                        res.append(comb[:])  # Append a snapshot copy
                        return  # Backtrack

                  # Iterate from current start to n to explore all candidates
                  for num in range(start, n + 1):
                        comb.append(num)         # Choose the current number
                        backtracking(num + 1)    # Explore further with incremented start to avoid repeats
                        comb.pop()               # Undo choice, backtrack to try the next number

            backtracking(1)  # Start building combinations from number 1
            return res       # Return all collected combinations