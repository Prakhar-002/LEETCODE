//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.4 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <string>
using namespace std;

class Solution {
public:
      int repeatedStringMatch(string A, string B) {
            // Minimum times A must be repeated so that its length is >= length of B
            int q = ( (int)B.size() - 1 ) / (int)A.size() + 1;

            // Try q repetitions and q+1 repetitions of A
            for (int i = 0; i < 2; ++i) {
                  string repeated;
                  repeated.reserve(A.size() * (q + i));  // Reserve capacity for efficiency

                  // Build A repeated (q + i) times
                  for (int t = 0; t < q + i; ++t) {
                        repeated += A;
                  }

                  // Check if B is a substring of repeated
                  if (repeated.find(B) != string::npos) {
                        return q + i;   // Return repetition count
                  }
            }

            // If B never appears as a substring, return -1
            return -1;
      }
};
