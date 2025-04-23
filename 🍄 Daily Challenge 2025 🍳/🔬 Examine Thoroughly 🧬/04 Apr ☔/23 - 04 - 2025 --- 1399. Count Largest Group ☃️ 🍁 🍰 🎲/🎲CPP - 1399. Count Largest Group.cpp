//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1399

//? ⌚ Time complexity ➺ O(n) 

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      int countLargestGroup(int n) {
            // Vector to store frequency of digit sums (index 1 to 36)
            vector<int> digitSumCount(37, 0);  // index 0 unused

            // Vector to store precomputed digit sums
            vector<int> digitSumCache(n + 1, 0);

            int maxGroupSize = 0;  // Keep track of max group size

            // Loop through numbers from 1 to n
            for (int num = 1; num <= n; num++) {
                  // Calculate digit sum using last digit and cache
                  int digitSum = num % 10 + digitSumCache[num / 10];

                  // Store it in the cache
                  digitSumCache[num] = digitSum;

                  // Update count for this digit sum
                  digitSumCount[digitSum]++;

                  // Update max group size if needed
                  maxGroupSize = max(maxGroupSize, digitSumCount[digitSum]);
            }

            int largestGroups = 0;

            // Count how many groups have max size
            for (int count : digitSumCount) {
                  if (count == maxGroupSize) {
                        largestGroups++;
                  }
            }

            return largestGroups;
      }
};
