//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L3.3 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      int waysToMakeFair(vector<int>& nums) {
            int n = nums.size();

            // Total sum of elements at even indices
            int totalEven = 0;
            // Total sum of elements at odd indices
            int totalOdd = 0;

            for (int i = 0; i < n; ++i) {
                  if (i % 2 == 0) {
                        totalEven += nums[i];
                  } else {
                        totalOdd += nums[i];
                  }
            }

            // Prefix sums for elements before current index
            int prefixEven = 0;
            int prefixOdd = 0;

            int count = 0; // Number of indices that make array fair when removed

            for (int i = 0; i < n; ++i) {
                  int num = nums[i];

                  // Remove current element from its respective total sum
                  if (i % 2 == 0) {
                        totalEven -= num;   // current even index removed from even total
                  } else {
                        totalOdd -= num;    // current odd index removed from odd total
                  }

                  // After removing nums[i], elements after i shift left and flip parity
                  int newEvenSum = prefixEven + totalOdd; // even prefix + odd suffix
                  int newOddSum = prefixOdd + totalEven;  // odd prefix + even suffix

                  if (newEvenSum == newOddSum) {
                        count++;
                  }

                  // Update prefix sums for next iteration
                  if (i % 2 == 0) {
                        prefixEven += num;
                  } else {
                        prefixOdd += num;
                  }
            }

            return count;
      }
};
