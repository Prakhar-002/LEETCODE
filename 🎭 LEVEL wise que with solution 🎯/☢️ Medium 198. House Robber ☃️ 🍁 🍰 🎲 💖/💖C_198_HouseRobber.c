//! https://github.com/Prakhar-002/LEETCODE

int rob(int* nums, int numsSize) {
      int firstHouseRob = 0;
      int secHouseRob = 0;

      //? [firstSum, secSum, n, n + 1 ...] 
      for (int i = 0; i < numsSize; i++) {
            // in temp variable we'll check for max after taking n with our self
            int temp = fmax(firstHouseRob + nums[i], secHouseRob);
            // update both variable
            firstHouseRob = secHouseRob;
            secHouseRob = temp;
      }

      return fmax(firstHouseRob, secHouseRob);
}