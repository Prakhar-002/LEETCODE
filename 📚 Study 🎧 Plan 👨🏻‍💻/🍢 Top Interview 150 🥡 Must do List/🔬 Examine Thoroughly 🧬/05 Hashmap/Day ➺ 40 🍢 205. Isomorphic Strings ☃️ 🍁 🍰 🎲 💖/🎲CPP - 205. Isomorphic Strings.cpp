//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 205

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

#include <unordered_map>
#include <string>

class Solution {
public:
      bool isIsomorphic(std::string s, std::string t) {
            std::unordered_map<char, char> mapST;  // s -> t mapping
            std::unordered_map<char, char> mapTS;  // t -> s mapping

            for (int i = 0; i < s.size(); ++i) {
                  char c1 = s[i];  // Character from s
                  char c2 = t[i];  // Character from t

                  // Check if c1 already mapped
                  if (mapST.count(c1)) {
                        if (mapST[c1] != c2) {
                              return false;  // Mismatch
                        }
                  } else {
                        mapST[c1] = c2;
                  }

                  // Check if c2 already reverse mapped
                  if (mapTS.count(c2)) {
                        if (mapTS[c2] != c1) {
                              return false;  // Mismatch
                        }
                  } else {
                        mapTS[c2] = c1;
                  }
            }

            return true;  // All mappings are valid
      }
};
