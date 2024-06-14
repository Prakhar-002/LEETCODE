class Solution {

      private int arrMax(int [] arr){
            int max = 0;
            for (int n : arr) {
                  max = Math.max(max, n);
            }
            return max;
      }

      public int minIncrementForUnique(int[] nums) {
            int freqCount[] = new int[nums.length + arrMax(nums)];

            for (int n : nums) {
                  freqCount[n]++;
            }

            int increment = 0;

            for (int i = 0; i < freqCount.length; i++) {
                  if( freqCount[i] > 1){
                        int extra = freqCount[i] - 1;
                        freqCount[i + 1] += extra;
                        increment += extra;
                  }
            }

            return increment;
      }
}