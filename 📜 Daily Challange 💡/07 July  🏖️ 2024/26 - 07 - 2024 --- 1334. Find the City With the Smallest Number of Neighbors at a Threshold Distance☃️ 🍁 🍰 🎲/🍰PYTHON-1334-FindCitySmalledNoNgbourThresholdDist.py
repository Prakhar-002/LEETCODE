#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 1334

#? ⌚ Time complexity -> O(n^2 log n) 👉🏻 Build in sort

#? 🧺 Space complexity -> O(n) 👉🏻 Building adjacency list 

# https://github.com/Prakhar-002/LEETCODE

# ⌚ Time complexity -> O(n^2 log n) -> Build in sort

#  Space complexity -> O(n) -> Building adjacency list 

from collections import defaultdict
import heapq

class Solution:
      def findTheCity(self, n: int, edges: List[List[int]], distanceThreshold: int) -> int:
            # make adjacency list 
            adjacency = defaultdict(list)

            for city_one, city_two, dist in edges:
                  # append v1's list v2 and visa versa
                  adjacency[city_one].append((city_two, dist))
                  adjacency[city_two].append((city_one, dist))

            # dijkstra algo
            def dijkstra(city):
                  heap = [(0, city)] # dist src
                  visit = set()

                  while heap:
                        cityDist, node = heapq.heappop(heap)
                        if node in visit:
                              continue

                        visit.add(node)
                        for nei, dist in adjacency[node]:
                              nei_dist = dist + cityDist
                              if nei_dist <= distanceThreshold:
                                    heapq.heappush(heap, (nei_dist, nei))

                  return len(visit) - 1

            # city = with smallest neighbors
            city, min_neighbor = -1, n

            # call our dijkstra algo for every city
            for curCity in range(n):
                  neighbor = dijkstra(curCity)
                  if neighbor <= min_neighbor:
                        city, min_neighbor = curCity, neighbor

            return city