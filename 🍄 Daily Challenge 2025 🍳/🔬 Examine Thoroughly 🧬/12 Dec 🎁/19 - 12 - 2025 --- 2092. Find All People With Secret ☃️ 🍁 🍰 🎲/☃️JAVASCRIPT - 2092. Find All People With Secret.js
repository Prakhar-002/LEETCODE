//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2092

//? ⌚ Time complexity ➺ O(m log m + m α(n)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n + m)

class UnionFind {
      constructor(n) {
            // Initialize parent array: each node is its own parent initially
            this.parent = Array.from({ length: n }, (_, i) => i);
            // Initialize rank array for union by rank heuristic
            this.rank = Array(n).fill(0);
      }

      find(x) {
            // Find root of x with path compression
            if (this.parent[x] !== x) {
                  this.parent[x] = this.find(this.parent[x]);
            }
            return this.parent[x];
      }

      union(x, y) {
            // Union two nodes x and y if they are not already in the same set
            const parentX = this.find(x);
            const parentY = this.find(y);
            if (parentX !== parentY) {
                  // Union by rank: attach smaller tree under root of larger tree
                  if (this.rank[parentX] > this.rank[parentY]) {
                        this.parent[parentY] = parentX;
                  } else if (this.rank[parentX] < this.rank[parentY]) {
                        this.parent[parentX] = parentY;
                  } else {
                        this.parent[parentY] = parentX;
                        this.rank[parentX]++;
                  }
            }
      }

      connected(x, y) {
            // Check if x and y are in the same connected component
            return this.find(x) === this.find(y);
      }

      reset(x) {
            // Reset node x to its initial state (disconnected from others)
            this.parent[x] = x;
            this.rank[x] = 0;
      }
}

var findAllPeople = function (n, meetings, firstPerson) {
      // Create Union-Find structure for n people
      const graph = new UnionFind(n);
      // Initially, person 0 and firstPerson know the secret
      graph.union(firstPerson, 0);

      // Group meetings by time: time → [[x, y], ...]
      const sameTimeMeetings = new Map();
      for (const meeting of meetings) {
            const [x, y, t] = meeting;
            if (!sameTimeMeetings.has(t)) {
                  sameTimeMeetings.set(t, []);
            }
            sameTimeMeetings.get(t).push([x, y]);
      }

      // Process meetings in increasing order of time
      for (const [t, meetings] of [...sameTimeMeetings.entries()].sort((a, b) => a[0] - b[0])) {
            // Step 1: Unite all pairs in meetings at time t
            for (const meeting of meetings) {
                  const [x, y] = meeting;
                  graph.union(x, y);
            }

            // Step 2: For each meeting at time t, if no one knows the secret, reset both nodes
            for (const meeting of meetings) {
                  const [x, y] = meeting;
                  // If x is not connected to 0, then y is also not connected (since they are united)
                  if (!graph.connected(x, 0)) {
                        // Reset x and y so they don’t carry the secret forward
                        graph.reset(x);
                        graph.reset(y);
                  }
            }
      }

      // All people connected to 0 know the secret
      const ans = [];
      for (let i = 0; i < n; ++i) {
            if (graph.connected(i, 0)) {
                  ans.push(i);
            }
      }

      return ans;
};
