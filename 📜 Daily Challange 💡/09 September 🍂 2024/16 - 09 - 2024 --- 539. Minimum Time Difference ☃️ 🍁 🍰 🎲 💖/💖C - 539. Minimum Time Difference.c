//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 539

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(timePoints)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>

#define MAX_MINUTES (60 * 24)

// Converts a time string in "HH:MM" format to the total minutes 
int timeToMin(const char* time) {
      // `hour` and `minutes` are declared to store the hour and minute
      int hour, minutes;
      // `sscanf` to expect two integers separated by a colon (`:`)
      // `sscanf` assigns the parsed values to `hour` and `minutes`
      sscanf(time, "%d:%d", &hour, &minutes);
      // Multiplies the hour value by 60 and adds the minute value
      return 60 * hour + minutes;
}

int findMinDifference(char** timePoints, int timePointsSize) {
      // Initializes a boolean array `minutesExist` of size 1440 (60 * 24)
      // to keep track of which minutes are present in the time points
      bool minutesExist[MAX_MINUTES] = {false};

      // `firstMin` to the largest possible minute value in a day (1440) 
      // and `lastMin` to 0
      int firstMin = MAX_MINUTES, lastMin = 0;

      // For each `timePoint`
      for (int i = 0; i < timePointsSize; i++) {
            // Converts the time to minutes using `timeToMin`.
            int minutes = timeToMin(timePoints[i]);

            // if the time has already been recorded in `minutesExist`
            if (minutesExist[minutes]) {
                  // returns 0, since two identical times give 0 difference
                  return 0;
            }

            // Marks the minute as existing in `minutesExist`
            minutesExist[minutes] = true;

            // `firstMin` with the smallest minute value
            firstMin = (firstMin < minutes) ? firstMin : minutes;
            // `lastMin` with the largest minute value
            lastMin = (lastMin > minutes) ? lastMin : minutes;
      }

      // `minimumMinutes` as the difference between 
      //     the end of the day (60 * 24)
      //     and the first time 
      //     plus the last time 
      // (to account for wrap-around)
      int minimumMinutes = MAX_MINUTES - lastMin + firstMin;

      // `prevMin` Initializes as a pointer at first min value
      int prevMin = firstMin;

      // iterates over each minute between `firstMin` and the last minute of the day
      for (int minutes = firstMin + 1; minutes < MAX_MINUTES; minutes++) {
            // checking only minutes marked as existing
            if (minutesExist[minutes]) {
                  // calculates the difference between the current 
                  // and the previous minute with a time point
                  int diff = minutes - prevMin;
                  // updating `minimumMinutes` if a smaller difference is found
                  minimumMinutes = (minimumMinutes < diff) ? minimumMinutes : diff;
                  // update the `prevMin` to current `minutes`
                  prevMin = minutes;
            }
      }

      // returning the minimum minutes difference 
      return minimumMinutes;
}

