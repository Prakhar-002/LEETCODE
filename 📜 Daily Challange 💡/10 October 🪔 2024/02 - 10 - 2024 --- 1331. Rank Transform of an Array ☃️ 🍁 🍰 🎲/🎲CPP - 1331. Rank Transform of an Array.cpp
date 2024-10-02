//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1331

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
      vector<int> arrayRankTransform(vector<int>& arr) {
            if (arr.empty()) {
                  return arr;
            }

            // Step 1: Create a copy of the original array
            vector<int> sortedArr = arr;

            // Step 2: Sort the copied array
            sort(sortedArr.begin(), sortedArr.end());

            // Step 3: Assign ranks to elements in sorted order
            unordered_map<int, int> rankMap;
            int rank = 1;

            for (int num : sortedArr) {
                  if (rankMap.find(num) == rankMap.end()) {
                        rankMap[num] = rank++;
                  }
            }

            // Step 4: Replace elements in the original array with their ranks
            for (int& num : arr) {
                  num = rankMap[num];
            }

            return arr;
      }
};

