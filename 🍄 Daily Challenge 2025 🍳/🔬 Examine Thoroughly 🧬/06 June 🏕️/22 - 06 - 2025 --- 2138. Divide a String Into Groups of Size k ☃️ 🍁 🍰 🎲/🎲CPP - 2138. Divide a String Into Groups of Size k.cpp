//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2139

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      vector<string> divideString(string s, int k, char fill) {
            int n = s.length();

            // If length is not divisible by k, pad with fill characters
            if (n % k != 0) {
                  int padding = k - (n % k);
                  s += string(padding, fill);
            }

            vector<string> res;

            // Create substrings of size k
            for (int i = 0; i < s.length(); i += k) {
                  res.push_back(s.substr(i, k));
            }

            return res;
      }
};
