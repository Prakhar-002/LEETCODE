//! https://github.com/Prakhar-002/LEETCODE

class Solution {
      public int minPatches(int[] nums, int n) {
            // REACH is number up to which we can add our number and got value
            long reach = 1;
            int i = 0;
            int patches = 0; 

            // we have to go up to given n so we'll loop for reach until it reaches n  
            while (reach <= n) {
                  // if we exceed the value present in array 
                  if (i < nums.length && nums[i] <= reach) {
                        // we'll add our array value 
                        reach += nums[i++];
                  } else {
                        // else we'll keep adding ourself to reach (N)
                        reach += reach;
                        // If we add ourself mean we added a number to array hence we inc our patches count
                        patches++;
                  }
            }

            return patches;
      }
}
