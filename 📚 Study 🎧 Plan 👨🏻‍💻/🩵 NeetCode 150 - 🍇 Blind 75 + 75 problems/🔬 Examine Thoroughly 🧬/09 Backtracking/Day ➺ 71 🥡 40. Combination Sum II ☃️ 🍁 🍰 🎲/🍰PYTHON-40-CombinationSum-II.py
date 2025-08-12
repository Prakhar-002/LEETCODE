#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 40

#? ⌚ Time complexity ➺ O(n * 2 ^ n) 👉🏻  n = len(Candidates)

#? 🧺 Space complexity ➺ O(n * 2 ^ n) 👉🏻 Combinations

from typing import List

class Solution:
      def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
            # array to store all the combinations to add equal to target
            combinations = []

            # first we'll sort the candidates to avoid duplicate
            candidates.sort()

            # recursive function
            # `i` -> for index
            # `cur` -> current sequence 
            def dfs(i, cur, total):
                  # if our total is equal to target add this in comb..
                  if total == target:
                        combinations.append(cur.copy())
                        return

                  # if total is > target and index out of bound
                  if total > target or i == len(candidates):
                        # just return from there
                        return

                  # recursive call when we add current candidate in cur combination

                  #  1. add candidate in cur combination
                  cur.append(candidates[i])
                  # 2. call the dfs for this cur
                  dfs(i + 1, cur, total + candidates[i])
                  # 3. pop from cur combination
                  cur.pop()

                  # recursive call when we skip current candidate in cur combination

                  # 1. loop and skip the all candidate with same value [1, 1, 1, 1, 2]
                  while i + 1 < len(candidates) and candidates[i] == candidates[i + 1]:
                        i += 1
                  # 2. call the dfs for next candidate
                  dfs(i + 1, cur, total)

            # call our dfs 
            dfs(0, [], 0)

            return combinations