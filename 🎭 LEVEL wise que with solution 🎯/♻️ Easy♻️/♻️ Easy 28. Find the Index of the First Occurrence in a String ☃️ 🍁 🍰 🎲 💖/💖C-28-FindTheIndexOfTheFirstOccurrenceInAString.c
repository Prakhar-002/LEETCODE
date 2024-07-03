//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 28

//? ⌚ Time complexity -> O(n) 👉 haystack length

//? 🧺 Space complexity -> O(1) 

#include <string.h>

int strStr(const char* haystack, const char* needle) {
      char* result = strstr(haystack, needle);
      if (result == NULL) {
            return -1;
      }
      return result - haystack;
}