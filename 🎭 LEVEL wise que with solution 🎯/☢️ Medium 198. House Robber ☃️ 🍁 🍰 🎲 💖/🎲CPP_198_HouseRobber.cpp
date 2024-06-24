//! https://github.com/Prakhar-002/LEETCODE

class Solution {
public:
      int rob(vector<int>& nums) {
            int firstHouseRob = 0;
            int secHouseRob = 0;

            //? [firstSum, secSum, n, n + 1 ...] 
            for (int i = 0; i < nums.size(); i++) {
                  // in temp variable we'll check for max after taking n with our self
                  int temp = max(firstHouseRob + nums[i], secHouseRob);
                  // update both variable
                  firstHouseRob = secHouseRob;
                  secHouseRob = temp;
            }

            return max(firstHouseRob, secHouseRob);
      }
};