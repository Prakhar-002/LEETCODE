#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 1334

#? ⌚ Time complexity -> O(n^2 log n) 👉🏻 Dijkstra algorithm

#? 🧺 Space complexity -> O(n) 👉🏻 Building adjacency list 

from collections import defaultdict
import heapq

class Solution:
      def findTheCity(self, n: int, edges: List[List[int]], distanceThreshold: int) -> int:
            # make adjacency list for easy lookup of connected cities and distances.
            adjacency = defaultdict(list)

            for city_one, city_two, dist in edges:
                  # Each city's list contains tuples of connected cities and their corresponding distances
                  adjacency[city_one].append((city_two, dist))
                  adjacency[city_two].append((city_one, dist))

            # dijkstra algo too find the shortest paths from a given city to all other cities.
            def dijkstra(city):
                  heap = [(0, city)] # dist src
                  # The `visit` set keeps track of visited cities to avoid cycles
                  visit = set()

                  while heap:
                        # repeatedly extracts the city with the minimum distance from the priority queue
                        cityDist, node = heapq.heappop(heap)

                        # if already visited continue
                        if node in visit:
                              continue

                        # add to our visit set
                        visit.add(node)

                        for nei, dist in adjacency[node]:
                              # calc the dist from our src to neighbor
                              nei_dist = dist + cityDist
                              # if it is less than distanceThreshold
                              if nei_dist <= distanceThreshold:
                                    # add to our priority queue
                                    heapq.heappush(heap, (nei_dist, nei))

                  # return the all cities that can be reached with distanceThreshold except ourself
                  return len(visit) - 1

            #These track the city ID with the minimum number of reachable neighbors 
            # and the count of these neighbors, respectively
            city, min_neighbor = -1, n

            # call our dijkstra algo for every city
            for curCity in range(n):
                  # find the number of cities within the distance threshold
                  neighbor = dijkstra(curCity)
                  # updates `city` and `min_neighbor` if city with the fewest reachable neighbors.
                  if neighbor <= min_neighbor:
                        city, min_neighbor = curCity, neighbor

            # city that can reach the fewest number of cities within the `distanceThreshold
            return city