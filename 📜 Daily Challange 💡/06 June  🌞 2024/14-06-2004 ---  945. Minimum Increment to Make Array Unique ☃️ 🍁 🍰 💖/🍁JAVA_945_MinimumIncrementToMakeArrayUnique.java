import java.util.Arrays;

class Solution {
      public int minIncrementForUnique(int[] nums) {
            Arrays.sort(nums);

            int increment = 0;

            for (int i = 1; i < nums.length; i++) {
                  if (nums[i - 1] >= nums[i]) {
                        increment += 1 + nums[i - 1] - nums[i];
                        nums[i] = nums[i - 1] + 1;
                  }
            }

            return increment;
      }
}