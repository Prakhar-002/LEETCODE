//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1980

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
      string findDifferentBinaryString(vector<string>& nums) {
            // Initialize an empty string to store the binary string
            string binaryStr = "";

            // Iterate through each string in the input vector
            for (int i = 0; i < nums.size(); i++) {
                  // Get the i-th character from the i-th string (diagonal element)
                  char cur = nums[i][i];

                  // Flip the bit: '0' becomes '1', and '1' becomes '0'
                  binaryStr += (cur == '0') ? '1' : '0';
            }

            // Return the generated binary string
            return binaryStr;
      }
};
