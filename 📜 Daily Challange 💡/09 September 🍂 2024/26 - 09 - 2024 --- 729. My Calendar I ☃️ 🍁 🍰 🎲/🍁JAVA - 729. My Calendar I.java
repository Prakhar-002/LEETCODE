//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 739

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of events

//? 🧺 Space complexity ➺ O(n)

import java.util.ArrayList;
import java.util.List;

class MyCalendar {
      private List<int[]> events;

      public MyCalendar() {
            // initializes an instance variable `events` as an empty ArrayList
            this.events = new ArrayList<>();
      }

      public boolean book(int start, int end) {
            // iterates over all already booked events in the `events` list
            for (int[] event : this.events) {
                  // extract start `s` and end `e` from event
                  int s = event[0];
                  int e = event[1];
                  // checks for any overlap between the
                  // current event `(s, e)` and the new event `(start, end)`
                  // existing event's end time `e` is greater than the new event's start time `start`
                  // new event's end time `end` is greater than the existing event's start time `s`
                  if (e > start && end > s) {
                        // returns `false`
                        return false;
                  }
            }
            // If no conflict is found : Add the new event `(start, end)`
            this.events.add(new int[] { start, end });
            // returns `true`, indicating that the event has been successfully booked
            return true;
      }
}
