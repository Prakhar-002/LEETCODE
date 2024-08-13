#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 39

#? ⌚ Time complexity ➺ O(n * 2 ^ n) 👉🏻  n = len(Candidates)

#? 🧺 Space complexity ➺ O(n * 2 ^ n) 👉🏻 Combinations

class Solution:
      def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
            # array to store all the combinations to add equal to target
            combinations = [] 

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
                  # 2. call the dfs for this cur and on same candidate 
                  dfs(i, cur, total + candidates[i]) # cause we can use one elem unlimited times
                  # 3. pop from cur combination
                  cur.pop()

                  # recursive call when we skip current candidate in cur combination

                  # 1. call the dfs for next candidate
                  dfs(i + 1, cur, total)

            # call our dfs 
            dfs(0, [], 0)

            return combinations
