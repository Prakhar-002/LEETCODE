//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1371

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      int findTheLongestSubstring(const string& s) {
            // each vowel's presence can be represented with a single bit in a binary number
            unordered_map<char, int> vowels = {
                  {'a', 1},  // 00001
                  {'e', 2},  // 00010
                  {'i', 4},  // 00100
                  {'o', 8},  // 01000
                  {'u', 16}  // 10000
            };

            // This variable hold the length of the longest substring as per criteria
            int subString = 0;
            // to keep track of the count of vowels seen so far
            int mask = 0;
            // It's used to map a binary representation of vowels seen so far to the first index 
            vector<int> maskToIdx(32, -1);

            // iterates through each character `ch` with index `i`
            for (int i = 0; i < s.length(); ++i) {
                  char ch = s[i];
                  // For each character it toggles the corresponding bit(s) 
                  // in the `mask` variable if the character is a vowel
                  // an even number of occurrences of a vowel resets its bit to 0, 
                  // while an odd number sets it to 1
                  mask ^= vowels[ch];

                  // if this mask has been seen before or `mask` is `0`
                  if (maskToIdx[mask] != -1 || mask == 0) {
                        // calculates the length of the substring ending at the current character
                        int length = i - maskToIdx[mask];
                        // updates `subString` with the maximum length
                        subString = max(subString, length);
                  } else {
                        // mask has not been seen before
                        // it sets `maskToIdx[mask]` with the current index (`i`).
                        maskToIdx[mask] = i;
                  }
            }

            // return longest substring with an even count of all vowels
            return subString;
      }
};