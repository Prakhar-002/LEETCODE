//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3442

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

#include <iostream>
#include <vector>
#include <string>
#include <climits>
using namespace std;

class Solution {
public:
      int maxDifference(string s) {
            vector<int> freq(26, 0);                    // Frequency of each lowercase letter

            for (char ch : s) {
                  freq[ch - 'a']++;                     // Count each character
            }

            int evenFreq = INT_MAX;                     // For minimum even frequency
            int oddFreq = INT_MIN;                      // For maximum odd frequency

            for (int value : freq) {
                  if (value == 0) continue;             // Skip unused letters

                  if (value % 2 == 0) {
                        evenFreq = min(evenFreq, value);
                  } else {
                        oddFreq = max(oddFreq, value);
                  }
            }

            // Edge case: no even or odd found
            if (evenFreq == INT_MAX || oddFreq == INT_MIN) {
                  return 0;
            }

            return oddFreq - evenFreq;                  // Return final result
      }
};
