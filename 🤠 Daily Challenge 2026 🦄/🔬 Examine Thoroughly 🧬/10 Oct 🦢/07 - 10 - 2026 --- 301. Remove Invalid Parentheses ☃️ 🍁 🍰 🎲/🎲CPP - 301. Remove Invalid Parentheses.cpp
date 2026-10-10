//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 301

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
private:
      unordered_set<string> st;
      int maxLen = 0;
      int n = 0;

      void solve(int i, string& curr, int count, const string& s) {
            // More ')' than '(' makes the current prefix invalid
            if (count < 0) {
                  return;
            }

            // Entire string processed
            if (i == n) {
                  if (count == 0) {
                        int currLen = curr.length();

                        // Discard shorter answers if a longer valid sequence is found
                        if (currLen > maxLen) {
                              maxLen = currLen;
                              st.clear();
                        }

                        // Save candidate if length matches the maximum found
                        if (currLen == maxLen) {
                              st.insert(curr);
                        }
                  }
                  return;
            }

            char c = s[i];

            // Always keep non-parenthesis characters
            if (c != '(' && c != ')') {
                  curr.push_back(c);
                  solve(i + 1, curr, count, s);
                  curr.pop_back();
                  return;
            }

            // OPTION 1: Keep the current parenthesis
            curr.push_back(c);
            if (c == '(') {
                  solve(i + 1, curr, count + 1, s);
            } else {
                  solve(i + 1, curr, count - 1, s);
            }
            curr.pop_back();

            // OPTION 2: Skip/remove the current parenthesis
            solve(i + 1, curr, count, s);
      }

public:
      vector<string> removeInvalidParentheses(string s) {
            st.clear();
            n = s.length();
            maxLen = 0;

            string curr = "";
            solve(0, curr, 0, s);

            return vector<string>(st.begin(), st.end());
      }
};