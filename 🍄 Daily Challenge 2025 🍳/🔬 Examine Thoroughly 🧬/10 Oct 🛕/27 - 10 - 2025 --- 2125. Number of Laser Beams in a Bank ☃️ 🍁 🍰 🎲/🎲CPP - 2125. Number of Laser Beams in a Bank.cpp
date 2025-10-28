//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2125

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(bank)

//? 🧺 Space complexity ➺ O(1)   -> m = len(max(bank))

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
      int numberOfBeams(vector<string>& bank) {
            int beams = 0;    // Total beams
            int prev = 0;     // Devices in previous row

            for (const string& s : bank) {
                  int cam = 0;
                  // Count devices in current row
                  for (char ch : s)
                        cam += (ch == '1');
                  if (cam > 0) {
                        beams += prev * cam;
                        prev = cam;
                  }
            }
            return beams;
      }
};
