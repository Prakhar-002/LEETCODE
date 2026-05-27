//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3121

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(word)

//? 🧺 Space complexity ➺ O(1)

#include <string>
#include <vector>
using namespace std;

class Solution {
public:
      int numberOfSpecialChars(string word) {
            // lastSmall[i]    = last index where lowercase letter i appeared
            // firstCapital[i] = first index where uppercase letter i appeared
            vector<int> lastSmall(26, -1);
            vector<int> firstCapital(26, -1);

            for (int i = 0; i < (int)word.size(); i++) {
                  char ch = word[i];
                  if (islower(ch)) {
                        // Always update to keep the LAST occurrence of lowercase
                        lastSmall[ch - 'a'] = i;
                  } else {
                        // Only record the FIRST occurrence of uppercase
                        if (firstCapital[ch - 'A'] == -1)
                              firstCapital[ch - 'A'] = i;
                  }
            }

            int count = 0;

            for (int i = 0; i < 26; i++) {
                  // Valid special pair: both exist and last lowercase comes before first uppercase
                  if (lastSmall[i] != -1 && firstCapital[i] != -1 && lastSmall[i] < firstCapital[i])
                        count++;
            }

            return count;
      }
};