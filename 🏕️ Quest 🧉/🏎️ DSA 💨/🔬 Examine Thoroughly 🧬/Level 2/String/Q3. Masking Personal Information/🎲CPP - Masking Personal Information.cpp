//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.3 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
      string maskPII(string s) {
            // Check if the input is an email (contains '@')
            if (s.find('@') != string::npos) {
                  // Convert entire string to lowercase
                  for (auto &c : s) c = tolower(c);

                  size_t atIndex = s.find('@');
                  // Mask email as: first char + "*****" + last char before '@' + domain
                  // Example: "LeetCode@Email.com" -> "l*****e@email.com"
                  return s[0] + string("*****") + s.substr(atIndex - 1);
            }

            // Handle phone number: extract digits only
            string digits;
            for (char c : s) {
                  if (isdigit(c)) digits += c;
            }

            // Last 10 digits local number
            string local = digits.substr(max(0, (int)digits.size() - 10));
            int cc = (int)digits.size() - 10;  // country code length

            // Build country code prefix if exists
            string prefix = cc > 0 ? "+" + string(cc, '*') + "-" : "";

            // Format final masked phone number "***-***-xxxx"
            return prefix + "***-***-" + local.substr(local.size() - 4);
      }
};
