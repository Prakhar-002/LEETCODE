//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 135

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      int candy(vector<int>& ratings) {
            int n = ratings.size();

            // Initialize all candies to 1
            vector<int> candies(n, 1);

            // Pass 1: Left to right
            for (int i = 1; i < n; i++) {
                  // If current rating is greater than the previous
                  if (ratings[i] > ratings[i - 1]) {
                        // Give more candy than the previous child
                        candies[i] = candies[i - 1] + 1;
                  }
            }

            // Pass 2: Right to left
            int total = candies[n - 1]; // Start total with last child's candy
            for (int i = n - 2; i >= 0; i--) {
                  // If current rating is greater than the next
                  if (ratings[i] > ratings[i + 1]) {
                        // Update current candy to max of current or next + 1
                        candies[i] = max(candies[i], candies[i + 1] + 1);
                  }
                  total += candies[i];
            }

            return total;
      }
};