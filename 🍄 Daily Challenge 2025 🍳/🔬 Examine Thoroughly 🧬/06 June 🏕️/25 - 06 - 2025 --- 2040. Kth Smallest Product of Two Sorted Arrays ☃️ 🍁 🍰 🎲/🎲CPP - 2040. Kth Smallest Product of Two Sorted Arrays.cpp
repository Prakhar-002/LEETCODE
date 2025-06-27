//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2040

//? ⌚ Time complexity ➺ O(n1 log n2 * log C) 👉🏻  n1 = len(nums1)

//? 🧺 Space complexity ➺ O(1) -> n2 = len(nums2)

class Solution {
public:
      // Helper function to count how many products nums1[i] * nums2[j] are <= v
      int f(vector<int> &nums2, long long x1, long long v) {
            int n2 = nums2.size();
            int left = 0, right = n2 - 1;

            // Binary search on nums2
            while (left <= right) {
                  int mid = (left + right) / 2;

                  // Case 1: x1 >= 0: we want to count nums2[mid] * x1 <= v
                  // Case 2: x1 < 0: products decrease as nums2 increases,
                  // so we want nums2[mid] * x1 > v to shrink the window
                  if ((x1 >= 0 && 1LL * nums2[mid] * x1 <= v) ||
                      (x1 < 0 && 1LL * nums2[mid] * x1 > v)) {
                        left = mid + 1;
                  }
                  else {
                        right = mid - 1;
                  }
            }

            // Return count of valid products based on sign of x1
            if (x1 >= 0) {
                  return left;
            }
            else {
                  return n2 - left;
            }
      }

      long long kthSmallestProduct(vector<int> &nums1, vector<int> &nums2, long long k) {
            int n1 = nums1.size();

            // Binary search on the answer space: product range from -1e10 to 1e10
            long long left = -1e10, right = 1e10;

            while (left <= right) {
                  long long mid = (left + right) / 2;
                  long long count = 0;

                  // Count how many products are <= mid
                  for (int i = 0; i < n1; i++) {
                        count += f(nums2, nums1[i], mid);
                  }

                  // If not enough products are <= mid, search right half
                  if (count < k) {
                        left = mid + 1;
                  }
                  else {
                        right = mid - 1;
                  }
            }

            // The kth smallest product is the first one with count ≥ k
            return left;
      }
};
