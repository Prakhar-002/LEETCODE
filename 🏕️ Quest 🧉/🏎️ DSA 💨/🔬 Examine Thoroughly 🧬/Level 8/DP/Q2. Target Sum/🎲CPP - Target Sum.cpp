//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 494

//? ⌚ Time complexity ➺ O(n + m) 👉🏻 n = [-sum(numbers), sum(numbers)]

//? 🧺 Space complexity ➺ O(m)    👉🏻 m = sum of absolute values

#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
      int findTargetSumWays(vector<int>& numbers, int targetSum) {
            // Map to store the number of ways to achieve each sum
            unordered_map<int, int> waysToSum;
            waysToSum[0] = 1; // Base case: one way to achieve sum 0

            // Iterate over each number in the input vector
            for (int number : numbers) {
                  // Temporary map for the current iteration
                  unordered_map<int, int> currentWays;

                  // Update ways to achieve each possible sum with the current number
                  for (auto& entry : waysToSum) {
                        int currentSum = entry.first;
                        int count = entry.second;

                        currentWays[currentSum + number] += count;
                        currentWays[currentSum - number] += count;
                  }

                  // Move to the next iteration by replacing the old map
                  waysToSum = currentWays;
            }

            // Return the number of ways to achieve the target sum
            return waysToSum[targetSum];
      }
};