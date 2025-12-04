//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L5.2 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(k)

#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
      bool containsNearbyDuplicate(vector<int>& nums, int k) {
            unordered_set<int> window;  // Sliding window set
            int l = 0;

            for (int r = 0; r < nums.size(); r++) {
                  // Shrink window if exceeds k distance
                  if (r - l > k) {
                        window.erase(nums[l]);
                        l++;
                  }

                  // Check if current element already exists in window
                  if (window.count(nums[r])) {
                        return true;  // Duplicate found
                  }

                  window.insert(nums[r]);
            }

            return false;
      }
};
