//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 739

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = No. of events

//? 🧺 Space complexity ➺ O(n)

// https://github.com/Prakhar-002/LEETCODE

// ⌚ Time complexity -> O(n ^ 22) ->  n = No. of events

//  Space complexity -> O(n)

var MyCalendar = function () {
      // initializes an instance variable `events` as an empty array
      this.events = [];
}

MyCalendar.prototype.book = function (start, end) {
      // iterates over all already booked events in the `events` array
      // extract event's start `s` and event end `e`
      for (let [s, e] of this.events) {
            // checks for any overlap between the 
            // current event `[s, e]` and the new event `[start, end]`
            // if the existing event's end time `e` is greater than the new event's start time `start`
            // if the new event's end time `end` is greater than the existing event's start time `s`
            if (e > start && end > s) {
                  // returns `false`
                  return false;
            }
      }
      // If no conflict is found : Append the new event `[start, end]`
      this.events.push([start, end]);
      // returns `true`, indicating that the event has been successfully booked
      return true;
};