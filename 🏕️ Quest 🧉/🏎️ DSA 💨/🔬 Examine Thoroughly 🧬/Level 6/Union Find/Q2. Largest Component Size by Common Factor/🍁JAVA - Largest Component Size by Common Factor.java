//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.1 Q2

//? ⌚ Time complexity ➺ O(N × √M × α(M) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m)  -> M = max(nums), α = union func

import java.util.*;

class Solution {
      // Path compression: find root parent of x with path compression
      private int find(int x, int[] parent) {
            if (parent[x] == -1) {
                  return x;  // x is root
            }
            // Recursively find root and compress path
            parent[x] = find(parent[x], parent);
            return parent[x];
      }

      // Union by linking: connect two nodes by their roots
      private void union(int x, int y, int[] parent) {
            int xp = find(x, parent);  // Find root of x
            int yp = find(y, parent);  // Find root of y
            if (xp != yp) {
                  // Link y's root to x's root (simple union by arbitrary)
                  parent[yp] = xp;
            }
      }

      public int largestComponentSize(int[] nums) {
            int maxNum = 0;
            for (int num : nums) {
                  maxNum = Math.max(maxNum, num);
            }
            
            // parent[i] = -1 if i is root, else parent[i] = parent node
            int[] parent = new int[maxNum + 1];
            Arrays.fill(parent, -1);

            // Step 1: Connect numbers that share common factors ≥ 2
            for (int num : nums) {
                  // Connect num to all its factors
                  for (int k = 2; k * k <= num; k++) {
                        if (num % k == 0) {
                              // Union with divisor k
                              union(num, k, parent);
                              // Union with quotient num/k
                              union(num, num / k, parent);
                        }
                  }
            }

            // Step 2: Count size of largest connected component
            Map<Integer, Integer> componentSize = new HashMap<>();
            int maxCount = 0;

            for (int num : nums) {
                  int root = find(num, parent);  // Find component root
                  componentSize.put(root, componentSize.getOrDefault(root, 0) + 1);
                  maxCount = Math.max(maxCount, componentSize.get(root));
            }

            return maxCount;
      }
}
