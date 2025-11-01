//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 53

//? ⌚ Time complexity -> O(n) 👉 For length

//? 🧺 Space complexity -> O(1)

#include <vector>
using namespace std;

class Solution{
public:
      int maxSubArray(vector<int> &nums){
            int curSum = 0;
            int maxSum = numeric_limits<int>::min();

            for (int i = 0; i < nums.size(); i++){
                  // if less than 0 make it's own train
                  // else it will a part of existing train

                  // if (curSum < 0) {
                  //       curSum = nums[i];
                  // } else {
                  //       curSum += nums[i];
                  // }

                  curSum = curSum < 0 ? nums[i] : curSum + nums[i];

                  // take the max
                  maxSum = max(maxSum, curSum);
            }
            return maxSum;
      }
};