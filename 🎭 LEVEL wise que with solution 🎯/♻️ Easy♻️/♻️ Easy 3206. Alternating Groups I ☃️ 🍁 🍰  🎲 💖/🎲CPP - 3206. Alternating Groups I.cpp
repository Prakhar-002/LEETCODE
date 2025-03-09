//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3206

// ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(colors)

// ? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      int numberOfAlternatingGroups(vector<int>& colors) {
            int N = colors.size();
            int altGrp = 0;

            // Iterate through each index
            for (int i = 0; i < N; i++) {
                  // Get circular next and next-next indices
                  int next = (i + 1) % N;
                  int nextNext = (i + 2) % N;

                  // Ensure all three adjacent elements are distinct
                  if (colors[i] != colors[next] && colors[next] != colors[nextNext]) {
                        altGrp++;
                  }
            }

            return altGrp;
      }
};
