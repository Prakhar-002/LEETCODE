int rob(int* nums, int numsSize) {
      int firstHouseRob = 0;
      int secHouseRob = 0;

      for (int i = 0; i < numsSize; i++) {
            int firstHouseSum = firstHouseRob;
            firstHouseRob = secHouseRob;
            secHouseRob = fmax(secHouseRob, nums[i] + firstHouseSum);
      }

      return fmax(firstHouseRob, secHouseRob);
}