//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 739

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = No. of events

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <utility>
using namespace std;

class MyCalendar {
private:
      vector<pair<int, int>> events;

public:
      MyCalendar() {
      // Constructor is empty as we don't need to initialize anything
      }

      bool book(int start, int end) {
            // iterates over all already booked events in the `events` vector
            for (const auto& event : events) {
                  // extract start `s` and end `e` from event
                  int s = event.first;
                  int e = event.second;
                  // checks for any overlap between the 
                  // current event `(s, e)` and the new event `(start, end)`
                  // if the existing event's end time `e` is greater than the new event's start time `start`
                  // if the new event's end time `end` is greater than the existing event's start time `s`
                  if (e > start && end > s) {
                        // returns `false`
                        return false;
                  }
            }
            // If no conflict is found : Append the new event `(start, end)`
            events.emplace_back(start, end);
            // returns `true`, indicating that the event has been successfully booked
            return true;
      }
};

