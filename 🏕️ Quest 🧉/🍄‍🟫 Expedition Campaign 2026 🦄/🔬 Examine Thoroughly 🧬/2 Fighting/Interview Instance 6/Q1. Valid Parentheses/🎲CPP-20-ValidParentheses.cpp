//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 20

//? ⌚ Time complexity -> O(n) 👉 length of s

//? 🧺 Space complexity -> O(n) 👉 making of stack

#include <stack>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
      bool isValid(string s) {
            // Stack to keep track of opening brackets
            stack<char> st;

            // Map each opening bracket to its corresponding closing bracket
            unordered_map<char, char> mapping = {
                  {'(', ')'},
                  {'{', '}'},
                  {'[', ']'}
            };

            for (char ch : s) {
                  // If current char is an opening bracket, push onto stack
                  if (mapping.count(ch)) {
                        st.push(ch);
                  }
                  // If current char is a closing bracket
                  else {
                        // Stack must be non-empty and top must match current closing bracket
                        if (st.empty() || mapping[st.top()] != ch) {
                              return false;
                        }
                        // Pop the matched opening bracket
                        st.pop();
                  }
            }

            // Valid only if all opening brackets were matched and closed
            return st.empty();
      }
};