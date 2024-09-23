//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2707

//? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <functional>
using namespace std;

class Solution {
private:
      unordered_set<string> words;
      unordered_map<int, int> dp;
      string s;

      int dfs(int i) {
            // If `i` is already in `dp`
            // it means we have computed the needed extra chars for substring `s[i:]`
            if (dp.find(i) != dp.end()) {
                  // return this stored value
                  return dp[i];
            }

            // function considers two cases for each position `i`

            // Skipping the current character: `(1 + dfs(i + 1))`
            // assumes that if the char at index `i` is not part of any valid word
            // skip it, hence adding 1 to the count and moving forward
            int extraChars = 1 + dfs(i + 1); // skip cur char

            // Form words using the current character and extend to subsequent characters
            for (int j = i; j < s.length(); ++j) {
                  // If substring `s[i:j+1]` from the current index `i` 
                  // to another index `j` is in the dictionary (`words`)
                  if (words.find(s.substr(i, j - i + 1)) != words.end()) {
                        // call recursively to solve for the remaining string `s[j+1:]`
                        extraChars = min(extraChars, dfs(j + 1));
                  }
            }

            // `dp[i]` is updated 
            dp[i] = extraChars;
            // return the result
            return extraChars;
      }

public:
      int minExtraChar(string s, vector<string>& dictionary) {
            // A set created from the `dictionary`
            // for faster membership tests to check if a substring is a valid word
            this->words = unordered_set<string>(dictionary.begin(), dictionary.end());
            // dictionary stores the results of subProblems
            this->dp[s.length()] = 0;
            this->s = s;

            // execution starts with `dfs(0)`
            return dfs(0);
      }
};

