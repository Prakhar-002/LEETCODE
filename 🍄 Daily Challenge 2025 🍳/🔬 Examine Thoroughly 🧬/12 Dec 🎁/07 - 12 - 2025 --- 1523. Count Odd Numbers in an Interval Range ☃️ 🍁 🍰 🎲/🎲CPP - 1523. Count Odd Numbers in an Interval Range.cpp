//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1523

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      int countOdds(int low, int high) {
            // Odds from 1 to high: (high + 1) / 2
            // Odds from 1 to low-1: low / 2  
            // Difference gives odds in [low, high]
            return (high + 1) / 2 - (low / 2);
      }
};
