//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1460

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(target)

//? 🧺 Space complexity ➺ O(n) 👉🏻 making HashMap

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
      bool canBeEqual(vector<int>& target, vector<int>& arr) {
            // making hashmap
            unordered_map<int, int> targetCount, arrCount;

            // count the freq of both elem
            for (size_t i = 0; i < target.size(); ++i) {
                  targetCount[target[i]]++;
                  arrCount[arr[i]]++;
            }

            // if length is not equal
            if (targetCount.size() != arrCount.size()) {
                  return false;
            }

            // check the freq of each elem
            for (const auto& elem : target) {
                  // check for both counter
                  if (targetCount[elem] != arrCount[elem]) {
                        return false;
                  }
            }

            return true;
      }
};
