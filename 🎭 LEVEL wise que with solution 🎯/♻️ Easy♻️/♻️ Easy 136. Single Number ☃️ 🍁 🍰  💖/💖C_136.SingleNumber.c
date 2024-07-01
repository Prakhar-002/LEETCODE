int singleNumber(int* nums, int numsSize) {
      int xorNum = nums[0];

      for (int i = 1; i < numsSize; i++) {
            xorNum ^= nums[i];
      }
      return xorNum; 
}