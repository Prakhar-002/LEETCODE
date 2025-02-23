//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 739

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
      vector<int> dailyTemperatures(vector<int>& temperatures) {
            int n = temperatures.size(); // Get the number of temperatures
            vector<int> answer(n, 0); // Initialize the result vector with zeros
            stack<pair<int, int>> tempStack; // Stack to store (index, temperature)

            // Iterate through the temperatures vector
            for (int i = 0; i < n; i++) {
                  int currTemp = temperatures[i]; // Current day's temperature

                  // Process stack while the current temperature is greater than the top of stack
                  while (!tempStack.empty() && currTemp > tempStack.top().second) {

                        int prevIndex = tempStack.top().first; // Get the index of previous temperature

                        tempStack.pop(); // Remove the previous element from stack

                        answer[prevIndex] = i - prevIndex; // Calculate the days difference
                  }

                  // Push the current temperature with index onto the stack
                  tempStack.push({i, currTemp});
            }

            return answer; // Return the result vector
      }
};
