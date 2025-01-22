//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 242

//? ⌚ Time complexity ➺ O(s + t) 👉🏻  s, t = len(s), len(t) 

//? 🧺 Space complexity ➺ O(s + t)

#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
      bool isAnagram(string s, string t) {
            // if length of both strings is not equal
            if (s.length() != t.length()) return false;

            // make hashmap for both
            // max length of both hashmaps will be 26 so content space
            unordered_map<char, int> sCount, tCount;

            // count the freq of both
            for (int i = 0; i < s.length(); ++i) {
                  sCount[s[i]]++;
                  tCount[t[i]]++;
            }

            // check for freq of every char in s
            for (char ch : s) {
                  if (sCount[ch] != tCount[ch]) return false;
            }

            return true;
      }
};
