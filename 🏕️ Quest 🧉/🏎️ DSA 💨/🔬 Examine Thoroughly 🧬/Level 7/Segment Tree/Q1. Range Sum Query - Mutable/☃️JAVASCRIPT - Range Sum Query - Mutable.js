//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L7.3 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class NumArray {
      constructor(nums) {
            // O(n) build time
            this.n = nums.length;
            this.segmentTree = new Array(4 * this.n).fill(0);
            this.buildSegmentTree(0, 0, this.n - 1, nums);
      }

      buildSegmentTree(i, l, r, nums) {
            // Leaf node
            if (l === r) {
                  this.segmentTree[i] = nums[l];
                  return;
            }

            // Internal node
            let mid = Math.floor(l + (r - l) / 2);
            this.buildSegmentTree(2 * i + 1, l, mid, nums);      // Left
            this.buildSegmentTree(2 * i + 2, mid + 1, r, nums);    // Right

            // Sum children
            this.segmentTree[i] = this.segmentTree[2 * i + 1] + this.segmentTree[2 * i + 2];
      }

      updateSegmentTree(index, val, i, l, r) {
            // Leaf update
            if (l === r) {
                  this.segmentTree[i] = val;
                  return;
            }

            // Child traversal
            let mid = Math.floor(l + (r - l) / 2);
            if (index <= mid) {
                  this.updateSegmentTree(index, val, 2 * i + 1, l, mid);
            } else {
                  this.updateSegmentTree(index, val, 2 * i + 2, mid + 1, r);
            }

            // Update parent
            this.segmentTree[i] = this.segmentTree[2 * i + 1] + this.segmentTree[2 * i + 2];
      }

      querySegmentTree(start, end, i, l, r) {
            // No overlap
            if (l > end || r < start) {
                  return 0;
            }

            // Full overlap
            if (l >= start && r <= end) {
                  return this.segmentTree[i];
            }

            // Partial overlap
            let mid = Math.floor(l + (r - l) / 2);
            let left = this.querySegmentTree(start, end, 2 * i + 1, l, mid);
            let right = this.querySegmentTree(start, end, 2 * i + 2, mid + 1, r);
            return left + right;
      }

      update(index, val) {
            this.updateSegmentTree(index, val, 0, 0, this.n - 1);
      }

      sumRange(left, right) {
            return this.querySegmentTree(left, right, 0, 0, this.n - 1);
      }
}
