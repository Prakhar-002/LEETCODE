//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2904

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <string>
using namespace std;

class Solution {
public:
      string shortestBeautifulSubstring(string s, int k) {
            int n = s.length();
            int l = 0;
            int ones = 0;
            string res = "";

            for (int r = 0; r < n; ++r) {
                  // Increment count for character '1'
                  if (s[r] == '1') {
                        ones++;
                  }

                  // Remove redundant characters from the left
                  while (l <= r && (ones > k || s[l] == '0')) {
                        if (s[l] == '1') {
                              ones--;
                        }
                        l++;
                  }

                  // Evaluate current valid window
                  if (ones == k) {
                        string temp = s.substr(l, r - l + 1);

                        // Compare length and lexicographical priority
                        if (res.empty() ||
                              temp.length() < res.length() ||
                              (temp.length() == res.length() && temp < res)) {
                              res = temp;
                        }
                  }
            }

            return res;
      }
};