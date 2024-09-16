#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 539

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(timePoints)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      # Converts a time string in "HH:MM" format to the total minutes 
      def timeToMin(self, time):
            # splits the string on the colon `:` into hours and minutes
            # Converts the substrings to integers using `map(int, ...)
            hour, minutes = map(int, time.split(":"))
            # Multiplies the hour value by 60 and adds the minute value
            return 60 * hour + minutes

      def findMinDifference(self, timePoints: List[str]) -> int:
            # Initializes a boolean list `minutesExist` of size 1440 (60 * 24)
            # to keep track of which minutes are present in the time points
            minutesExist = [False] * (60 * 24)

            # `firstMin` to the largest possible minute value in a day (1440) 
            # and `lastMin` to 0
            firstMin, lastMin = 60 * 24, 0

            # For each `timePoint`
            for timePoint in timePoints:
                  # Converts the time to minutes using `timeToMin`.
                  minutes = self.timeToMin(timePoint)

                  #  if the time has already been recorded in `minutesExist`
                  if minutesExist[minutes]:
                        # returns 0, since two identical times give 0 difference
                        return 0

                  # Marks the minute as existing in `minutesExist`
                  minutesExist[minutes] = True

                  # `firstMin` with the smallest minute value
                  firstMin = min(firstMin, minutes)
                  # `lastMin` with the largest minute value
                  lastMin = max(lastMin, minutes)

            # `minimumMinutes` as the difference between 
            #     the end of the day (60 * 24)
            #     and the first time 
            #     plus the last time 
            # (to account for wrap-around)
            minimumMinutes = (
                  60 * 24 - 
                  lastMin + 
                  firstMin
            )

            # `prevMin` Initializes as a pointer at first min value
            prevMin = firstMin

            # iterates over each minute between `firstMin` and the last minute of the day
            for minutes in range(firstMin + 1, len(minutesExist)):
                  # checking only minutes marked as existing
                  if minutesExist[minutes]:
                        # calculates the difference between the current 
                        # and the previous minute with a time point
                        diff = minutes - prevMin
                        # updating `minimumMinutes` if a smaller difference is found
                        minimumMinutes = min(minimumMinutes, diff)
                        # update the `prevMin` to current `minutes`
                        prevMin = minutes

            # returning the minimum minutes difference 
            return minimumMinutes
