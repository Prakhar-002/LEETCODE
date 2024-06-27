//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 1248 

class Solution {
      public int numberOfSubarrays(int[] nums, int k) {
            // 3 pointer sliding window problem
            // making 3 pointer left, middle assign with 0
            int left = 0, middle = 0;
            int odd = 0;
            int subArrays = 0;

            // 3rd pointer iterate whole array
            for (int right = 0; right < nums.length; right++) {
                  // update odd if we got any odd value
                  if (nums[right] % 2 != 0) {
                        odd++;
                  }

                  // when even we get odd greater then k
                  while (odd > k) {
                        // undo the odd value after shifting left pointer by 1
                        if (nums[left] % 2 != 0) {
                              odd--;
                        }
                        left++;
                        // and assign middle with left
                        middle = left;
                  }

                  // Now the actual part when we got number of odd = k
                  if (odd == k) {
                        //we'll update our middle pointer up to that index when we got our first odd value 
                        while (nums[middle] % 2 == 0) {
                              middle++;
                        }
                        // and add subArrays that can be made is => mid - left + 1
                        // cause => [2, 2, 1, 1, 2, 1, 1]
                        //          L               R => got 3 odd value
                        //          M
                        //  Update the pointer m up to first odd comes
                        //           L  -  M  -  -  R
                        // subArrays that can be made are
                        //         [2, 2, 1, 1, 1, 2, 1]
                        //         [2, 1, 1, 1, 2, 1]
                        //         [1, 1, 1, 2, 1]
                        // total 3 subArray that are => (M - L) + 1
                        
                        subArrays += (middle - left) + 1;
                  }
            }

            return subArrays;
      }
}

