//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2215

//? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = len(nums) n1 = unique in nums1

//? 🧺 Space complexity ➺ O(n1, n2)  -> m = len(nums) n2 = unique in nums2

#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
      vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
            // Create sets to store unique elements from both arrays
            unordered_set<int> nums1Set(nums1.begin(), nums1.end());
            unordered_set<int> nums2Set(nums2.begin(), nums2.end());

            // Find elements unique to nums1
            vector<int> uniqueToNums1;
            for (int num : nums1Set) {
                  if (nums2Set.find(num) == nums2Set.end()) {
                        uniqueToNums1.push_back(num);
                  }
            }

            // Find elements unique to nums2
            vector<int> uniqueToNums2;
            for (int num : nums2Set) {
                  if (nums1Set.find(num) == nums1Set.end()) {
                        uniqueToNums2.push_back(num);
                  }
            }

            // Return the result as a vector of vectors
            return {uniqueToNums1, uniqueToNums2};
      }
};
