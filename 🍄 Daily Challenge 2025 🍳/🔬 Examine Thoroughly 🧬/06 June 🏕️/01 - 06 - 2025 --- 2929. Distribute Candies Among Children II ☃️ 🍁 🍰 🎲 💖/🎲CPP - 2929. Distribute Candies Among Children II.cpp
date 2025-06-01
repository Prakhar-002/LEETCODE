//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2929

// ? ⌚ Time complexity ➺ O(n) 

// ? 🧺 Space complexity ➺ O(1)

class Solution {
      public:
            long long distributeCandies(int n, int limit) {
                  long long ways = 0;                                             // Initialize total valid ways
      
                  for (int i = 0; i <= std::min(limit, n); i++) {                 // i = candies to first child
      
                        if (n - i > 2 * limit) {                                  // If rest is too much for B+C, skip
                              continue;
                        }
      
                        int minVal = std::max(0, n - i - limit);                  // Minimum B needs to leave enough for C
                        int maxVal = std::min(n - i, limit);                      // Max B can take due to limits
      
                        ways += (long long)(maxVal - minVal + 1);                 // Add valid (B, C) combinations
                  }
      
                  return ways;                                                    // Return total combinations
            }
      };
      