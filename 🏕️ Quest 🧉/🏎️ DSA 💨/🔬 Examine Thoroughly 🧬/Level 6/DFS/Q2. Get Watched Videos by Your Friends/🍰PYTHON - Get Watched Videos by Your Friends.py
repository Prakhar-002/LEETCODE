#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L6.4 Q2

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from collections import deque, Counter
from typing import List

class Solution: 
      def watchedVideosByFriends(self, watchedVideos: List[List[str]], friends: List[List[int]],
                                    id: int, level: int) -> List[str]:
            n = len(friends)  # Number of people

            # Step 1: BFS queue and visited array to track people at each level
            queue = deque([id])  # Start from given person
            explored = [False] * n  # Visited tracker
            explored[id] = True

            # Step 2: BFS level-order traversal until reaching target level
            while queue and level > 0:
                  size = len(queue)  # Process current level completely
                  for _ in range(size):
                        idx = queue.popleft()  # Current person
                        for f in friends[idx]:  # All friends of current person
                              if not explored[f]:
                                    queue.append(f)  # Add to next level
                                    explored[f] = True  # Mark as visited
                  level -= 1  # Move to next level

            # Step 3: Queue now contains exactly friends at target 'level' distance
            # Count videos watched by these friends
            count = Counter()
            while queue:
                  idx = queue.popleft()
                  for video in watchedVideos[idx]:
                        count[video] += 1  # Frequency count

            # Step 4: Sort videos by (frequency ascending, then lexicographical)
            watched = sorted(count.keys(), key=lambda v: (count[v], v))

            return watched
