#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 973

#? ⌚ Time complexity ➺ O(k * log n) 👉🏻  n = len(points)

#? 🧺 Space complexity ➺ O(n) 

import heapq

class Solution:
      def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
            import heapq                            # Import heapq for priority queue (min heap)

            minHeap = []                            # Initialize empty min heap

            for x, y in points:                     # Loop through each point
                  dist = (x ** 2) + (y ** 2)         # Calculate squared distance from origin
                  minHeap.append([dist, x, y])       # Store distance and coordinates

            heapq.heapify(minHeap)                  # Convert list into a min heap

            res = []                                # Result list to store k closest points

            while k > 0:                            # While we still need k points
                  dist, x, y = heapq.heappop(minHeap)  # Pop the closest point from heap
                  res.append([x, y])                # Append only the coordinates to result
                  k -= 1                            # Decrease count

            return res                              # Return final list of k closest points
