//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 20

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
      bool isValid(string s) {
            // Vector used as a stack to track opening brackets
            vector<char> stack;

            // Mapping from opening bracket to matching closing bracket
            unordered_map<char, char> mapping = {
                  {'(', ')'},
                  {'{', '}'},
                  {'[', ']'}
            };

            for (char ch : s) {
                  // If the character is an opening bracket, push it
                  if (mapping.count(ch)) {
                        stack.push_back(ch);
                  } 
                  // If it is a closing bracket, check against stack top
                  else {
                        if (stack.empty()) {
                              return false;
                        }
                        char top = stack.back();
                        stack.pop_back();

                        if (mapping[top] != ch) {
                              return false;
                        }
                  }
            }

            // String is valid if every bracket found a matching pair
            return stack.empty();
      }
};