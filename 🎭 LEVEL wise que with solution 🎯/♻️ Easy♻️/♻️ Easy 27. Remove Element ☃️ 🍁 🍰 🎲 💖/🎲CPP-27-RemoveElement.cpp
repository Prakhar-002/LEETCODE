//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 27

//? ⌚ Time complexity -> O(n) 👉 length of arr

//? 🧺 Space complexity -> O(1) 

#include <vector>
using namespace std;

class Solution {
public:
      int removeElement(vector<int>& nums, int val) {
            int j = 0;
            for (int i = 0; i < nums.size(); i++) {
                  if (nums[i] != val) {
                        nums[j++] = nums[i];
                  }
            }
            return j;
      }
};