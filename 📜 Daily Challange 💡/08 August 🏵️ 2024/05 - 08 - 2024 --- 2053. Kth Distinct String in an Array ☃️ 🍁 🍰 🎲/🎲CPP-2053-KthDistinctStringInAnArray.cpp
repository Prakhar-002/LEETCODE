//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2053

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(arr)

//? 🧺 Space complexity ➺ O(n) 👉🏻 Using HashMap

#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
      string kthDistinct(vector<string>& arr, int k) {
            // for calculating the string occurrences
            unordered_map<string, int> stringCount;

            // count by going through array
            for (const auto& str : arr) {
                  stringCount[str]++;
            }

            // check string by going over array 
            for (const auto& str : arr) {
                  // if str count is one it means str is Distinct 
                  if (stringCount[str] == 1) {
                        // for k-th distinct we decrement the k value
                        k--;
                        // if we got k == 0 this will be our answer
                        if (k == 0) {
                              return str;
                        }
                  }
            }

            // if we don't get the k-th distinct we return ""
            return "";
      }
};
