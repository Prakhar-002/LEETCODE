class Solution {
      public int rob(int[] nums) {
            int firstHouseRob = 0;
            int secHouseRob = 0;

            for (int n : nums) {
                  int firstHouseSum = firstHouseRob;
                  firstHouseRob = secHouseRob;
                  secHouseRob = Math.max(secHouseRob, n + firstHouseSum);
            }

            return Math.max(firstHouseRob, secHouseRob);
      }
}