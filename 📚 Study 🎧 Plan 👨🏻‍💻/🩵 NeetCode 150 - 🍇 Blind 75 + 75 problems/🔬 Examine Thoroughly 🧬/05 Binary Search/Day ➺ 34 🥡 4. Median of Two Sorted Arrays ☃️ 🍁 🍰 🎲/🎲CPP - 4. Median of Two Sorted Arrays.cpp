//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 4

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums1 + nums2)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            // Step 1: Merge both vectors into one
            vector<int> merged = nums1;
            merged.insert(merged.end(), nums2.begin(), nums2.end());

            // Step 2: Sort the merged array
            sort(merged.begin(), merged.end());

            // Step 3: Find the median index
            int m = merged.size() / 2;

            // Step 4: If odd, return middle element
            if (merged.size() % 2 != 0) {
                  return (double)merged[m];
            }

            // Step 5: If even, return average of two middle elements
            return (merged[m - 1] + merged[m]) / 2.0;
      }
};
