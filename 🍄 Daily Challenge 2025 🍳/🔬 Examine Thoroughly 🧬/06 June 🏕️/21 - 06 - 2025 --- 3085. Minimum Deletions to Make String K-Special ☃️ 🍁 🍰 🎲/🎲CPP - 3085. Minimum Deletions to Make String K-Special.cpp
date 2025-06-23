//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3085

//? ⌚ Time complexity ➺ O(m ^ 2) 👉🏻  m = unique alphabet

//? 🧺 Space complexity ➺ O(m)

#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      int minimumDeletions(string word, int k) {
            unordered_map<char, int> freq;

            // Step 1: Count frequency of each character
            for (char c : word) {
                  freq[c]++;
            }

            int res = word.length();  // Initialize result with worst case

            // Step 2: Try each frequency as target
            for (auto& [_, target] : freq) {
                  int deleted = 0;

                  for (auto& [__, f] : freq) {
                        if (f < target) {
                              deleted += f;  // Remove all if smaller
                        } else if (f > target + k) {
                              deleted += f - (target + k);  // Reduce to allowed max
                        }
                  }

                  res = min(res, deleted);
            }

            return res;
      }
};
