//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2169

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var countDays = function (days, meetings) {
      // Sort the meeting intervals based on the start day
      meetings.sort((a, b) => a[0] - b[0]);

      // Variable to track the end of the last processed meeting
      let prev_meet_end = 0;

      // Iterate through each meeting interval
      for (let [start, end] of meetings) {
            // Ensure the meeting starts after the previous meeting
            start = Math.max(start, prev_meet_end + 1);

            // Calculate the number of days occupied by the current meeting
            let occupied_days = end - start + 1;

            // Deduct the occupied days from total available days (if valid)
            days -= Math.max(occupied_days, 0);

            // Update the end of the last processed meeting
            prev_meet_end = Math.max(prev_meet_end, end);
      }

      // Return the number of remaining free days
      return days;
}
