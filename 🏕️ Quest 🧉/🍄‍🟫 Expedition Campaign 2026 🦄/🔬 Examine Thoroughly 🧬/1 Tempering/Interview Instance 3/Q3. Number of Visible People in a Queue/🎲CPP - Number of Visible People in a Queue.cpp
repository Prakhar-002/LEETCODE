//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1994

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(heights)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
      vector<int> canSeePersonsCount(vector<int> &heights) {
            // Get total number of people (length of heights array)
            int N = heights.size();
            // Initialize result array to store visible count for each person
            vector<int> res(N, 0);

            // Use stack to track heights of people we can potentially see
            stack<int> stk;

            // Iterate from right to left (from back of line to front)
            for (int i = N - 1; i >= 0; i--) {
                  int height = heights[i];
                  int visible = 0;

                  // Pop people from stack who are shorter than current person
                  // Each popped person is visible to current person
                  while (!stk.empty() && height > stk.top()) {
                        visible++;
                        stk.pop();
                  }

                  // If stack not empty, tallest remaining person is also visible
                  if (!stk.empty()) {
                        visible++;
                  }

                  // Store count of visible people for person at index i
                  res[i] = visible;
                  // Push current person's height onto stack for future comparisons
                  stk.push(height);
            }

            return res;
      }
};
