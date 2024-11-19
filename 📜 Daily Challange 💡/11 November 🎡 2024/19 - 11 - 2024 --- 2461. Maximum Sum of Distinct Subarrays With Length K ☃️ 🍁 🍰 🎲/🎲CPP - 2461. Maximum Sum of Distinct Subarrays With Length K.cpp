//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2461

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(k)

#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
      long long maximumSubarraySum(vector<int>& nums, int k) {
            // Variable to store the maximum subarray sum
            long long subArraySum = 0;
            // Map to track the frequency of elements in the current subarray
            unordered_map<int, int> countNum;
            // Variable to store the current subarray sum
            long long cur_sum = 0;

            // Left pointer for the sliding window
            int l = 0;

            // Iterate through the array with the right pointer
            for (int r = 0; r < nums.size(); r++) {
                  // Add the current number to the current sum
                  cur_sum += nums[r];
                  // Increment the frequency of the current number
                  countNum[nums[r]]++;

                  // If the window size exceeds `k`, shrink it
                  if (r - l + 1 > k) {
                        // Decrease the frequency of the leftmost element
                        countNum[nums[l]]--;
                        // If its frequency becomes zero, remove it from the map
                        if (countNum[nums[l]] == 0) {
                              countNum.erase(nums[l]);
                        }
                        // Subtract the leftmost element from the current sum
                        cur_sum -= nums[l];
                        // Move the left pointer forward
                        l++;
                  }

                  // Check if the window has exactly `k` distinct elements
                  if (countNum.size() == k) {
                        // Update the maximum subarray sum
                        subArraySum = max(subArraySum, cur_sum);
                  }
            }

            // Return the maximum subarray sum for `k` distinct elements
            return subArraySum;
      }
};
