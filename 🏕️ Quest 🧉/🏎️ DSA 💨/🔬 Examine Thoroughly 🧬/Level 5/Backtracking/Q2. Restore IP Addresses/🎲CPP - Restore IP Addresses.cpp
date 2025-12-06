//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L5.5 Q2

//? ⌚ Time complexity ➺ O(m^n * n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m * n)

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
      // Check if s[start : start+length] is a valid IP segment (0–255, no leading zero unless "0")
      bool valid(const string& s, int start, int length) {
            // Single digit: always valid
            if (length == 1) return true;

            // Leading zero not allowed for multi-digit
            if (s[start] == '0') return false;

            // Length 2: "10"–"99", always <= 255
            if (length == 2) return true;

            // Length 3: numeric value must be <= 255
            // We can compare as string since all 3-digit strings "000"–"999"
            string segment = s.substr(start, length);
            return segment <= string("255");
      }

      // Backtracking helper
      void helper(const string& s, int startIndex,
                  vector<int>& dots, vector<string>& ans) {
            int remainingLength = s.size() - startIndex;
            int remainingNumberOfIntegers = 4 - (int)dots.size();

            // Prune if impossible
            if (remainingLength > remainingNumberOfIntegers * 3 ||
                  remainingLength < remainingNumberOfIntegers) {
                  return;
            }

            // If already have 3 dots, the rest is the last segment
            if (dots.size() == 3) {
                  if (valid(s, startIndex, remainingLength)) {
                        string temp;
                        int last = 0;
                        // Build IP from segments
                        for (int len : dots) {
                              temp += s.substr(last, len);
                              temp += '.';
                              last += len;
                        }
                        temp += s.substr(startIndex);
                        ans.push_back(temp);
                  }
                  return;
            }

            // Try segment lengths 1 to 3
            for (int curPos = 1; curPos <= 3 && curPos <= remainingLength; ++curPos) {
                  dots.push_back(curPos);
                  if (valid(s, startIndex, curPos)) {
                        helper(s, startIndex + curPos, dots, ans);
                  }
                  dots.pop_back();
            }
      }

      vector<string> restoreIpAddresses(string s) {
            vector<string> answer;
            vector<int> dots;
            helper(s, 0, dots, answer);
            return answer;
      }
};
