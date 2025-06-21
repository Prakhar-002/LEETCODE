//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3443

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int maxDistance(String s, int k) {
            int latitude = 0; // Tracks north-south movement (positive for N, negative for S)
            int longitude = 0; // Tracks east-west movement (positive for E, negative for W)
            int ans = 0; // Stores the maximum reachable distance
            int n = s.length();

            for (int i = 0; i < n; i++) {
                  char ch = s.charAt(i);

                  // Update coordinates based on the direction
                  if (ch == 'N')
                        latitude++;
                  else if (ch == 'S')
                        latitude--;
                  else if (ch == 'E')
                        longitude++;
                  else if (ch == 'W')
                        longitude--;

                  int currDist = Math.abs(latitude) + Math.abs(longitude); // Manhattan distance
                  int maxPossible = currDist + 2 * k; // We can change up to k moves, each flip can shift distance by 2

                  // Answer is the max of previous ans and min(max possible, i + 1)
                  ans = Math.max(ans, Math.min(maxPossible, i + 1));
            }

            return ans;
      }
}
