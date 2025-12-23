#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2054 

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(events)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def maxTwoEvents(self, events: List[List[int]]) -> int:
            # Step 1: Sort the events by their start time.
            # Each event is represented as [startTime, endTime, value].
            events.sort(key=lambda x: x[0])

            n = len(events)  # Number of events.

            # Step 2: Create a suffix array to store the maximum event value from each event onward.
            suffixMax = [0] * n
            # Initialize the last element of suffixMax with the value of the last event.
            suffixMax[-1] = events[-1][2]

            # Populate the suffixMax array.
            # For each event from the second-to-last to the first, store the maximum value
            # between the current event and all events after it.
            for i in range(n - 2, -1, -1):
                  suffixMax[i] = max(events[i][2], suffixMax[i + 1])

            # Step 3: Iterate through each event to calculate the maximum sum of two non-overlapping events.
            maxSum = 0

            for i in range(n):
                  # Binary search for the next non-overlapping event that starts after the current event ends.
                  l, r = i + 1, n - 1
                  nextEventIndex = -1  # Stores the index of the next valid event.

                  while l <= r:
                        mid = l + (r - l) // 2
                        # Check if the event at index 'mid' starts after the current event ends.
                        if events[mid][0] > events[i][1]:
                              nextEventIndex = mid
                              r = mid - 1  # Continue searching in the left half for an earlier valid event.
                        else:
                              l = mid + 1  # Search in the right half.

                  # If a valid next event is found, calculate the potential maximum sum of values.
                  if nextEventIndex != -1:
                        maxSum = max(maxSum, events[i][2] + suffixMax[nextEventIndex])

                  # Update the maxSum considering only the current event.
                  maxSum = max(maxSum, events[i][2])

            # Return the maximum sum of values for two non-overlapping events.
            return maxSum