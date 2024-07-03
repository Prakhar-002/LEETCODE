//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 20

//? ⌚ Time complexity -> O(n) 👉 length of s

//? 🧺 Space complexity -> O(n) 👉 making of stack

#include <stack>
#include <string>
using namespace std;

class Solution{
public:
      bool isValid(string s){
            stack<char> st;

            for (char ch : s){
                  if (ch == '(' || ch == '{' || ch == '['){
                        st.push(ch);
                  }
                  else{
                        if (st.empty()){
                              return false;
                        }

                        if ((st.top() == '(' && ch == ')') ||
                              (st.top() == '{' && ch == '}') ||
                              (st.top() == '[' && ch == ']')){
                              st.pop();
                        }
                        else{
                              return false;
                        }
                  }
            }

            return st.empty();
      }
};
