//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 539

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(timePoints)

//? 🧺 Space complexity ➺ O(1)

var findMinDifference = function (timePoints) {
      // Converts a time string in "HH:MM" format to the total minutes 
      const timeToMin = (time) => {
            // splits the string on the colon `:` into hours and minutes
            // Converts the substrings to integers
            const [hour, minutes] = time.split(":").map(Number);
            // Multiplies the hour value by 60 and adds the minute value
            return 60 * hour + minutes;
      };

      // Initializes a boolean array `minutesExist` of size 1440 (60 * 24)
      // to keep track of which minutes are present in the time points
      const minutesExist = new Array(60 * 24).fill(false);

      // `firstMin` to the largest possible minute value in a day (1440) 
      // and `lastMin` to 0
      let firstMin = 60 * 24, lastMin = 0;

      // For each `timePoint`
      for (const timePoint of timePoints) {
            // Converts the time to minutes using `timeToMin`.
            const minutes = timeToMin(timePoint);

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
      //     the end of the day (60 * 24)
      //     and the first time 
      //     plus the last time 
      // (to account for wrap-around)
      let minimumMinutes = 60 * 24 - lastMin + firstMin;

      // `prevMin` Initializes as a pointer at first min value
      let prevMin = firstMin;

      // iterates over each minute between `firstMin` and the last minute of the day
      for (let minutes = firstMin + 1; minutes < minutesExist.length; minutes++) {
            // checking only minutes marked as existing
            if (minutesExist[minutes]) {
                  // calculates the difference between the current 
                  // and the previous minute with a time point
                  const diff = minutes - prevMin;
                  // updating `minimumMinutes` if a smaller difference is found
                  minimumMinutes = Math.min(minimumMinutes, diff);
                  // update the `prevMin` to current `minutes`
                  prevMin = minutes;
            }
      }

      // returning the minimum minutes difference 
      return minimumMinutes;
};