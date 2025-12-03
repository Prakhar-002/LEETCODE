//! https://github.com/Prakhar-002/LEETCODE

class Solution {
      public int firstMissingPositive(int[] nums) {
            int n = nums.length;

            for (int i = 0; i < n; i++) { 
                  if (nums[i] < 0) {
                        // If number is -ve make it 0
                        nums[i] = 0;
                  }
            }

            for (int i = 0; i < n; i++) {
                  // Take the abs value of every elem of nums
                  int val = Math.abs(nums[i]);
                  // If it is btw 1 to len(nums) means in range of possible solution
                  if (val >= 1 && val <= n) {
                        // Make the number -ve present at val's original position
                        // Ex- [1, 2, 3] => actual position is at index val - 1 => 1 : 0, 2 : 1, 3 : 2
                        // We will make the value -ve for ensuring value present in our array
                        if (nums[val - 1] > 0) {
                              nums[val - 1] *= -1;
                        }
                        // If it's 0 then assign it with -(len(nums) + 1)
                        else if (nums[val - 1] == 0) {
                              nums[val - 1] = -1 * (n + 1);
                        }
                  }
            }

            for (int i = 1; i < n + 1; i++) {
                  // check if number is not exist in array
                  if (nums[i - 1] >= 0) {
                        return i;
                  }
            }

            return n + 1;
      }
}