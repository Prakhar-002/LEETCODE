class Solution {
      public int singleNumber(int[] nums) {
            int xorNum = nums[0];

            for (int i = 1; i < nums.length; i++) {
                  xorNum ^= nums[i];
            }
            return xorNum;
      }
}