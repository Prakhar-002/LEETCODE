//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.1 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
      int longestConsecutive(vector<int>& nums) {
            // unordered_set for O(1) average lookups
            unordered_set<int> hashSet(nums.begin(), nums.end());

            int longest = 0;  // Maximum consecutive sequence length

            // Iterate only through unique numbers
            for (int n : hashSet) {
                  // n is sequence start if n-1 doesn't exist
                  if (hashSet.find(n - 1) == hashSet.end()) {
                        int curStreak = 1;  // Current sequence length
                        int cur = n;        // Current position

                        // Follow consecutive numbers upward
                        while (hashSet.find(cur + 1) != hashSet.end()) {
                              curStreak++;
                              cur++;
                        }

                        // Track maximum streak
                        longest = max(longest, curStreak);
                  }
            }

            return longest;
      }
};
