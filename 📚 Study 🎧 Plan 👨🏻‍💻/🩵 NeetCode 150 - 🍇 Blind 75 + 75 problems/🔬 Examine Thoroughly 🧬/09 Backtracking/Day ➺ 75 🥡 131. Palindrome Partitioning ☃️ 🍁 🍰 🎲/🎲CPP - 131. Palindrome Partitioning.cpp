#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      vector<vector<string>> partition(string s) {
            vector<vector<string>> result; // Stores all partitions
            vector<string> part;           // Current partition path

            dfs(0, s, part, result);
            return result;
      }

private:
      void dfs(int i, string& s, vector<string>& part, vector<vector<string>>& result) {
            // ----------------------------------------------------------
            // Base Case: If we've reached the end of the string
            // store the current partition in the result
            // ----------------------------------------------------------
            if (i >= s.size()) {
                  result.push_back(part);
                  return;
            }

            // ----------------------------------------------------------
            // Try all partition splits starting at index i
            // ----------------------------------------------------------
            for (int j = i; j < s.size(); j++) {
                  if (isPali(s, i, j)) {
                        part.push_back(s.substr(i, j - i + 1)); // Choose substring
                        dfs(j + 1, s, part, result);            // Explore rest
                        part.pop_back();                        // Backtrack
                  }
            }
      }

      bool isPali(string& s, int l, int r) {
            // Two-pointer palindrome check
            while (l < r) {
                  if (s[l] != s[r]) return false;
                  l++;
                  r--;
            }
            return true;
      }
};
