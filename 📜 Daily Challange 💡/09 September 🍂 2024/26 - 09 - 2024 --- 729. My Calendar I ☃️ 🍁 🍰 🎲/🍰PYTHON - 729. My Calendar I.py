#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 739

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = No. of events

#? 🧺 Space complexity ➺ O(n)

class MyCalendar:

      def __init__(self):
            # initializes an instance variable `events` as an empty list
            self.events = []

      def book(self, start: int, end: int) -> bool:
            # iterates over all already booked events in the `events` list
            # extract event's start `s` and event end `e`
            for s, e in self.events:
                  # checks for any overlap between the 
                  # current event `(s, e)` and the new event `(start, end)`
                  # if the existing event's end time `e` is greater than the new event's start time `start`
                  # if the new event's end time `end` is greater than the existing event's start time `s`
                  if e > start and end > s:
                        # returns `False`
                        return False
            # If no conflict is found : Append the new event `(start, end)`
            self.events.append((start, end))
            # returns `True`, indicating that the event has been successfully booked
            return True