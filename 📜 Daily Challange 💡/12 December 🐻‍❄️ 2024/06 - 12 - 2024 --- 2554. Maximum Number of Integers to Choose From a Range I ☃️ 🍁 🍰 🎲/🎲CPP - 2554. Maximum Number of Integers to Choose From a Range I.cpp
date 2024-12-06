//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2554

//? ⌚ Time complexity ➺ O(n) 👉🏻 n = given 

//? 🧺 Space complexity ➺ O(m) 👉🏻 m = len(banned)

#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
      int maxCount(vector<int>& banned, int n, int maxSum) {
            // Initialize the current sum of selected numbers to zero
            int curSum = 0;

            // Initialize the counter for how many numbers have been selected
            int count = 0;

            // Convert the banned vector into a Set for faster lookup
            unordered_set<int> bannedSet(banned.begin(), banned.end());

            // Iterate through numbers from 1 to n
            for (int num = 1; num <= n; num++) {
                  // Check if the current number is not banned and adding it will not exceed maxSum
                  if (bannedSet.find(num) == bannedSet.end() && curSum + num <= maxSum) {
                        // Increment the count of selected numbers
                        count++;

                        // Add the current number to the running total sum
                        curSum += num;
                  }
            }

            // Return the count of numbers that meet the conditions
            return count;
      }
};
