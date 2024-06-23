//! https://github.com/Prakhar-002/LEETCODE

class Solution {

      private int arrMax(int [] arr){
            int max = 0;
            for (int n : arr) {
                  max = Math.max(max, n);
            }
            return max; 
      }

      public int minIncrementForUnique(int[] nums) {
            // Make a array of length = length of nums and the max value present in nums array
            int freqCount[] = new int[nums.length + arrMax(nums)];

            for (int n : nums) {
                  // Count freq of each element
                  freqCount[n]++;
            }

            int increment = 0;

            for (int i = 0; i < freqCount.length; i++) {
                  // Check if freq of elem is > 1 
                  if(freqCount[i] > 1){
                        // Assign freq = 1 and take out the extra one
                        int extra = freqCount[i] - 1;
                        // add extra freq to next index (for making array unique)
                        freqCount[i + 1] += extra;
                        // add extra to our increment
                        increment += extra;
                  }
            }

            return increment;
      }
}