//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3542

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
      // Function to calculate the minimum number of operations required
      // to transform the input array according to the problem statement
      int minOperations(vector<int>& nums) {
            stack<int> st;  // Stack to maintain a non-decreasing sequence of heights
            int res = 0;    // Result to store total operations count

            // Loop through each number in the array
            for (int n : nums) {
                  // Pop all elements from stack that are greater than current number 'n'
                  // This maintains the non-decreasing order property
                  while (!st.empty() && st.top() > n) {
                        st.pop();
                  }
                  // If current number is positive and either stack is empty or
                  // the top element is not equal to n, increment the operations count
                  if (n > 0 && (st.empty() || st.top() != n)) {
                        res += 1;  // Count adding this new height layer as an operation
                        st.push(n); // Push the current number to stack
                  }
            }

            return res;      // Return total number of operations performed
      }
};
