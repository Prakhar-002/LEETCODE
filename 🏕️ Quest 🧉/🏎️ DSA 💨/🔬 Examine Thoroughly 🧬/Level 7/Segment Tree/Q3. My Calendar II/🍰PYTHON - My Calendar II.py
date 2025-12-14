
#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 731

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(events)

#? 🧺 Space complexity ➺ O(n)

class MyCalendarTwo:

      def __init__(self):
            # bookings that do not overlap with other bookings
            self.non_overlapping = []
            # bookings that overlap with exactly one other booking
            self.overlapping = []

      def book(self, start: int, end: int) -> bool:
            # Check for Triple Booking iterates through each booking
            for s, e in self.overlapping:
                  # If it finds that the new booking (`start, end`) 
                  # overlaps with any of these bookings
                  if not (end <= s or e <=  start):
                        # it means adding this booking would result in a triple booking
                        # so return false
                        return False

            # Handle Overlapping with Non-overlapping Bookings
            for s, e in self.non_overlapping:
                  # If an overlap is found with a `non_overlapping` booking
                  if not (end <= s or e <=  start):
                        # calculates the overlapping segment and append to the `overlapping` list
                        self.overlapping.append(
                              # calculation uses `max(start, s)` and `min(end, e)` 
                              # to find the overlapping segment
                              (max(start, s), min(end, e))
                        )

            #  adds the new booking (`start, end`) to the `non_overlapping`
            self.non_overlapping.append((start, end))
            # return true at last for successful booking
            return True
