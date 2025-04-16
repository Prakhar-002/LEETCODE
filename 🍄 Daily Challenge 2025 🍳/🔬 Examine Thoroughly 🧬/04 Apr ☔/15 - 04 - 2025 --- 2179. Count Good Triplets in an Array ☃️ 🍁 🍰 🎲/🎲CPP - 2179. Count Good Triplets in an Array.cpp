//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2179

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
      long long goodTriplets(vector<int>& nums1, vector<int>& nums2) {
            int n = nums1.size();                                  // Length of input arrays
            long long totalTriplets = 0;                            // Store total good triplets

            vector<int> posInNums1(n);                              // Map value -> index in nums1
            for (int i = 0; i < n; ++i) {
                  posInNums1[nums1[i]] = i;                         // Store index for each value
            }

            vector<int> transformed(n);                             // Store transformed version of nums2
            for (int i = 0; i < n; ++i) {
                  transformed[i] = posInNums1[nums2[i]];            // Replace nums2 values with indices from nums1
            }

            vector<int> sorted;                                     // This will act like a sorted list

            // Traverse transformed array from right to left
            for (int i = n - 1; i >= 0; --i) {
                  int current = transformed[i];                     // Current value in reverse

                  // Use binary search to find how many elements are < current
                  auto it = lower_bound(sorted.begin(), sorted.end(), current);
                  int countSmaller = it - sorted.begin();           // Count of values less than current
                  int countGreater = sorted.size() - countSmaller;  // Count of values greater than current

                  // Use formula to count valid good triplets:
                  // (#greater on right) * (#smaller on left)
                  totalTriplets += 1LL * countGreater * (current - countSmaller);

                  // Insert current at the correct position to maintain sorted order
                  sorted.insert(it, current);
            }

            return totalTriplets;
      }
};
