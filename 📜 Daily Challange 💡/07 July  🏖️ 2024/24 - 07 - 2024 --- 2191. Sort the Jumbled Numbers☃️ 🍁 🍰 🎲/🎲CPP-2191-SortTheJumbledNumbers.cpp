//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2191

//? ⌚ Time complexity -> O(NLogN) 👉🏻 Build in sort

//? 🧺 Space complexity -> O(n) 👉🏻 making pairs array

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
            vector<pair<int, int>> pairs;

            // Go through the whole array
            for (int i = 0; i < nums.size(); ++i) {
                  int num = nums[i];
                  int mapNum = 0;
                  int base = 1;

                  // handle the case where num is 0
                  if (num == 0) {
                        mapNum = mapping[num];
                  }

                  // extract the num according to map array
                  while (num > 0) {
                        int digit = num % 10;
                        num /= 10;
                        mapNum += base * mapping[digit];
                        base *= 10;
                  }

                  // we got the mapNum and index of it
                  // we have to sort it based on the map Number
                  // if they are same then we will sort according to the index
                  pairs.push_back({mapNum, i});
            }

            // this will sort by mapNum first and then according to idx
            sort(pairs.begin(), pairs.end());

            // extract the real value by idx from nums
            vector<int> result;
            for (const auto& pair : pairs) {
                  result.push_back(nums[pair.second]);
            }

            return result;
      }
};
