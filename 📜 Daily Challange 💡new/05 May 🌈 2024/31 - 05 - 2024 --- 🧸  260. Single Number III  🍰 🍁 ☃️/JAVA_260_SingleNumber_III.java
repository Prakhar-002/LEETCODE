class Solution {
      public int[] singleNumber(int[] nums) {
            Arrays.sort(nums);

            int arr[] = new int[2];
            int k = 0;

            for (int i = 0; i < nums.length; i += 2) {
                  if ((i + 1) < (nums.length) && nums[i] != nums[i + 1]) {
                        arr[k++] = nums[i--];
                  }
            }

            if (k == 1) {
                  arr[1] = nums[nums.length - 1];
            }

            return arr;
      }
}