//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1386

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

// Helper function to check if 4 consecutive seats are free
// start = 2 → seats 2,3,4,5
// start = 4 → seats 4,5,6,7
// start = 6 → seats 6,7,8,9
var blockFree = function (seats, start) {

      for (let i = start; i < start + 4; i++) {

            // If any seat reserved → block unavailable
            if (seats.has(i))
                  return false;
      }

      // All seats free
      return true;
}

var maxNumberOfFamilies = function (n, reservedSeats) {

      // Map row → reserved seats
      const rows = new Map();

      // Store reserved seats row-wise
      for (let [r, c] of reservedSeats) {

            if (!rows.has(r))
                  rows.set(r, new Set());

            rows.get(r).add(c);
      }

      // Rows without reservations can seat 2 families
      let res = (n - rows.size) * 2;

      // Process rows with reservations
      for (let seats of rows.values()) {

            let left = blockFree(seats, 2);   // seats 2-5
            let middle = blockFree(seats, 4); // seats 4-7
            let right = blockFree(seats, 6);  // seats 6-9

            if (left && right)
                  res += 2;
            else if (left || middle || right)
                  res += 1;
      }

      return res;
}
