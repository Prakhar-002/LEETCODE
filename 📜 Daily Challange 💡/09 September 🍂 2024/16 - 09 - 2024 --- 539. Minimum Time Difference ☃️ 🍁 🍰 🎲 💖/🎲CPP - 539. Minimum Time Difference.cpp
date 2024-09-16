//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 539

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(timePoints)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
private:
      // Converts a time string in "HH:MM" format to the total minutes 
      int timeToMin(const string& time) {
            // take first 2 char and make it int as `hour`
            int hour = stoi(time.substr(0, 2));
            // take 4rd and 5th char make it int as `minutes`
            int minutes = stoi(time.substr(3, 2));
            // Multiplies the hour value by 60 and adds the minute value
            return 60 * hour + minutes;
      }

public:
      int findMinDifference(vector<string>& timePoints) {
            // Initializes a boolean vector `minutesExist` of size 1440 (60 * 24)
            // to keep track of which minutes are present in the time points
            vector<bool> minutesExist(60 * 24, false);

            // `firstMin` to the largest possible minute value in a day (1440) 
            // and `lastMin` to 0
            int firstMin = 60 * 24, lastMin = 0;

            // For each `timePoint`
            for (const auto& timePoint : timePoints) {
                  // Converts the time to minutes using `timeToMin`.
                  int minutes = timeToMin(timePoint);

                  // if the time has already been recorded in `minutesExist`
                  if (minutesExist[minutes]) {
                        // returns 0, since two identical times give 0 difference
                        return 0;
                  }

                  // Marks the minute as existing in `minutesExist`
                  minutesExist[minutes] = true;

                  // `firstMin` with the smallest minute value
                  firstMin = min(firstMin, minutes);
                  // `lastMin` with the largest minute value
                  lastMin = max(lastMin, minutes);
            }

            // `minimumMinutes` as the difference between 
            //     the end of the day (60 * 24)
            //     and the first time 
            //     plus the last time 
            // (to account for wrap-around)
            int minimumMinutes = 60 * 24 - lastMin + firstMin;

            // `prevMin` Initializes as a pointer at first min value
            int prevMin = firstMin;

            // iterates over each minute between `firstMin` and the last minute of the day
            for (int minutes = firstMin + 1; minutes < minutesExist.size(); ++minutes) {
                  // checking only minutes marked as existing
                  if (minutesExist[minutes]) {
                        // calculates the difference between the current 
                        // and the previous minute with a time point
                        int diff = minutes - prevMin;
                        // updating `minimumMinutes` if a smaller difference is found
                        minimumMinutes = min(minimumMinutes, diff);
                        // update the `prevMin` to current `minutes`
                        prevMin = minutes;
                  }
            }

            // returning the minimum minutes difference 
            return minimumMinutes;
      }
};