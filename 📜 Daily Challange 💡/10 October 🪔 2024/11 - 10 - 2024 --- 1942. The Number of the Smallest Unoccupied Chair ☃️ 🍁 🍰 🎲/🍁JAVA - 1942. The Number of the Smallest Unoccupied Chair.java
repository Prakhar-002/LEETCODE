//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1942

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(times)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int smallestChair(int[][] times, int targetFriend) {
            // Create a list to store arrival time, leaving time, and friend index
            List<int[]> timesList = new ArrayList<>();
            for (int i = 0; i < times.length; i++) {
                  timesList.add(new int[] { times[i][0], times[i][1], i });
            }

            // Sort the list based on arrival time
            Collections.sort(timesList, (a, b) -> Integer.compare(a[0], b[0]));

            // Priority queue to store used chairs (leaving time, chair number)
            // Min heap based on leaving time
            PriorityQueue<int[]> usedChair = new PriorityQueue<>((a, b) -> Integer.compare(a[0], b[0]));

            // Priority queue to store available chairs
            // Min heap to always get the smallest chair number
            PriorityQueue<Integer> availableChair = new PriorityQueue<>();

            // Initialize available chairs with numbers from 0 to times.length - 1
            for (int i = 0; i < times.length; i++) {
                  availableChair.offer(i);
            }

            // Iterate through the sorted times list
            for (int[] time : timesList) {
                  int arrivalTime = time[0];
                  int leavingTime = time[1];
                  int idx = time[2];

                  // Free up chairs that are no longer in use
                  // Check if any friend has left before or at the current arrival time
                  while (!usedChair.isEmpty() && usedChair.peek()[0] <= arrivalTime) {
                        int[] leave = usedChair.poll();
                        // Make the chair available again
                        availableChair.offer(leave[1]); 
                  }

                  // Assign the smallest available chair
                  int chair = availableChair.poll();

                  // Mark the chair as used by adding it to the usedChair queue
                  usedChair.offer(new int[] { leavingTime, chair });

                  // If this is the target friend, return the assigned chair
                  if (idx == targetFriend) {
                        return chair;
                  }
            }

            // This line should never be reached if the input is valid
            return -1;
      }
}
