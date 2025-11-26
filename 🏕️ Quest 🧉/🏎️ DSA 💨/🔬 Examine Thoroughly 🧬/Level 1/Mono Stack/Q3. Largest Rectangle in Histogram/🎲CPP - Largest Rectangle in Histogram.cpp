//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 84

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(heights)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      int largestRectangleArea(vector<int>& heights) {
            int n = heights.size();
            int maxArea = 0;                        // Variable to store max area
            stack<int> st;                          // Stack to store indices

            for (int i = 0; i <= n; ++i) {
                  // Use 0 as sentinel value at the end
                  int currHeight = (i == n) ? 0 : heights[i];

                  // While current bar is less than the top of the stack
                  while (!st.empty() && currHeight < heights[st.top()]) {
                        int height = heights[st.top()];
                        st.pop();

                        // Calculate width
                        int width = st.empty() ? i : i - st.top() - 1;

                        // Calculate area and update maxArea
                        maxArea = max(maxArea, height * width);
                  }

                  // Push current index
                  st.push(i);
            }

            return maxArea;
      }
};