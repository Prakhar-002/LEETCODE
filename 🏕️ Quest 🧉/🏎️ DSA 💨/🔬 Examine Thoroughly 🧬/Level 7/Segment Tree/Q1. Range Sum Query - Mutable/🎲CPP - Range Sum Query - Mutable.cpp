//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L7.3 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
using namespace std;

class NumArray {
public:
      int n;
      vector<int> segmentTree;
      
      NumArray(vector<int>& nums) {
            // O(n) initialization
            n = nums.size();
            segmentTree.resize(4 * n);
            buildSegmentTree(0, 0, n - 1, nums);
      }
      
private:
      void buildSegmentTree(int i, int l, int r, vector<int>& nums) {
            // Leaf stores array value
            if (l == r) {
                  segmentTree[i] = nums[l];
                  return;
            }
            
            // Recurse children
            int mid = l + (r - l) / 2;
            buildSegmentTree(2*i+1, l, mid, nums);      // Left
            buildSegmentTree(2*i+2, mid+1, r, nums);    // Right
            
            // Parent sum
            segmentTree[i] = segmentTree[2*i+1] + segmentTree[2*i+2];
      }
      
      void updateSegmentTree(int idx, int val, int i, int l, int r) {
            // Update leaf
            if (l == r) {
                  segmentTree[i] = val;
                  return;
            }
            
            // Find child
            int mid = l + (r - l) / 2;
            if (idx <= mid) {
                  updateSegmentTree(idx, val, 2*i+1, l, mid);
            } else {
                  updateSegmentTree(idx, val, 2*i+2, mid+1, r);
            }
            
            // Propagate up
            segmentTree[i] = segmentTree[2*i+1] + segmentTree[2*i+2];
      }
      
      int querySegmentTree(int start, int end, int i, int l, int r) {
            // No overlap
            if (l > end || r < start) {
                  return 0;
            }

            // Full overlap
            if (l >= start && r <= end) {
                  return segmentTree[i];
            }

            // Partial
            int mid = l + (r - l) / 2;
            return querySegmentTree(start, end, 2*i+1, l, mid) +
                  querySegmentTree(start, end, 2*i+2, mid+1, r);
      }
      
public:
      void update(int index, int val) {
            updateSegmentTree(index, val, 0, 0, n - 1);
      }
      
      int sumRange(int left, int right) {
            return querySegmentTree(left, right, 0, 0, n - 1);
      }
};
