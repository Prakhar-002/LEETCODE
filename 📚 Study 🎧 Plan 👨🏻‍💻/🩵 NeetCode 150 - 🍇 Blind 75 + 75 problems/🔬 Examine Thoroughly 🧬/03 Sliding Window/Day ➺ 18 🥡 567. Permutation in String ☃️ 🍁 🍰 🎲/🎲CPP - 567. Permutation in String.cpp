//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 567

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s2)

//? 🧺 Space complexity ➺ O(1)

#include <string>
#include <vector>
using namespace std;

class Solution {
public:
      bool checkInclusion(string s1, string s2) {
            // a longer string cannot be a permutation of any part of a shorter string
            if (s1.length() > s2.length()) {
                  // so immediately returns `false`
                  return false;
            }

            // creates two frequency vectors, `s1Digits` and `s2Digits` each of size 26
            vector<int> s1Digits(26, 0), s2Digits(26, 0);

            // iterates through the first `s1.length()` characters of `s1` and `s2`
            for (int i = 0; i < s1.length(); ++i) {
                  // incrementing their frequencies in the `s1Digits` vector
                  ++s1Digits[s1[i] - 'a'];
                  // incrementing their frequencies in the `s2Digits` vector
                  ++s2Digits[s2[i] - 'a'];
            }

            // initializes a counter `matches` to track how many characters 
            // have the same frequency in `s1` and the current window of `s2`
            int matches = 0;

            // iterating through the frequency vectors
            for (int i = 0; i < 26; ++i) {
                  // incrementing `matches` when frequencies match
                  matches += (s1Digits[i] == s2Digits[i] ? 1 : 0);
            }

            int left = 0;

            // Sliding Window Starting from the end of the initial window (`s1.length()`)
            // moves through `s2` one character at a time
            for (int right = s1.length(); right < s2.length(); ++right) {
                  // If at any point `matches` equals 26
                  // all characters in the current window have the same frequency as in `s1`
                  if (matches == 26) {
                        // returns `true`
                        return true;
                  }

                  // For each new character added to the window
                  int index = s2[right] - 'a';
                  // it updates `s2Digits`
                  ++s2Digits[index];

                  // if the frequencies now match
                  if (s1Digits[index] == s2Digits[index]) {
                        // this causes `matches` to increase
                        ++matches;
                  }
                  // if they no longer match
                  else if (s1Digits[index] + 1 == s2Digits[index]) {
                        // this causes `matches` to decrease
                        --matches;
                  }

                  // when a character is removed from the beginning of the window
                  index = s2[left] - 'a';
                  // it updates `s2Digits`
                  --s2Digits[index];

                  // if the frequencies now match
                  if (s1Digits[index] == s2Digits[index]) {
                        // this causes `matches` to increase
                        ++matches;
                  }
                  // if they no longer match
                  else if (s1Digits[index] - 1 == s2Digits[index]) {
                        // this causes `matches` to decrease
                        --matches;
                  }

                  // increments the `left` index to move the window forward
                  ++left;
            }

            // Check `matches` for last index whether permutation or not
            return matches == 26;
      }
};

