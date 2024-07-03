//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 26

//? ⌚ Time complexity -> O(n) 👉 length of given nums array

//? 🧺 Space complexity -> O(1) 

#include <vector>
using namespace std;

class Solution {
public:
      int removeDuplicates(vector<int>& nums) {
            if (nums.empty()) return 0;

            int i = 0;
            for (int j = 1; j < nums.size(); j++) {
                  if (nums[i] != nums[j]) {
                        nums[++i] = nums[j];
                  }
            }
            return i + 1;
      }
};
