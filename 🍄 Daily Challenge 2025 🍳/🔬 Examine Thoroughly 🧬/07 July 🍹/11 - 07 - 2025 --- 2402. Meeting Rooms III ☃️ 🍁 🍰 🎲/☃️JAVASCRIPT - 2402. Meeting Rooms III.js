//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2402

//? ⌚ Time complexity ➺ O(m * log m + m log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var mostBooked = function (n, meetings) {
      // Sort meetings by start time
      meetings.sort((a, b) => a[0] - b[0]);

      let count = new Array(n).fill(0); // Count how many times each room is booked

      let available = [];  // Min-heap of available rooms (by room number)
      for (let i = 0; i < n; i++) available.push(i);
      available.sort((a, b) => a - b);

      // Min-heap for ongoing meetings: [endTime, room]
      let used = [];

      for (let [start, end] of meetings) {
            // Free rooms that are done before the current meeting starts
            used.sort((a, b) => a[0] - b[0]);
            while (used.length && used[0][0] <= start) {
                  let [_, room] = used.shift();
                  available.push(room);
            }

            available.sort((a, b) => a - b); // Keep smallest room number at top

            if (available.length) {
                  let room = available.shift();
                  used.push([end, room]);
                  count[room]++;
            } else {
                  // No room free, wait until the earliest one gets free
                  used.sort((a, b) => a[0] - b[0]);
                  let [readyTime, room] = used.shift();
                  used.push([readyTime + (end - start), room]);
                  count[room]++;
            }
      }

      // Find room with max meeting count
      let maxRoom = 0;
      for (let i = 1; i < n; i++) {
            if (count[i] > count[maxRoom]) {
                  maxRoom = i;
            }
      }

      return maxRoom;
};
