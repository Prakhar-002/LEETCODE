//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3606

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
      vector<string> validateCoupons(vector<string> &code, vector<string> &businessLine,
                                    vector<bool> &isActive) {
            // Priority: electronics(0) < grocery(1) < pharmacy(2) < restaurant(3)
            unordered_map<string, int> priority = {
                  {"electronics", 0},
                  {"grocery", 1},
                  {"pharmacy", 2},
                  {"restaurant", 3}
            };

            // Lambda: validate coupon code
            auto isValid = [](const string &s) -> bool {
                  if (s.empty())
                        return false;
                  for (char ch : s) {
                        if (!isalnum(ch) && ch != '_') {
                              return false;
                        }
                  }
                  return true;
            };

            // Collect valid coupons as (priority, code) pairs
            vector<pair<int, string>> valid;
            for (int i = 0; i < code.size(); i++) {
                  if (isActive[i] &&
                        priority.count(businessLine[i]) &&
                        isValid(code[i])) {
                        valid.emplace_back(priority[businessLine[i]], code[i]);
                  }
            }

            // Sort: priority asc, then code lex asc
            sort(valid.begin(), valid.end());

            // Extract codes
            vector<string> result;
            for (auto &p : valid) {
                  result.push_back(p.second);
            }
            return result;
      }
};
