//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1657

//? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = len(word1)

//? 🧺 Space complexity ➺ O(1)    👉🏻  m = len(word2)

#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
      bool closeStrings(string word1, string word2) {
            // If lengths of the words don't match, they cannot be close
            if (word1.size() != word2.size()) {
                  return false;
            }

            // Frequency arrays for 26 lowercase English letters
            vector<int> freq1(26, 0), freq2(26, 0);

            // Populate the frequency arrays
            for (char c : word1) {
                  freq1[c - 'a']++;
            }
            for (char c : word2) {
                  freq2[c - 'a']++;
            }

            // Check if both words use the same set of characters
            for (int i = 0; i < 26; i++) {
                  if ((freq1[i] > 0) != (freq2[i] > 0)) {
                        return false;
                  }
            }

            // Compare sorted frequency distributions
            sort(freq1.begin(), freq1.end());
            sort(freq2.begin(), freq2.end());
            return freq1 == freq2;
      }
};
