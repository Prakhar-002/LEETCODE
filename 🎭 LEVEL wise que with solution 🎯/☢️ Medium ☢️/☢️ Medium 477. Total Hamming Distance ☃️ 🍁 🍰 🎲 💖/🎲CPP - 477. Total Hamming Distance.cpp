//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 477

//? ⌚ Time complexity ➺ O(32 * n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int totalHammingDistance(const vector<int>& nums) {
            int n = nums.size();  // Number of elements in the input array
            int total = 0;        // Store the total Hamming distance

            // Iterate over all 32 possible bit positions of integers
            for (int bit = 0; bit < 32; ++bit) {
                  int countOnes = 0;  // Count of '1's at current bit position

                  // Count how many numbers have 1 at the current bit position
                  for (int num : nums) {
                        countOnes += (num >> bit) & 1;
                  }

                  // Count of numbers with '0' at current bit position
                  int countZeros = n - countOnes;

                  // Each 1 can pair with each 0 to create a Hamming distance of 1
                  total += countOnes * countZeros;
            }

            // Return the accumulated total
            return total;
      }
};
