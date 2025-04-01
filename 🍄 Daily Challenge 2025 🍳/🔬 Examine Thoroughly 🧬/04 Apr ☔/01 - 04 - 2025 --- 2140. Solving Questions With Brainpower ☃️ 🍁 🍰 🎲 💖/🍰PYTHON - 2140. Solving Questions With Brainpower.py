#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2140

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(questions)

#? 🧺 Space complexity ➺ O(n)

from typing import List

class Solution:
      def mostPoints(self, questions: List[List[int]]) -> int:
            N = len(questions)  # Total number of questions
            cache = [0] * N  # DP array to store max points from each index

            # Traverse the questions in reverse order (bottom-up DP)
            for i in reversed(range(N)):
                  points, brainpower = questions[i]  # Extract points and brainpower needed

                  next_que = i + 1 + brainpower  # Index of the next available question

                  # Option 1: Solve this question and add future possible points
                  choose = points + (cache[next_que] if next_que < N else 0)

                  # Option 2: Skip this question and move to the next one
                  skip = cache[i + 1] if i + 1 < N else 0 

                  # Store the maximum points possible from this question onward
                  cache[i] = max(choose, skip)

            return cache[0]  # Return max points possible starting from index 0


#!----------------------------------------------------------------------------------------- 

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(questions)

#? 🧺 Space complexity ➺ O(n)

#* Recursion Solution 

class Solution:
      def mostPoints(self, questions: List[List[int]]) -> int:
            cache = [0] * len(questions)  # DP cache to store results for subproblems

            # Helper function to calculate max points using recursion
            def backtrack(i):
                  # Base case: If index goes out of bounds, return 0
                  if i >= len(questions):
                        return 0

                  # If already computed, return cached result
                  if cache[i]:
                        return cache[i]

                  # Extract question points and brainpower (skipping power)
                  points, brainpower = questions[i]

                  # Two choices:
                  # 1. Skip the current question and move to the next
                  skip = backtrack(i + 1)

                  # 2. Solve this question, earn points, and skip `brainpower` questions
                  choose = points + backtrack(i + brainpower + 1)

                  # Store the maximum of both choices in cache
                  cache[i] = max(skip, choose)

                  return cache[i]

            return backtrack(0)  # Start recursion from the first question
