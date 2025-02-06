//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1726

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n ^ 2)

#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
      int tupleSameProduct(vector<int>& nums) {
            // HashMap to store the frequency of each product
            unordered_map<int, int> productCount;

            int tuples = 0;

            // Iterate over all pairs of numbers
            for (int i = 0; i < nums.size(); i++) {
                  for (int j = i + 1; j < nums.size(); j++) { // Avoid duplicate pairs
                        int product = nums[i] * nums[j];

                        // If this product has been seen before, update result
                        tuples += productCount[product] * 8;

                        // Increment the count of this product
                        productCount[product]++;
                  }
            }

            return tuples;
      }
};

//!------------------------------------------------------------------------------------------------------ 

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n ^ 2)

#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
      int tupleSameProduct(vector<int>& nums) {
            // Unordered map to store the frequency of each product
            unordered_map<int, int> productCount;

            // Iterate over all pairs of numbers in nums
            for (int i = 0; i < nums.size(); i++) {
                  for (int j = i + 1; j < nums.size(); j++) { // Start from i + 1 to avoid duplicate pairs
                        int product = nums[i] * nums[j];

                        // Increment the count of this product
                        productCount[product]++;
                  }
            }

            int tuples = 0; // Variable to store the count of valid tuples

            // Calculate the number of valid tuples
            for (auto& pair : productCount) {
                  int val = pair.second;
                  if (val > 1) {
                        // Using formula: val * (val - 1) * 4
                        // This counts all possible (a, b, c, d) tuples that satisfy the condition
                        tuples += val * (val - 1) * 4;
                  }
            }

            return tuples;
      }
};
