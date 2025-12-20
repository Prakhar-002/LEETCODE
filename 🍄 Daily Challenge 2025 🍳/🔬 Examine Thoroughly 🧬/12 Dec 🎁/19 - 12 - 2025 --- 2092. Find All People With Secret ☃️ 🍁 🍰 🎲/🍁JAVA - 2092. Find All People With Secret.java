//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2092

//? ⌚ Time complexity ➺ O(m log m + m α(n)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n + m)

class UnionFind {
      private int[] parent;
      private int[] rank;

      public UnionFind(int n) {
            // Initialize parent and rank arrays
            parent = new int[n];
            rank = new int[n];
            for (int i = 0; i < n; ++i) {
                  parent[i] = i;
            }
      }

      public int find(int x) {
            // Find parent of node x. Use Path Compression
            if (parent[x] != x) {
                  parent[x] = find(parent[x]);
            }
            return parent[x];
      }

      public void unite(int x, int y) {
            // Unite two nodes x and y, if they are not already united
            int px = find(x);
            int py = find(y);
            if (px != py) {
                  // Union by Rank Heuristic
                  if (rank[px] > rank[py]) {
                        parent[py] = px;
                  } else if (rank[px] < rank[py]) {
                        parent[px] = py;
                  } else {
                        parent[py] = px;
                        rank[px] += 1;
                  }
            }
      }

      public boolean connected(int x, int y) {
            // Check if two nodes x and y are connected or not
            return find(x) == find(y);
      }

      public void reset(int x) {
            // Reset the initial properties of node x
            parent[x] = x;
            rank[x] = 0;
      }
}

class Solution {
      public List<Integer> findAllPeople(
                  int n,
                  int[][] meetings,
                  int firstPerson) {
            // Sort meetings in increasing order of time
            Arrays.sort(meetings, (a, b) -> a[2] - b[2]);

            // Group Meetings in increasing order of time
            Map<Integer, List<int[]>> sameTimeMeetings = new TreeMap<>();
            for (int[] meeting : meetings) {
                  int x = meeting[0], y = meeting[1], t = meeting[2];
                  sameTimeMeetings
                              .computeIfAbsent(t, k -> new ArrayList<>())
                              .add(new int[] { x, y });
            }

            // Create graph
            UnionFind graph = new UnionFind(n);
            graph.unite(firstPerson, 0);

            // Process in increasing order of time
            for (int t : sameTimeMeetings.keySet()) {
                  // Unite two persons taking part in a meeting
                  for (int[] meeting : sameTimeMeetings.get(t)) {
                        int x = meeting[0], y = meeting[1];
                        graph.unite(x, y);
                  }

                  // If any one knows the secret, both will be connected to 0.
                  // If no one knows the secret, then reset.
                  for (int[] meeting : sameTimeMeetings.get(t)) {
                        int x = meeting[0], y = meeting[1];
                        if (!graph.connected(x, 0)) {
                              // No need to check for y since x and y were united
                              graph.reset(x);
                              graph.reset(y);
                        }
                  }
            }

            // All those who are connected to 0 will know the secret
            List<Integer> ans = new ArrayList<>();
            for (int i = 0; i < n; ++i) {
                  if (graph.connected(i, 0)) {
                        ans.add(i);
                  }
            }
            return ans;
      }
}
