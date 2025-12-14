//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L7.3 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class NumArray {
      private int n;
      private int[] segmentTree;

      public NumArray(int[] nums) {
            // Initialize segment tree for O(log n) range queries
            n = nums.length;
            segmentTree = new int[4 * n];
            buildSegmentTree(0, 0, n - 1, nums); // Build from root index 0
      }

      private void buildSegmentTree(int i, int l, int r, int[] nums) {
            /**
             * Recursively build complete binary tree.
             * i: tree index, l/r: array range covered by node i
             */
            // Leaf node: store array value
            if (l == r) {
                  segmentTree[i] = nums[l];
                  return;
            }

            // Internal node: split range
            int mid = l + (r - l) / 2;
            buildSegmentTree(2 * i + 1, l, mid, nums); // Left child
            buildSegmentTree(2 * i + 2, mid + 1, r, nums); // Right child

            // Parent stores sum of children
            segmentTree[i] = segmentTree[2 * i + 1] + segmentTree[2 * i + 2];
      }

      private void updateSegmentTree(int index, int val, int i, int l, int r) {
            /**
             * Update leaf value and propagate up to root.
             */
            // Reached target leaf
            if (l == r) {
                  segmentTree[i] = val;
                  return;
            }

            // Traverse to correct child
            int mid = l + (r - l) / 2;
            if (index <= mid) {
                  updateSegmentTree(index, val, 2 * i + 1, l, mid); // Left subtree
            } else {
                  updateSegmentTree(index, val, 2 * i + 2, mid + 1, r); // Right subtree
            }

            // Update current node from children
            segmentTree[i] = segmentTree[2 * i + 1] + segmentTree[2 * i + 2];
      }

      private int querySegmentTree(int start, int end, int i, int l, int r) {
            /**
             * Range sum query [start,end].
             * Returns 0 for no overlap (sum identity).
             */
            // No overlap: neutral element
            if (l > end || r < start) {
                  return 0;
            }

            // Total overlap: return precomputed sum
            if (l >= start && r <= end) {
                  return segmentTree[i];
            }

            // Partial overlap: combine children
            int mid = l + (r - l) / 2;
            int left = querySegmentTree(start, end, 2 * i + 1, l, mid);
            int right = querySegmentTree(start, end, 2 * i + 2, mid + 1, r);
            return left + right;
      }

      public void update(int index, int val) {
            // Public API: update from root
            updateSegmentTree(index, val, 0, 0, n - 1);
      }

      public int sumRange(int left, int right) {
            // Public API: query from root
            return querySegmentTree(left, right, 0, 0, n - 1);
      }
}
