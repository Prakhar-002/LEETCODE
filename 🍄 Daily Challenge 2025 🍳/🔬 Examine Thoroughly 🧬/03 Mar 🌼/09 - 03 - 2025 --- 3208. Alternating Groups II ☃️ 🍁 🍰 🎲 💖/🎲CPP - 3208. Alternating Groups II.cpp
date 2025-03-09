//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3208

//? ⌚ Time complexity ➺ O(n + k) 👉🏻  n = len(colors)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      int numberOfAlternatingGroups(vector<int>& colors, int k) {
            int N = colors.size();  // Total number of elements in the colors vector
            int altGroup = 0;  // Counter for alternating groups of at least length k

            int alt_elem_cnt = 1;  // Count of consecutive alternating elements
            int last_color = colors[0];  // Track the last seen color

            // Step 1: Traverse the colors vector and count alternating sequences
            for (int i = 1; i < N; i++) {
                  if (colors[i] == last_color) {  // Reset count if the same color repeats
                        alt_elem_cnt = 1;
                        last_color = colors[i];
                        continue;
                  }

                  alt_elem_cnt++;  // Increase count for alternating colors

                  if (alt_elem_cnt >= k) {  // If the alternating sequence is long enough
                        altGroup++;
                  }

                  last_color = colors[i];  // Update the last seen color
            }

            // Step 2: Additional check for the first k-1 elements (potential wrap-around)
            for (int i = 0; i < k - 1; i++) {
                  if (colors[i] == last_color) {  // Stop if colors repeat
                        break;
                  }

                  alt_elem_cnt++;  // Extend alternating sequence

                  if (alt_elem_cnt >= k) {  // If still valid, count the group
                        altGroup++;
                  }

                  last_color = colors[i];  // Update last seen color
            }

            return altGroup;  // Return the count of alternating groups of at least k
      }
};
