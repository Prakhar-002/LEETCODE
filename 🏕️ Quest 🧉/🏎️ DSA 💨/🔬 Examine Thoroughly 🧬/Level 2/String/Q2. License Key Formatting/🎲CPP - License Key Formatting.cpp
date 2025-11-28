//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.3 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      string licenseKeyFormatting(string s, int k) {

            // Eliminate all dashes
            s = regex_replace(s, regex("\-"), "");

            int head = s.length() % k;

            vector<string> grouping;

            // Special handle for first group
            if (head) {
                  grouping.emplace_back(s.substr(0, head));
            }

            // General cases
            for (int i = head; i < s.length(); i += k) {
                  grouping.emplace_back(s.substr(i, k));
            }

            // Link each group togetger and separated by dash '-'
            s = join(grouping, "-");

            // to uppercase
            transform(s.begin(), s.end(), s.begin(), [](unsigned char c)
                        { return toupper(c); });
            return s;
      }

private:
      string join(const vector<string> &lst, const string &delim) {
            string res;
            for (const auto &s : lst) {
                  if (!res.empty())
                        res += delim;
                  res += s;
            }
            return res;
      }
};