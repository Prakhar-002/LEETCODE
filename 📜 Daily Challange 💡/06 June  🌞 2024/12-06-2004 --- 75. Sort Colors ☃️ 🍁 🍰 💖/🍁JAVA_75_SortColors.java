class Solution {
      public void sortColors(int[] nums) {
            // TWo pointers start and end pointer
            int st = 0, end = nums.length - 1;

            for (int i = 0; i < nums.length;) {
                  if (nums[i] == 0 && i != st) {
                        // If we found 0 we'll shift it in starting of array
                        int temp = nums[st];
                        nums[st] = nums[i];
                        nums[i] = temp;
                        st++;
                  } else if (end > i && nums[i] == 2) {
                        // if we found 2 we'll shift it at end of array
                        int temp = nums[end];
                        nums[end] = nums[i];
                        nums[i] = temp;
                        end--;
                  } else {
                        // if we found 1 we'll inc pointer by one
                        i++;
                  }
            }
      }
}