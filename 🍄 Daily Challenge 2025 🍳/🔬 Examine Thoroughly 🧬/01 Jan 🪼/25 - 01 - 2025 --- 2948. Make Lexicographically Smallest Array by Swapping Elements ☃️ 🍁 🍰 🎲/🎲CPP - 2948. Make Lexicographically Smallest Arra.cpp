//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2948

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <deque>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution {
public:
      vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
            // List of queues to group elements
            vector<deque<int>> groups;

            // Map to store each number's group index
            map<int, int> numToGroup;

            // Create a copy of the original array and sort it
            vector<int> sortedNums = nums;
            sort(sortedNums.begin(), sortedNums.end());

            // Group the elements using the sorted array
            for (int n : sortedNums) {
                  // If no groups exist or the difference between the current
                  // number and the last number in the last group exceeds the limit,
                  // create a new group
                  if (groups.empty() || abs(n - groups.back().back()) > limit) {
                        groups.push_back(deque<int>());
                  }

                  // Add the number to the current group
                  groups.back().push_back(n);

                  // Store the group index for the number
                  numToGroup[n] = groups.size() - 1;
            }

            // Initialize the result vector
            vector<int> lexArr(nums.size());

            // Iterate through the original array of numbers
            for (int i = 0; i < nums.size(); i++) {
                  // Get the group index for the number
                  int n = nums[i];
                  int idx = numToGroup[n];

                  // Append the smallest available number from the group to the result
                  lexArr[i] = groups[idx].front();
                  groups[idx].pop_front();
            }

            // Return the lexicographically smallest array
            return lexArr;
      }
};
