#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L7.3 Q2

#? ⌚ Time complexity ➺ O(q log q + n) 👉🏻  q = len(queries)

#? 🧺 Space complexity ➺ O(q) 

from heapq import *

class Solution:
      def leftmostBuildingQueries(self, heights: list[int], queries: list[list[int]]) -> list[int]:
            """
            Find leftmost building index where Bob can jump from Alice's building.
            Jump condition: heights[alice] < heights[bob] OR heights[bob] >= heights[current]
            Process queries online using heap for deferred cases.
            """
            # Store results for each query (-1 if impossible)
            result = [-1] * len(queries)  
            
            # Deferred queries grouped by bob building index
            qs = [[] for _ in range(len(heights))] 

            # Process all queries initially
            for index, (alice, bob) in enumerate(queries):
                  # Normalize: alice <= bob for consistency
                  if alice > bob:
                        alice, bob = bob, alice

                  # Case 1: Directly solvable (immediate jump possible)
                  if alice == bob or heights[alice] < heights[bob]:
                        result[index] = bob  # Jump directly to bob
                  else:
                        # Case 2: Deferred - need taller building later
                        # Store (heights[alice], original_query_index) at bob's list
                        qs[bob].append((heights[alice], index))  

            # Min-heap for deferred queries: (required_height, query_index)
            min_heap = []

            # Process buildings from left to right
            for index, height in enumerate(heights):
                  # Add all deferred queries waiting for this building (bob=index)
                  for q in qs[index]:
                        heappush(min_heap, q)  # Push (alice_height, query_index)
                  
                  # Process satisfied queries from heap
                  while min_heap and min_heap[0][0] < height:
                        # Pop smallest unsatisfied query
                        _, query_index = heappop(min_heap)  
                        # This building satisfies: alice_height < height
                        result[query_index] = index  

            return result
