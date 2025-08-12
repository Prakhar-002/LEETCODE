//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 17

//? ⌚ Time complexity ➺ O(n * 4 ^ n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      vector<string> letterCombinations(string digits) {
            // Final result list
            vector<string> res;

            // Mapping from digit char to possible letters
            unordered_map<char, string> digitToChar = {
                  {'2', "abc"}, {'3', "def"},
                  {'4', "ghi"}, {'5', "jkl"},
                  {'6', "mno"}, {'7', "pqrs"},
                  {'8', "tuv"}, {'9', "wxyz"}
            };

            // If no digits, return empty result
            if (digits.empty()) return res;

            // Start backtracking
            backtrack(0, "", digits, digitToChar, res);
            return res;
      }

private:
      void backtrack(int i, string curStr, string& digits,
                     unordered_map<char, string>& digitToChar, vector<string>& res) {
            // Base Case: complete combination
            if (curStr.size() == digits.size()) {
                  res.push_back(curStr);
                  return;
            }

            // Get all letters mapped to the current digit
            string letters = digitToChar[digits[i]];

            // Try each letter and go to next digit
            for (char ch : letters) {
                  backtrack(i + 1, curStr + ch, digits, digitToChar, res);
            }
      }
};
