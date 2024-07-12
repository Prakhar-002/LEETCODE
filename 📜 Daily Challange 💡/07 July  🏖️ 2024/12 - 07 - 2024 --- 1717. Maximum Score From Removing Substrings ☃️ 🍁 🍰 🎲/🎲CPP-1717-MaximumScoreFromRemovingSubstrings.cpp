//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1717

//? ⌚ Time complexity -> O(n) 👉 String length

//? 🧺 Space complexity -> O(n) 👉 using Stack

#include <string>
#include <stack>
using namespace std;

class Solution {
public:
      int maximumGain(string s, int x, int y) {
            // we will call as per the x and y
            return x > y ? removeByPair("ab", x, y, s) : removeByPair("ba", y, x, s);
      }

private:
      int removeByPair(const string &pair, int x, int y, const string &s) {
            // let say x > y
            int points = 0;
            stack<char> stack;

            // first we will remove "ab"
            for (char ch : s) {
                  // check for the ch if it is b and on top of our stack is a
                  if (ch == pair[1] && !stack.empty() && stack.top() == pair[0]) {
                        //  remove a from top
                        stack.pop();
                        // add point for removing
                        points += x;
                  }
                  else {
                        // just push every char in stack
                        stack.push(ch);
                  }
            }

            // now we will update the string for removing only the "ba" pair from string
            string new_s;
            while (!stack.empty()) {
                  // clear stack for reuse
                  new_s += stack.top();
                  stack.pop();
            }
            // updating string
            reverse(new_s.begin(), new_s.end());

            //  now we will remove "ba"
            for (char ch : new_s) {
                  // check for the ch if it is a and on top of our stack is b
                  if (ch == pair[0] && !stack.empty() && stack.top() == pair[1]) {
                        // remove b from top
                        stack.pop();
                        // add point for removing
                        points += y;
                  }
                  else {
                        // just push to our stack
                        stack.push(ch);
                  }
            }

            // return total points
            return points;
      }
};