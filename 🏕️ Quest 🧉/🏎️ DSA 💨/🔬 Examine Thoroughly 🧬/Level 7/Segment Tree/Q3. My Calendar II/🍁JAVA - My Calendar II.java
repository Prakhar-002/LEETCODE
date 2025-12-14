//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 731

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(events)

//? 🧺 Space complexity ➺ O(n)

import java.util.ArrayList;
import java.util.List;

class MyCalendarTwo {
      // bookings that do not overlap with other bookings
      private List<int[]> nonOverlapping;
      // bookings that overlap with exactly one other booking
      private List<int[]> overlapping;

      public MyCalendarTwo() {
            nonOverlapping = new ArrayList<>();
            overlapping = new ArrayList<>();
      }

      public boolean book(int start, int end) {
            // Check for Triple Booking iterates through each booking
            for (int[] booking : overlapping) {
                  // If it finds that the new booking (start, end)
                  // overlaps with any of these bookings
                  if (!(end <= booking[0] || booking[1] <= start)) {
                        // it means adding this booking would result in a triple booking
                        // so return false
                        return false;
                  }
            }

            // Handle Overlapping with Non-overlapping Bookings
            for (int[] booking : nonOverlapping) {
                  // If an overlap is found with a non-overlapping booking
                  if (!(end <= booking[0] || booking[1] <= start)) {
                        // calculates the overlapping segment and append to the overlapping list
                        overlapping.add(new int[] {
                                    // calculation uses Math.max(start, s) and Math.min(end, e)
                                    // to find the overlapping segment
                                    Math.max(start, booking[0]), Math.min(end, booking[1])
                        });
                  }
            }

            // adds the new booking (start, end) to the nonOverlapping
            nonOverlapping.add(new int[] { start, end });
            // return true at last for successful booking
            return true;
      }
}