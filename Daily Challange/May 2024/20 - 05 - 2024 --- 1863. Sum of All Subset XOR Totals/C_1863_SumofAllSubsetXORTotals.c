int subsetXORSum(int *nums, int numsSize){
      int xorSum = 0;

      for (int i = 0; i < numsSize; i++){
            xorSum |= nums[i];
      }

      return xorSum * pow(2, (numsSize - 1));
}