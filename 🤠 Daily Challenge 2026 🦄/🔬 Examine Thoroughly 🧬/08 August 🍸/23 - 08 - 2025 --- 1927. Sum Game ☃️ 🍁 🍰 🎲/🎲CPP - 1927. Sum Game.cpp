//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3622

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <string>

class Solution {
public:
      bool sumGame(string num) {
            int leftSum = 0, rightSum = 0;
            int leftQue = 0, rightQue = 0;
            int n = num.size();

            // Calculate digit sums and '?' counts on both halves
            for (int i = 0; i < n; ++i) {
                  if (i < n / 2) {
                        if (num[i] == '?') {
                              leftQue++;
                        } else {
                              leftSum += num[i] - '0';
                        }
                  } else {
                        if (num[i] == '?') {
                              rightQue++;
                        } else {
                              rightSum += num[i] - '0';
                        }
                  }
            }

            // An odd total number of '?' guarantees an Alice win
            if ((leftQue + rightQue) % 2 == 1) {
                  return true;
            }

            // Check if Bob can balance the game with optimal pairing (9 per pair of '?')
            int left = 2 * leftSum + 9 * leftQue;
            int right = 2 * rightSum + 9 * rightQue;

            return left != right;
      }
};