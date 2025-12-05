//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3623

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
      int countTrapezoids(vector<vector<int>>& points) {
            // Count points per y-coordinate (horizontal lines)
            unordered_map<int, int> pointNum;

            // Group by y-coordinate only
            for (auto& point : points) {
                  pointNum[point[1]]++;
            }

            const int MOD = 1000000007;
            long long ans = 0;
            long long totalSum = 0;

            // Process each y-level
            for (auto& pair : pointNum) {
                  int pNum = pair.second;
                  // Horizontal edges = combinations of 2 points = C(pNum, 2)
                  long long edge = (long long) pNum * (pNum - 1) / 2;
                  
                  // Trapezoids = current edges × previous edges
                  ans = (ans + edge * totalSum) % MOD;

                  totalSum = (totalSum + edge) % MOD;
            }

            return ans;
      }
};
