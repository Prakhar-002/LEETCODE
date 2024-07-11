//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1190

//? ⌚ Time complexity -> O(n) 👉 String length

//? 🧺 Space complexity -> O(n) 👉 Making Reverse SubString

#include <string>
#include <unordered_map>
#include <stack>
using namespace std;

class Solution {
public:
      string reverseParentheses(string s) {
            // we shall store i for "(" to j for ")"
            // store pair open parenthesis to its close parenthesis
            unordered_map<int, int> parenPair;
            // using stack for extracting parenthesis
            stack<int> stack;

            for (int i = 0; i < s.length(); i++) {
                  char ch = s[i];
                  // if we got open parenthesis store the idx
                  if (ch == '(') {
                        stack.push(i);
                  }
                  else if (ch == ')') {
                        // i is at close parenthesis
                        // j is at open parenthesis
                        int j = stack.top();
                        stack.pop();
                        // store the pair (i to j) and (j to i)
                        parenPair[i] = j;
                        parenPair[j] = i;
                  }
            }

            // preWork is done now main

            int i = 0, direction = 1;
            string revStr;

            while (i < s.length()) {
                  if (s[i] == '(' || s[i] == ')') {
                        // if somewhere we found parenthesis
                        // we switch to its corresponding open or close paren
                        i = parenPair[i];
                        // and change the direction of adding in result
                        direction = -direction;
                  }
                  else {
                        // simply add in our revStr
                        revStr += s[i];
                  }

                  // inc our i with direction
                  // so either it will go with inc or dec mean -> dir or <- dir
                  i += direction;
            }

            return revStr;
      }
};

// ------------------------------------------------------

// ⌚ Time complexity -> O(n ^ 2) 👉 n is String length

// 🧺 Space complexity -> O(n * m) 👉 using Stack m times

class Solution {
public:
      string reverseParentheses(string s) {
            // take an empty stack
            stack<char> stack;

            // Traverse whole character in string
            for (char ch : s) {
                  // if we get a close parenthesis
                  if (ch == ')') {
                        // partition to store the value btw ()
                        string portion;

                        // pop until open parenthesis come
                        // for corresponding open parenthesis
                        while (stack.top() != '(') {
                              // pop from stack until "(" comes
                              portion += stack.top();
                              stack.pop();
                        }
                        // pop "(" too
                        stack.pop();
                        // now store the partition itself in stack
                        // cause stack push and pop reverse the string we're done with reverse
                        for (char c : portion) {
                              stack.push(c);
                        }
                  }
                  // we append ch in stack until a close parenthesis comes
                  else {
                        stack.push(ch);
                  }
            }

            // join stack values return string
            string result;
            while (!stack.empty()) {
                  result = stack.top() + result;
                  stack.pop();
            }
            return result;
      }
};
