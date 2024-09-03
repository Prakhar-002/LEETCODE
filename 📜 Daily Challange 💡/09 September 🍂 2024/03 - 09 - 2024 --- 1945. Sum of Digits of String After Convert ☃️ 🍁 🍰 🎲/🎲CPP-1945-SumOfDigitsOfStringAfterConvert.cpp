//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1945

//? ⌚ Time complexity ➺ O(n * k) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

#include <string>
#include <numeric>
using namespace std;

class Solution {
public:
      int getLucky(string s, int k) {
            // This will store the numeric conversion of each character from the string `s`
            string numberStr;

            for (char ch : s) {
                  // expression converts a lowercase English letter to its position in the alphabet: 
                  // 'a' becomes 1, 'b' becomes 2, ..., 'z' becomes 26
                  numberStr += to_string(ch - 'a' + 1);
            }

            // Summation of digits up to `k` times
            while (k > 0) {
                  // This variable will store the sum of the digits of `numberStr` during each iteration
                  int tempNum = 0;
                  for (char ch : numberStr) {
                        // converts each character to an integer, and adds it to `tempNum`
                        tempNum += ch - '0';
                  }

                  // `numberStr` is updated to be the string representation of `tempNum`
                  numberStr = to_string(tempNum);
                  // The loop decreases `k` by 1 with each iteration until `k` equals 0
                  k--;
            }

            // converts `numberStr` back to an integer and return
            return stoi(numberStr);
      }
};



