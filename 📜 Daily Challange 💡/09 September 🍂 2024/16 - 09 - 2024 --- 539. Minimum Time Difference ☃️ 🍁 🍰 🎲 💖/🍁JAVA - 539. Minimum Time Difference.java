//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 539

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(timePoints)

//? 🧺 Space complexity ➺ O(1)

import java.util.List;

class Solution {
      // Converts a time string in "HH:MM" format to the total minutes
      private int timeToMin(String time) {
            // splits the string on the colon `:` as a array of length 2
            String[] parts = time.split(":");
            // Converts the substrings hour to integers
            int hour = Integer.parseInt(parts[0]);
            // Converts the substrings minutes to integers
            int minutes = Integer.parseInt(parts[1]);
            // Multiplies the hour value by 60 and adds the minute value
            return 60 * hour + minutes;
      }

      public int findMinDifference(List<String> timePoints) {
            // Initializes a boolean array `minutesExist` of size 1440 (60 * 24)
            // to keep track of which minutes are present in the time points
            boolean[] minutesExist = new boolean[60 * 24];

            // `firstMin` to the largest possible minute value in a day (1440)
            // and `lastMin` to 0
            int firstMin = 60 * 24, lastMin = 0;

            // For each `timePoint`
            for (String timePoint : timePoints) {
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
                  firstMin = Math.min(firstMin, minutes);
                  // `lastMin` with the largest minute value
                  lastMin = Math.max(lastMin, minutes);
            }

            // `minimumMinutes` as the difference between
            //      the end of the day (60 * 24)
            //      and the first time
            //      plus the last time
            // (to account for wrap-around)
            int minimumMinutes = 60 * 24 - lastMin + firstMin;

            // `prevMin` Initializes as a pointer at first min value
            int prevMin = firstMin;

            // iterates over each minute between `firstMin` and the last minute of the day
            for (int minutes = firstMin + 1; minutes < minutesExist.length; minutes++) {
                  // checking only minutes marked as existing
                  if (minutesExist[minutes]) {
                        // calculates the difference between the current
                        // and the previous minute with a time point
                        int diff = minutes - prevMin;
                        // updating `minimumMinutes` if a smaller difference is found
                        minimumMinutes = Math.min(minimumMinutes, diff);
                        // update the `prevMin` to current `minutes`
                        prevMin = minutes;
                  }
            }

            // returning the minimum minutes difference
            return minimumMinutes;
      }
}
