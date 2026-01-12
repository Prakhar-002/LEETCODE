//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Software Design L5 Q1

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Node {
      /**
       * Segment Tree Node representing range [lx, rx)
       * @param {number} lx - left boundary (inclusive)
       * @param {number} rx - right boundary (exclusive) 
       */
      constructor(lx = 0, rx = 0) {
            this.is_lazy = false;     // Flag for pending lazy propagation
            this.lazy = 0;            // Lazy value to propagate (0=covered, 1=uncovered)
            this.sum = 0;             // Total covered length in this range
            this.lx = lx;             // Left boundary
            this.rx = rx;             // Right boundary (exclusive)
            this.left = null;         // Left child node
            this.right = null;        // Right child node
      }
}

class SegTree {
      /**
       * Dynamic Segment Tree for range updates/queries on [0, 1e9]
       * Uses lazy propagation for O(log N) updates/queries
       */
      constructor() {
            // Root covers entire universe [0, 1e9)
            this.root = new Node(0, 1e9);
      }

      propagate(node) {
            /**
             * Push lazy value down to this node and its children
             * Updates sum and marks children for lazy propagation
             */
            if (!node || !node.is_lazy)
                  return;

            // Apply lazy value: sum = length * coverage (0 or 1)
            node.sum = (node.rx - node.lx) * node.lazy;

            // If not leaf node, propagate to children (lazy propagation)
            if (node.rx - node.lx > 1) {
                  // Create children on-demand (dynamic segment tree)
                  if (!node.left)
                        node.left = new Node(node.lx, (node.lx + node.rx) >> 1);
                  if (!node.right)
                        node.right = new Node((node.lx + node.rx) >> 1, node.rx);

                  // Mark children as lazy and set their lazy value
                  node.left.is_lazy = true;
                  node.right.is_lazy = true;
                  node.left.lazy = node.lazy;
                  node.right.lazy = node.lazy;
            }

            // Clear this node's lazy flag
            node.is_lazy = false;
            node.lazy = 0;
      }

      update(l, r, val, node = this.root) {
            /**
             * Range update: set coverage to `val` (0 or 1) on [l, r)
             * @param {number} l - left boundary
             * @param {number} r - right boundary (exclusive)
             * @param {number} val - coverage value (0=uncovered, 1=covered)
             */
            if (!node)
                  return;

            this.propagate(node);  // Push down pending updates first

            // No overlap: exit early
            if (l >= node.rx || r <= node.lx)
                  return;

            // Total overlap: apply lazy update
            if (l <= node.lx && r >= node.rx) {
                  node.lazy = val;
                  node.is_lazy = true;
                  this.propagate(node);  // Apply immediately for correct sum
                  return;
            }

            // Partial overlap: recurse on children
            if (!node.left)
                  node.left = new Node(node.lx, (node.lx + node.rx) >> 1);
            if (!node.right)
                  node.right = new Node((node.lx + node.rx) >> 1, node.rx);

            this.update(l, r, val, node.left);
            this.update(l, r, val, node.right);

            // Update sum from children
            node.sum = node.left.sum + node.right.sum;
      }

      query(l, r, node = this.root) {
            /**
             * Query covered length on [l, r)
             * Returns total length if fully covered
             */
            if (!node || l >= node.rx || r <= node.lx)
                  return 0;

            this.propagate(node);  // Ensure node is up-to-date

            // Total overlap: return precomputed sum
            if (l <= node.lx && r >= node.rx)
                  return node.sum;

            // Partial overlap: sum children
            return this.query(l, r, node.left) + this.query(l, r, node.right);
      }
}

class RangeModule {
      /**
       * LeetCode 715. Range Module using Segment Tree
       * Handles addRange, queryRange, removeRange on [0, 1e9] in O(log N)
       */
      constructor() {
            this.seg_tree = new SegTree();
      }

      addRange(left, right) {
            /**
             * Mark [left, right) as covered (set coverage=1)
             * Merges automatically via segment tree
             */
            this.seg_tree.update(left, right, 1);
      }

      queryRange(left, right) {
            /**
             * Check if [left, right) is completely covered
             * Returns true if covered length == total length
             */
            return this.seg_tree.query(left, right) == right - left;
      }

      removeRange(left, right) {
            /**
             * Mark [left, right) as uncovered (set coverage=0)
             * Splits intervals automatically via segment tree
             */
            this.seg_tree.update(left, right, 0);
      }
}
