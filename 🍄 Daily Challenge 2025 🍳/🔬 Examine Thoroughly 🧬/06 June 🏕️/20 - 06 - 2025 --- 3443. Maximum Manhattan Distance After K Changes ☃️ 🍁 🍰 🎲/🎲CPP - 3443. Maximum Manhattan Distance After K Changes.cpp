//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3443

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int maxDistance(string s, int k) {
            int latitude = 0;  // Tracks north-south movement
            int longitude = 0; // Tracks east-west movement
            int ans = 0;       // Stores maximum reachable distance
            int n = s.size();

            for (int i = 0; i < n; ++i) {
                  char ch = s[i];

                  // Update coordinates based on direction
                  if (ch == 'N')
                        latitude++;
                  else if (ch == 'S')
                        latitude--;
                  else if (ch == 'E')
                        longitude++;
                  else if (ch == 'W')
                        longitude--;

                  int currDist = abs(latitude) + abs(longitude); // Manhattan distance
                  int maxPossible = currDist + 2 * k;            // Use up to 2k changes

                  // Update answer
                  ans = max(ans, min(maxPossible, i + 1));
            }

            return ans;
      }
};
