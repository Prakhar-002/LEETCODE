//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2169

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      int countDays(int days, vector<vector<int>>& meetings) {
            // Sort the meeting intervals based on the start day
            sort(meetings.begin(), meetings.end());

            // Variable to track the end of the last processed meeting
            int prev_meet_end = 0;

            // Iterate through each meeting interval
            for (const auto& meeting : meetings) {
                  int start = meeting[0];
                  int end = meeting[1];

                  // Ensure the meeting starts after the previous meeting
                  start = max(start, prev_meet_end + 1);

                  // Calculate the number of days occupied by the current meeting
                  int occupied_days = end - start + 1;

                  // Deduct the occupied days from total available days (if valid)
                  days -= max(occupied_days, 0);

                  // Update the end of the last processed meeting
                  prev_meet_end = max(prev_meet_end, end);
            }

            // Return the number of remaining free days
            return days;
      }
};
