//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 22

//? ⌚ Time complexity ➺ O(4 ^ n / √n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      vector<string> generateParenthesis(int n) {
            vector<string> res;      // Stores valid combinations
            string current;          // Temporary string to build current sequence
            backtrack(0, 0, n, current, res);
            return res;
      }

private:
      // Backtracking function
      void backtrack(int open, int close, int n, string& current, vector<string>& res) {
            // Base condition: if both open and close are n, valid sequence is built
            if (open == n && close == n) {
                  res.push_back(current);
                  return;
            }

            // Add open parenthesis if count is less than n
            if (open < n) {
                  current.push_back('(');
                  backtrack(open + 1, close, n, current, res);
                  current.pop_back(); // Backtrack
            }

            // Add closing parenthesis if valid
            if (close < open) {
                  current.push_back(')');
                  backtrack(open, close + 1, n, current, res);
                  current.pop_back(); // Backtrack
            }
      }
};