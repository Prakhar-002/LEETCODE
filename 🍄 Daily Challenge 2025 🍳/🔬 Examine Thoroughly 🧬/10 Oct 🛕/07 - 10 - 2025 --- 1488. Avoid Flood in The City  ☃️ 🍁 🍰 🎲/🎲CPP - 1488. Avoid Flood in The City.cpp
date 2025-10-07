//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1488

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <unordered_map>
#include <set>
using namespace std;

class Solution {
public:
      vector<int> avoidFlood(vector<int>& rains) {
            int n = (int)rains.size();
            vector<int> res(n, 1);

            // Keep track of sunny days (indices) in sorted order using set
            set<int> sunnyDays;

            // Map lake -> last rainy day index
            unordered_map<int, int> lastRain;

            for (int day = 0; day < n; day++) {
                  int lake = rains[day];
                  if (lake == 0) {
                        // Sunny day
                        sunnyDays.insert(day);
                  } else {
                        // Rainy day
                        res[day] = -1;

                        if (lastRain.count(lake)) {
                              int lastRainDay = lastRain[lake];

                              // Find sunny day strictly greater than lastRainDay
                              auto it = sunnyDays.upper_bound(lastRainDay);
                              if (it == sunnyDays.end()) {
                                    // No sunny day available to dry, flood
                                    return {};
                              }

                              // Dry lake at the earliest possible sunny day
                              res[*it] = lake;
                              sunnyDays.erase(it);
                        }

                        lastRain[lake] = day;
                  }
            }

            return res;
      }
};
