//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 731

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(events)

//? 🧺 Space complexity ➺ O(n)

var MyCalendarTwo = function () {
      // bookings that do not overlap with other bookings
      this.nonOverlapping = [];
      // bookings that overlap with exactly one other booking
      this.overlapping = [];
};

MyCalendarTwo.prototype.book = function (start, end) {
      // Check for Triple Booking iterates through each booking
      for (let [s, e] of this.overlapping) {
            // If it finds that the new booking (start, end) 
            // overlaps with any of these bookings
            if (!(end <= s || e <= start)) {
                  // it means adding this booking would result in a triple booking
                  // so return false
                  return false;
            }
      }

      // Handle Overlapping with Non-overlapping Bookings
      for (let [s, e] of this.nonOverlapping) {
            // If an overlap is found with a non_overlapping booking
            if (!(end <= s || e <= start)) {
                  // calculates the overlapping segment and append to the overlapping list
                  this.overlapping.push(
                        // calculation uses Math.max(start, s) and Math.min(end, e) 
                        // to find the overlapping segment
                        [Math.max(start, s), Math.min(end, e)]
                  );
            }
      }

      // adds the new booking (start, end) to the non_overlapping
      this.nonOverlapping.push([start, end]);
      // return true at last for successful booking
      return true;
};