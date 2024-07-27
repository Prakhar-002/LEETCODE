#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 2976

#? ⌚ Time complexity ➺ O(n * m) 👉🏻 m = len(changed array) n = len(target string)

#? 🧺 Space complexity ➺ O(m) 👉🏻 making adjacency list

from collections import defaultdict
import heapq

class Solution:
      def minimumCost(self, source: str, target: str, original: List[str], changed: List[str], cost: List[int]) -> int:
            # make adjacency list 
            adjacency = defaultdict(list) 

            for src, dest, cur_cost in zip(original, changed, cost):
                  # map the src to it's dest and that cost of change
                  adjacency[src].append((dest, cur_cost))

            # this will return the min cost to go tp every possible node 
            # from source in a map 
            def dijkstra(src):
                  # add our self with 0 dist
                  heap = [(0, src)]
                  # make a map for every nei : cost
                  min_cost_map = {}

                  while heap:
                        cost, node = heapq.heappop(heap)
                        if node in min_cost_map:
                              continue

                        # assign node to it's cost
                        min_cost_map[node] = cost

                        # go for every neighbor of source
                        for nei, neiCost in adjacency[node]:
                              heapq.heappush(heap, (cost + neiCost, nei))

                  return min_cost_map

            # we go through the every distinct char of src and find the cost 
            min_cost_map = { ch : dijkstra(ch) for ch in set(source) }

            changingCost = 0
            for src, dest in zip(source, target):
                  # if our dest is not in map 
                  if dest not in min_cost_map[src]:
                        # return -1 as per que
                        return -1
                  # else just add the cost of changing the character
                  changingCost += min_cost_map[src][dest]

            return changingCost

      