#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2127

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def maximumInvitations(self, favorite: List[int]) -> int:
            # 1. Find the longest cycle in the graph

            N = len(favorite)  # Total number of employees
            longest_cycle = 0  # Stores the length of the longest cycle
            visit = [False] * N  # Boolean array to track visited nodes
            length_2_cycles = []  # Stores all cycles of length 2

            # Detect all cycles in the graph
            for i in range(N):
                  if visit[i]:
                        continue  # Skip if the node is already visited

                  start, cur = i, i  # Start traversal from the current node
                  cur_set = set()  # Set to store nodes in the current traversal path

                  # Traverse the graph until a cycle is detected or path ends
                  while not visit[cur]:
                        visit[cur] = True  # Mark the current node as visited
                        cur_set.add(cur)  # Add the current node to the path
                        cur = favorite[cur]  # Move to the next node

                  # Check if the current node forms a cycle
                  if cur in cur_set:
                        length = len(cur_set)  # Length of the current traversal path

                        # Remove nodes outside the cycle
                        while start != cur:
                              length -= 1
                              start = favorite[start]

                        # Update the longest cycle length
                        longest_cycle = max(longest_cycle, length)

                        # Store length-2 cycles
                        if length == 2:
                              length_2_cycles.append([cur, favorite[cur]])

            # 2. Find the sum of the longest non-circular chains connected to cycles

            # Build an inverted graph (reverse edges)
            from collections import defaultdict, deque
            inverted = defaultdict(list)  # Stores nodes that point to a given node

            for dst, src in enumerate(favorite):
                  inverted[src].append(dst)

            # BFS to find the longest chain leading to a specific node
            def bfs(src, parent):
                  q = deque([(src, 0)])  # Queue for BFS (node, chain length)
                  max_length = 0  # Stores the maximum chain length

                  while q:
                        node, length = q.popleft()

                        # Skip the parent node to avoid revisiting
                        if node == parent:
                              continue

                        max_length = max(max_length, length)  # Update maximum length

                        # Add neighbors to the queue
                        for nei in inverted[node]:
                              q.append((nei, length + 1))

                  return max_length  # Return the longest chain length

            chain_sum = 0  # Stores the sum of chains connected to length-2 cycles

            # For each length-2 cycle, calculate the sum of the longest chains
            for n1, n2 in length_2_cycles:
                  chain_sum += bfs(n1, n2) + bfs(n2, n1) + 2  # Add 2 for the cycle itself

            # Return the maximum of the longest cycle or chain sum
            return max(chain_sum, longest_cycle)
