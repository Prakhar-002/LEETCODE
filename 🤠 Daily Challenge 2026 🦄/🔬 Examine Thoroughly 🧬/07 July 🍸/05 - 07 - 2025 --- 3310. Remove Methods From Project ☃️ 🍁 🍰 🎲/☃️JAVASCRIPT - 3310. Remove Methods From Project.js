//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3310

//? ⌚ Time complexity ➺ O(V + E) 

//? 🧺 Space complexity ➺ O(V + E)

var remainingMethods = function(n, k, invocations) {

      // Build adjacency list and track in-degrees
      const adj      = Array.from({length: n}, () => []);
      const inDegree = new Array(n).fill(0);
      const suspicious = new Array(n).fill(false);

      for (const [u, v] of invocations) {
            adj[u].push(v);
            inDegree[v]++;
      }

      // BFS from k to mark all methods reachable from k as suspicious
      const que = [k];
      suspicious[k] = true;
      let head = 0;

      while (head < que.length) {
            const curr = que[head++];
            for (const ngbr of adj[curr]) {
                  inDegree[ngbr]--;
                  if (!suspicious[ngbr]) {
                        suspicious[ngbr] = true;
                        que.push(ngbr);
                  }
            }
      }

      // If any suspicious method is still called by a non-suspicious method,
      // we cannot safely remove the suspicious group
      const cannotRemove = suspicious.some((s, i) => s && inDegree[i] > 0);

      if (cannotRemove) {
            // Return all methods unchanged
            return Array.from({length: n}, (_, i) => i);
      }

      // Return only non-suspicious methods
      return Array.from({length: n}, (_, i) => i).filter(i => !suspicious[i]);
};