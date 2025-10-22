//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2011

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
      int finalValueAfterOperations(vector<string>& operations) {
            //      Map operations to increments/decrements
            unordered_map<string, int> opr = {
                  {"--X", -1},        //      Decrement operation
                  {"X++", 1},         //      Increment operation
                  {"++X", 1},         //      Increment operation
                  {"X--", -1}         //      Decrement operation
            };

            int finalVal = 0;           //      Initialize final value

            //      Calculate final value by summing effects of each operation
            for (auto& operation : operations) {
                  finalVal += opr[operation];
            }

            return finalVal;            //      Return final value
      }
};