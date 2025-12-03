//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1

//? ⌚ Time complexity -> O(n^2) 👉 array length

//? 🧺 Space complexity -> O(1) 

#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
      vector<int> twoSum(vector<int>& nums, int target) {
            for (int i = 0; i < nums.size(); i++) {
                  for (int j = i + 1; j < nums.size(); j++) {
                        if ((nums[i] + nums[j]) == target) {
                              return {i, j};
                        }
                  }
            }
            return nums;
      }
};

// ---------------------------------------------

//? ⌚ Time complexity -> O(n) 👉 array length

//? 🧺 Space complexity -> O(n) 👉 map length

class Solution {
      public:
            vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> mp;

            for (int i = 0; i < nums.size(); i++) {
                  int diff = target - nums[i];

                  if (mp.find(diff) != mp.end()) {
                        return {i, mp[diff]};
                  }

                  mp[nums[i]] = i;
            }

            return {}; // Return empty vector if no solution found
      }
};