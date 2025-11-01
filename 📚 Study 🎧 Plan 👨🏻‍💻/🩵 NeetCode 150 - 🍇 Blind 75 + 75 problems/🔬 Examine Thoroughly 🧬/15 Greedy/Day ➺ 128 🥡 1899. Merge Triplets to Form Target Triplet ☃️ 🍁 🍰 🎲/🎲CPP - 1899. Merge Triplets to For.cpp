//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1899

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(triplets)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
      /**
       * Returns true if target triplet can be formed by merging given triplets.
       * Each triplet must not exceed target components.
       * Tracks indices matched with target values.
       */
      bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
            unordered_set<int> good;

            for (const auto& t : triplets) {
                  // Discard triplets exceeding target in any component
                  if (t[0] > target[0] || t[1] > target[1] || t[2] > target[2]) {
                        continue;
                  }

                  // Mark indices where triplet matches target value
                  for (int i = 0; i < 3; i++) {
                        if (t[i] == target[i]) {
                              good.insert(i);
                        }
                  }
            }
            // True iff all positions matched
            return good.size() == 3;
      }
};
