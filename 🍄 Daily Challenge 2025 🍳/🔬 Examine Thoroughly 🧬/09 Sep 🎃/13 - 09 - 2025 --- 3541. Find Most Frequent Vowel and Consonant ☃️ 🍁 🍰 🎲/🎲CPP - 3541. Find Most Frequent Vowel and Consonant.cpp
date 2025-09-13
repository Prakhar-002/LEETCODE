//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3541

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(26)

class Solution {
public:
      int maxFreqSum(string s) {
            int freq[26] = {0};              //      Tracks frequency of each lowercase letter ('a'-'z')

            //      Count occurrences of each character
            for (char ch : s) {
                  freq[ch - 'a'] += 1;
            }

            //      Find the maximum among 'a', 'e', 'i', 'o', 'u'
            int vowels = max({
                  freq['a' - 'a'],
                  freq['e' - 'a'],
                  freq['i' - 'a'],
                  freq['o' - 'a'],
                  freq['u' - 'a']
            });

            //      Set vowel frequencies to zero so they're not counted in consonant max
            freq['a' - 'a'] = 0;
            freq['e' - 'a'] = 0;
            freq['i' - 'a'] = 0;
            freq['o' - 'a'] = 0;
            freq['u' - 'a'] = 0;

            int consonant = 0;                //      Stores the max frequency among non-vowels
            for (int i = 0; i < 26; i++) {
                  consonant = max(consonant, freq[i]);
            }

            //      Add max-vowel frequency and max-consonant frequency for result
            return consonant + vowels;
      }
};
