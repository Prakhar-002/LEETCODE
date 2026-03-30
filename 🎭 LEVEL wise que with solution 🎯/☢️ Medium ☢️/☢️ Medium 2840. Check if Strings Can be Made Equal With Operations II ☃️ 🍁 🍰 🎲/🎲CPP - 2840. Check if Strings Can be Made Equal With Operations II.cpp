//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2840

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s1)

//? 🧺 Space complexity ➺ O(26)

#include <string>
#include <vector>
using namespace std;

class Solution {
public:
      bool checkStrings(string s1, string s2) {
            // even[i] tracks net frequency of char i at even positions
            // odd[i]  tracks net frequency of char i at odd  positions
            vector<int> even(26, 0);
            vector<int> odd(26, 0);

            for (int i = 0; i < (int)s1.size(); i++) {
                  if (i % 2 == 0) {
                        // Add s1 char, subtract s2 char at even index
                        even[s1[i] - 'a']++;
                        even[s2[i] - 'a']--;
                  } else {
                        // Add s1 char, subtract s2 char at odd index
                        odd[s1[i] - 'a']++;
                        odd[s2[i] - 'a']--;
                  }
            }

            // All frequencies must cancel out for a valid rearrangement
            for (int i = 0; i < 26; i++) {
                  if (even[i] != 0 || odd[i] != 0)
                        return false;
            }

            return true;
      }
};