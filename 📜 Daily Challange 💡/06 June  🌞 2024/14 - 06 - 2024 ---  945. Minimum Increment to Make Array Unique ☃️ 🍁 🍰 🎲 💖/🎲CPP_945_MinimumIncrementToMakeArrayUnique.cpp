//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 945 

class Solution{
public:
      int minIncrementForUnique(vector<int> &nums){
            // Sort the array
            sort(nums.begin(), nums.end());

            // Make variable 
            int increment = 0; 

            for (int i = 0; i < nums.size(); i++){
                  // check adjacent values  
                  if (nums[i - 1] >= nums[i]){
                        // inc by diff of two value and + 1 
                        increment += 1 + nums[i - 1] - nums[i];
                        // make Ith value to I - 1 th value +1
                        nums[i] = nums[i - 1] + 1;
                  }
            }
            return increment;
      }
};