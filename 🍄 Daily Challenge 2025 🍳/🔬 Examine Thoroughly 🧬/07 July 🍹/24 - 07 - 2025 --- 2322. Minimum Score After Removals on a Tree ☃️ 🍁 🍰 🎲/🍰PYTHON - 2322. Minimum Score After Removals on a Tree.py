#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2322

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n) 

class Solution:
      def calc(self, part1: int, part2: int, part3: int) -> int:
            return max(part1, part2, part3) - min(part1, part2, part3)      #      Calculate score as difference between max and min

      def minimumScore(self, nums: List[int], edges: List[List[int]]) -> int:
            n = len(nums)      #      Total number of nodes

            e = [[] for _ in range(n)]      #      Initialize adjacency list
            for u, v in edges:
                  e[u].append(v)      #      Add v as a neighbor of u
                  e[v].append(u)      #      Add u as a neighbor of v

            total = 0
            for x in nums:
                  total ^= x      #      Compute total XOR of all node values

            res = float("inf")      #      Initialize result as infinity

            def dfs2(x: int, f: int, oth: int, anc: int) -> int:
                  son = nums[x]      #      Start XOR with current node's value
                  for y in e[x]:
                        if y == f:
                              continue      #      Skip parent
                        son ^= dfs2(y, x, oth, anc)      #      XOR with subtree result

                  if f == anc:
                        return son      #      Skip calculation for immediate children

                  nonlocal res
                  res = min(res, self.calc(oth, son, total ^ oth ^ son))      #      Calculate score from three parts
                  return son      #      Return XOR of this subtree

            def dfs(x: int, f: int) -> int:
                  son = nums[x]      #      Start XOR with current node's value
                  for y in e[x]:
                        if y == f:
                              continue      #      Skip parent
                        son ^= dfs(y, x)      #      Recursively compute XOR for subtree

                  for y in e[x]:
                        if y == f:
                              dfs2(y, x, son, x)      #      Call dfs2 to explore second edge removal

                  return son      #      Return total XOR of this subtree

            dfs(0, -1)      #      Start DFS from root node
            return res      #      Return minimum score
