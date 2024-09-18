//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 179

//? ⌚ Time complexity ➺ O(NLogN) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
      string largestNumber(vector<int>& nums) {
            // `numStrings` is created to store string equivalents of the integer
            vector<string> numStrings;

            // Loop through the `nums` vector and convert each integer
            for (int num : nums) {
                  // to a string using `to_string()`
                  numStrings.push_back(to_string(num));
            }

            // sorted using `sort` with a custom lambda comparator
            sort(numStrings.begin(), numStrings.end(), [](const string& n1, const string& n2) {
                  // effectively determines which concatenation results 
                  // in a numerically larger string and sorts accordingly
                  return n1 + n2 > n2 + n1;
            });

            // If the largest number is 0, return "0" { Handling Edge Case }
            if (numStrings[0] == "0") {
                  // `["0", "0"]` should become `0`, not `00`
                  return "0";
            }

            // `string`: `result` is used to concatenate the sorted strings
            string result;

            // Iterate over `numStrings`
            for (const string& numString : numStrings) {
                  // appending each one to `result`
                  result += numString;
            }

            // return the resulting string
            return result;
      }
};