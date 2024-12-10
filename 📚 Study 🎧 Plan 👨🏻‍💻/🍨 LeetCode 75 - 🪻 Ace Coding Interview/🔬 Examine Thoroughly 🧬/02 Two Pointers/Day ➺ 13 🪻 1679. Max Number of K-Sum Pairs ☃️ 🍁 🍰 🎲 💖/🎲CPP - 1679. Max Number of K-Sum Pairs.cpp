//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1679

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      int maxOperations(vector<int>& nums, int k) {
            // Sort the array to apply two-pointer technique
            sort(nums.begin(), nums.end());

            int l = 0, r = nums.size() - 1;
            int pairs = 0;

            // Use two pointers to find pairs
            while (l < r) {
                  // Check if the sum of the elements at the two pointers equals k
                  if (nums[l] + nums[r] == k) {
                        pairs++;  // A valid pair is found, so increment the pair count
                        l++;  // Move the left pointer to the right
                        r--;  // Move the right pointer to the left
                  } else if (nums[l] + nums[r] > k) {
                        r--;  // Move the right pointer to the left to decrease the sum
                  } else {
                        l++;  // Move the left pointer to the right to increase the sum
                  }
            }

            // Return the total number of pairs found
            return pairs;
      }
};



//* 2nd Solution  

//!-----------------------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
      int maxOperations(vector<int>& nums, int k) {
            // Initialize a map to store the frequency of numbers
            unordered_map<int, int> count;
            int pairs = 0;

            // Iterate through each number in the vector
            for (int num : nums) {
                  // Calculate the complement that would sum up to k
                  int complement = k - num;

                  // If the complement exists in the map, form a pair
                  if (count[complement] > 0) {
                        pairs++;
                        count[complement]--; // Decrease the count of the complement
                  } else {
                        // If no complement found, add the current number to the map
                        count[num]++;
                  }
            }

            // Return the total number of pairs found
            return pairs;
      }
};
