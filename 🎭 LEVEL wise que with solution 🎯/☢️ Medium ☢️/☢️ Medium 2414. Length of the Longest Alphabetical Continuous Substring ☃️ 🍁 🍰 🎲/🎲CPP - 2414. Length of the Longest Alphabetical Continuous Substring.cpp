//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2414

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <string>
#include <algorithm> // For std::max

class Solution {
public:
      int longestContinuousSubstring(std::string s) {
            // If the string is empty, no substring can be formed.
            if (s.empty()) {
                  return 0;
            }

            // `total` stores the maximum length found so far, initialized to 1.
            int total = 1;
            // `count` tracks the length of the current continuous substring.
            int count = 1;

            // Iterate from the second character to the end of the string.
            for (size_t i = 1; i < s.length(); ++i) {
                  // Check if the current character is the next letter after the previous one.
                  // In C++, `char` is an integral type, allowing direct comparison.
                  if (s[i] == s[i - 1] + 1) {
                        // If the streak continues, increment the current count.
                        count++;
                        // Update the overall maximum length if needed.
                        total = std::max(count, total);
                  }
                  else {
                        // If the streak is broken, reset the current count to 1.
                        count = 1;
                  }
            }

            // Return the maximum length found.
            return total;
      }
};
