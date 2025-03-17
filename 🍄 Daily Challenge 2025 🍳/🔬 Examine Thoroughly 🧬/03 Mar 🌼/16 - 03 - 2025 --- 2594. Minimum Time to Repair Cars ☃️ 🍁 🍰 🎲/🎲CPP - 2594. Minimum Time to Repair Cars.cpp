//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2594

//? ⌚ Time complexity ➺ O(n log (r * cars^2)) 👉🏻  n = len(ranks)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
      // Function to check how many cars can be repaired within the given time
      long long carsRepairedWithin(vector<int>& ranks, long long time) {
            long long repairedCars = 0;

            // Each mechanic repairs cars based on the given time limit
            for (int rank : ranks) {
                  repairedCars += sqrt(time / rank);
            }

            return repairedCars;
      }

      long long repairCars(vector<int>& ranks, int cars) {
            // Binary search boundaries:
            // Minimum possible time = 1
            // Maximum possible time = worst case scenario (highest rank mechanic does all work)
            long long left = 1, right = (long long)ranks[0] * cars * cars;
            long long minTime = -1;

            // Perform binary search to find the least time required to repair all cars
            while (left <= right) {
                  long long mid = left + (right - left) / 2; // Midpoint time guess
                  long long repairedCars = carsRepairedWithin(ranks, mid); // Count repaired cars in `mid` time

                  if (repairedCars >= cars) {
                        minTime = mid;  // Store the valid time
                        right = mid - 1; // Try to find a smaller time
                  } else {
                        left = mid + 1;  // Increase time if not enough cars are repaired
                  }
            }

            return minTime; // Return the minimum time required
      }
};
