//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3160

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(queries)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
      vector<int> queryResults(int limit, vector<vector<int>>& queries) {
            vector<int> result; // Stores the number of unique colors after each query
            
            unordered_map<int, int> colorMap; // Tracks the count of each color
            unordered_map<int, int> ballMap;  // Maps each ball to its current color

            // Process each query (ball, color) pair
            for (const auto& query : queries) {
                  int ball = query[0];
                  int color = query[1];

                  // If the ball is already present, remove its previous color mapping
                  if (ballMap.find(ball) != ballMap.end()) {
                        int prevColor = ballMap[ball]; // Get the previous color of the ball
                        colorMap[prevColor]--; // Decrease count of previous color
                        
                        // If the previous color count reaches zero, remove it from the map
                        if (colorMap[prevColor] == 0) {
                              colorMap.erase(prevColor);
                        }
                  }

                  // Update the ball's color to the new one
                  ballMap[ball] = color;
                  
                  // Increase the count of the new color
                  colorMap[color]++;  

                  // Append the number of unique colors to the result list
                  result.push_back(colorMap.size());
            }

            return result;  // Return the list of unique color counts after each query
      }
};
