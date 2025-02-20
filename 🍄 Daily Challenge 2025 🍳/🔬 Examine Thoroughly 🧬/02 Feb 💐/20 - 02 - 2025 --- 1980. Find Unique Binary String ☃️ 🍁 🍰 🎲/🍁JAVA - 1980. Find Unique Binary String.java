//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1980

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public String findDifferentBinaryString(String[] nums) {
            // StringBuilder to store the binary string
            StringBuilder binaryStr = new StringBuilder();

            // Iterate through each string in the input array
            for (int i = 0; i < nums.length; i++) {
                  // Get the i-th character from the i-th string (diagonal element)
                  char cur = nums[i].charAt(i);

                  // Flip the bit: '0' becomes '1', and '1' becomes '0'
                  binaryStr.append(cur == '0' ? '1' : '0');
            }

            // Convert StringBuilder to string and return
            return binaryStr.toString();
      }
}
