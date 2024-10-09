//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1071

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = min(str1.length, str2.length)

//? 🧺 Space complexity ➺ O(1)

#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

class Solution {
public:
      string gcdOfStrings(string str1, string str2) {
            // Check if concatenated strings are equal or not, if not return ""
            // else then return the substring from 0 to gcd of str1.length(), str2.length()
            return (str1 + str2 != str2 + str1)
                  ? "" 
                  : str1.substr(0, gcd(str1.length(), str2.length())
            );
      }
};
