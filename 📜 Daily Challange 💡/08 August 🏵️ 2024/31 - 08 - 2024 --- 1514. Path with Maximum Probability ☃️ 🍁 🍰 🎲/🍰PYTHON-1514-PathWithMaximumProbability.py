#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1514

#? ⌚ Time complexity ➺ O(n × E) ⚡ n = no. of nodes E = no. of edges 

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def maxProbability(self, n: int, edges: List[List[int]], succProb: List[float], start_node: int, end_node: int) -> float:
            # An array to keep track of the maximum probability to reach each node from the start node
            max_prob = [0.0] * n
            # Initialize the probability of reaching the start node to 1.0
            max_prob[start_node] = 1.0

            # The outer loop runs n-1 times
            # principle similar to the Bellman-Ford algorithm for shortest paths 
            # but here it's used to maximize probabilities
            for _ in range(n - 1):
                  # A boolean flag to keep track of whether any update was made in the current iteration
                  updated = False

                  # For each edge we check probability
                  for j in range(len(edges)):
                        u, v = edges[j]
                        prob = succProb[j]

                        # if traveling through the edge increases 
                        # the probability of reaching the other end of the edge
                        if max_prob[u] * prob > max_prob[v]:
                              # it updates the probability
                              max_prob[v] = max_prob[u] * prob
                              # sets the updated flag to True
                              updated = True

                        # if traveling through the edge increases 
                        # the probability of reaching the other end of the edge
                        if max_prob[v] * prob > max_prob[u]:
                              # it updates the probability
                              max_prob[u] = max_prob[v] * prob
                              # sets the updated flag to True
                              updated = True

                  # If no updates were made in an iteration
                  if not updated:
                        # (no probability can be maximized further) -> break the loop
                        break

            # Returns the maximum probability of reaching the end_node from the start_node
            return max_prob[end_node]

