//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3042

// ? ⌚ Time complexity ➺ O(n ^ 2 * m) 👉🏻  n = No. of words

// ? 🧺 Space complexity ➺ O(1)        👉🏻  m = Max len(one word)

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
      int countPrefixSuffixPairs(const vector<string>& words) {
            int n = words.size();
            int count = 0;

            // Step 1: Iterate through each pair of words
            for (int i = 0; i < n; i++) {
                  for (int j = i + 1; j < n; j++) {
                        const string& str1 = words[i];
                        const string& str2 = words[j];

                        // Step 2: Skip if the first string is larger than the second
                        if (str1.length() > str2.length()) {
                              continue;
                        }

                        // Step 3: Check if str1 is both the prefix and suffix of str2
                        if (str2.substr(0, str1.length()) == str1 &&
                              str2.substr(str2.length() - str1.length()) == str1) {
                              count++;
                        }
                  }
            }

            // Step 4: Return the total count of prefix-suffix pairs
            return count;
      }
};
