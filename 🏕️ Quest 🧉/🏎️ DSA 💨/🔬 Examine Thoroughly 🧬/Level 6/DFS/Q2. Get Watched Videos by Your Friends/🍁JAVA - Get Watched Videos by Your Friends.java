//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.4 Q2

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public List<String> watchedVideosByFriends(List<List<String>> watchedVideos, int[][] friends,
                  int id, int level) {
            int n = friends.length; // Total number of people

            // Step 1: BFS queue and visited array
            Queue<Integer> queue = new LinkedList<>();
            boolean[] explored = new boolean[n];

            queue.offer(id); // Start BFS from given person
            explored[id] = true;

            // Step 2: Level-order BFS traversal
            // and Proceed to next level
            while (!queue.isEmpty() && level-- > 0) {
                  int size = queue.size(); // Current level size
                  for (int i = 0; i < size; i++) {
                        int idx = queue.poll(); // Process person at current level
                        for (int f : friends[idx]) { // All friends
                              if (!explored[f]) {
                                    queue.offer(f); // Add to next level
                                    explored[f] = true;
                              }
                        }
                  }
            }

            // Step 3: Queue contains friends exactly at target 'level'
            Map<String, Integer> count = new HashMap<>();
            while (!queue.isEmpty()) {
                  int idx = queue.poll();
                  for (String video : watchedVideos.get(idx)) {
                        count.put(video, count.getOrDefault(video, 0) + 1);
                  }
            }

            // Step 4: Sort by frequency (asc), then lexicographical (asc)
            List<String> watched = new ArrayList<>(count.keySet());
            watched.sort((a, b) -> count.get(a) == count.get(b) ? a.compareTo(b) : count.get(a) - count.get(b));

            return watched;
      }
}
