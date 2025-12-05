//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2211

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
      int countCollisions(string directions) {
            // Remove leading L's (escape left) and trailing R's (escape right)
            size_t start = directions.find_first_not_of('L');
            if (start == string::npos)
                  return 0; // All L's → no collision

            size_t end = directions.find_last_not_of('R');
            string dirs = directions.substr(start, end - start + 1);

            // Count non-"S" characters (all will collide)
            // "S" cars already stopped from previous collisions
            int collisions = 0;
            for (char c : dirs) {
                  if (c != 'S')
                        collisions++;
            }

            return collisions;
      }
};
