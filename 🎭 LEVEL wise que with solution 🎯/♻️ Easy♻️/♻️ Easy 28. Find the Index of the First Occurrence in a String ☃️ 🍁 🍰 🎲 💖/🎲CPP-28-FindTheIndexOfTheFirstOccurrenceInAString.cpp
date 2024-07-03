//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 28

//? ⌚ Time complexity -> O(n) 👉 haystack length

//? 🧺 Space complexity -> O(1) 

#include <string>
using namespace std;

class Solution {
public:
      int strStr(string haystack, string needle) {
            return haystack.find(needle);
      }
};