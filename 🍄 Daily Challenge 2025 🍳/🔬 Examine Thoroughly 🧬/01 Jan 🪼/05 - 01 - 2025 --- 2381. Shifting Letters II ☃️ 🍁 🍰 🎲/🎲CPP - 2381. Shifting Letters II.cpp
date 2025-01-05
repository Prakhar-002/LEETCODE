//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2381

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
      string shiftingLetters(string s, vector<vector<int>>& shifts) {
            // Create a difference array to track shift operations
            vector<int> diff(s.length() + 1, 0);

            // Populate the difference array based on the shifts
            for (const auto& shift : shifts) {
                  int l = shift[0], r = shift[1], d = shift[2];
                  // If direction is 1 (right shift), increase diff[r + 1] and decrease diff[l]
                  // If direction is 0 (left shift), decrease diff[r + 1] and increase diff[l]
                  diff[r + 1] += d == 1 ? 1 : -1;
                  diff[l] += d == 1 ? -1 : 1;
            }

            int shift = 0;
            // Convert string characters to numerical values (a -> 0, ..., z -> 25)
            vector<int> nums(s.length());
            for (size_t i = 0; i < s.length(); ++i) {
                  nums[i] = s[i] - 'a';
            }

            // Apply the cumulative shifts in reverse order
            for (int i = diff.size() - 1; i > 0; --i) {
                  // Add the current value in diff to the cumulative shift
                  shift += diff[i];

                  // Adjust the character value using the cumulative shift
                  nums[i - 1] = (nums[i - 1] + shift % 26 + 26) % 26;
            }

            // Convert the numerical values back to characters
            for (size_t i = 0; i < nums.size(); ++i) {
                  s[i] = 'a' + nums[i];
            }

            // Return the final shifted string
            return s;
      }
};
