class Solution {
public:
      int rob(vector<int>& nums) {
            int firstHouseRob = 0;
            int secHouseRob = 0;

            for (int i = 0; i < nums.size(); i++) {
                  int firstHouseSum = firstHouseRob;
                  firstHouseRob = secHouseRob;
                  secHouseRob = max(secHouseRob, nums[i] + firstHouseSum);
            }

            return max(firstHouseRob, secHouseRob);
            
      }
};