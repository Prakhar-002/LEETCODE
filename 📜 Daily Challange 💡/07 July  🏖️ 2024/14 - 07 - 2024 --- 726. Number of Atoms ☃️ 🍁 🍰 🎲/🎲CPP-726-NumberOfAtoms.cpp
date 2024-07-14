//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 726

//? ⌚ Time complexity -> O(n) 👉 No. of Char in String (Formula)

//? 🧺 Space complexity -> O(n) 👉 USing A Stack of HashMap

#include <iostream>
#include <stack>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
      string countOfAtoms(string formula) {
            // Making a stack of unordered_map
            stack<unordered_map<string, int>> stack;
            stack.push({});
            // iterator
            int i = 0;

            while (i < formula.length()) {
                  // There are three cases possible
                  // 1st case: open parenthesis
                  if (formula[i] == '(') {
                        // if we get an open parenthesis we add a new unordered_map
                        // cause we store unordered_map according to parenthesis
                        stack.push({});
                  }

                  // 2nd case: close parenthesis
                  else if (formula[i] == ')') {
                        // if we get a close parenthesis we end up with the last unordered_map
                        // so we will merge last unordered_map with 2nd last unordered_map
                        auto curMap = stack.top();
                        stack.pop();

                        // Count for that number occurrence after the parenthesis ()'2'
                        int count = 0;

                        // Now extract the number
                        while (i + 1 < formula.length() && isdigit(formula[i + 1])) {
                              count = count * 10 + (formula[i + 1] - '0');
                              i++;
                        }

                        count = count == 0 ? 1 : count;

                        // get the 2nd last unordered_map and merge the Last (current) unordered_map with 2nd last
                        auto &previousMap = stack.top();
                        for (const auto &[elem, freq] : curMap) {
                              // we multiply with number occur after parenthesis
                              previousMap[elem] += freq * count;
                        }
                  }

                  // 3rd case: elem and its count
                  else {
                        // Extract the elem cause It can be one digit
                        string element;
                        element += formula[i];
                        // Count for that number occurrence
                        int count = 0;

                        // for elem if It is 2 digit then
                        if (i + 1 < formula.length() && islower(formula[i + 1])) {
                              element += formula[i + 1];
                              i++;
                        }

                        // Now extract the number
                        while (i + 1 < formula.length() && isdigit(formula[i + 1])) {
                              count = count * 10 + (formula[i + 1] - '0');
                              i++;
                        }

                        // count will be 1 if no number present after elem => ON
                        count = count == 0 ? 1 : count;
                        // get the last unordered_map
                        auto &curMap = stack.top();
                        // add the elem along with Its count
                        curMap[element] += count;
                  }

                  // inc the count
                  i++;
            }

            // after all parenthesis and going through whole formula
            // there'll only one unordered_map left
            auto &cntMap = stack.top();
            string countAtom;

            vector<string> sortedKeys;
            for (const auto &[key, _] : cntMap) {
                  sortedKeys.push_back(key);
            }
            sort(sortedKeys.begin(), sortedKeys.end());

            for (const auto &elem : sortedKeys) {
                  countAtom += elem;
                  if (cntMap[elem] > 1) {
                        countAtom += to_string(cntMap[elem]);
                  }
            }

            return countAtom;
      }
};
