//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2322

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {

      int res = Integer.MAX_VALUE;      //      Initialize result with maximum value

      public int minimumScore(int[] nums, int[][] edges) {
            int n = nums.length;      //      Number of nodes
            List<List<Integer>> e = new ArrayList<>();      //      Adjacency list

            for (int i = 0; i < n; i++) {
                  e.add(new ArrayList<>());      //      Initialize each node's list
            }

            for (int[] v : edges) {
                  e.get(v[0]).add(v[1]);      //      Add edge from v[0] to v[1]
                  e.get(v[1]).add(v[0]);      //      Add edge from v[1] to v[0]
            }

            int sum = 0;
            for (int x : nums) {
                  sum ^= x;      //      Compute total XOR of all node values
            }

            dfs(0, -1, nums, e, sum);      //      Start DFS from root node
            return res;      //      Return minimum score found
      }

      private int calc(int part1, int part2, int part3) {
            return (
                  Math.max(part1, Math.max(part2, part3)) -      //      Get max of 3 parts
                  Math.min(part1, Math.min(part2, part3))        //      Subtract min of 3 parts
            );
      }

      private int dfs(int x, int f, int[] nums, List<List<Integer>> e, int sum) {
            int son = nums[x];      //      Start with value at node x

            for (int y : e.get(x)) {
                  if (y == f) {
                        continue;      //      Skip parent node
                  }
                  son ^= dfs(y, x, nums, e, sum);      //      Recurse and XOR with subtree result
            }

            for (int y : e.get(x)) {
                  if (y == f) {
                        dfs2(y, x, son, x, nums, e, sum);      //      Try second cut starting at child
                  }
            }

            return son;      //      Return XOR of subtree rooted at x
      }

      private int dfs2(
            int x,
            int f,
            int oth,
            int anc,
            int[] nums,
            List<List<Integer>> e,
            int sum
      ) {
            int son = nums[x];      //      Start with value at node x

            for (int y : e.get(x)) {
                  if (y == f) {
                        continue;      //      Skip parent
                  }
                  son ^= dfs2(y, x, oth, anc, nums, e, sum);      //      XOR subtree
            }

            if (f == anc) {
                  return son;      //      Avoid calculation for direct children
            }

            res = Math.min(res, calc(oth, son, sum ^ oth ^ son));      //      Update result with new score
            return son;      //      Return XOR of subtree
      }
}
