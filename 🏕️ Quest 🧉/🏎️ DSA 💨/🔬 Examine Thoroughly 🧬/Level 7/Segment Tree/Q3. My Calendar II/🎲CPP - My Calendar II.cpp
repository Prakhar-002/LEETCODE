
//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 731

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(events)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <algorithm>
using namespace std;

class MyCalendarTwo {
private:
      // bookings that do not overlap with other bookings
      vector<pair<int, int>> non_overlapping;
      // bookings that overlap with exactly one other booking
      vector<pair<int, int>> overlapping;

public:
      MyCalendarTwo() {}

      bool book(int start, int end) {
            // Check for Triple Booking iterates through each booking
            for (const auto& [s, e] : overlapping) {
                  // If it finds that the new booking (`start, end`) 
                  // overlaps with any of these bookings
                  if (!(end <= s || e <= start)) {
                        // it means adding this booking would result in a triple booking
                        // so return false
                        return false;
                  }
            }

            // Handle Overlapping with Non-overlapping Bookings
            for (const auto& [s, e] : non_overlapping) {
                  // If an overlap is found with a `non_overlapping` booking
                  if (!(end <= s || e <= start)) {
                        // calculates the overlapping segment and append to the `overlapping` list
                        overlapping.emplace_back(
                              // calculation uses `max(start, s)` and `min(end, e)` 
                              // to find the overlapping segment
                              max(start, s), min(end, e)
                        );
                  }
            }

            // adds the new booking (`start, end`) to the `non_overlapping`
            non_overlapping.emplace_back(start, end);
            // return true at last for successful booking
            return true;
      }
};
