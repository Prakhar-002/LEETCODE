//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2125

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(bank)

//? 🧺 Space complexity ➺ O(1)   -> m = len(max(bank))

var numberOfBeams = function (bank) {
      let beams = 0;         // Total beams
      let prev = 0;          // Devices in previous row

      for (let s of bank) {
            // Count devices in current row
            let cam = 0;
            for (let ch of s)
                  if (ch === '1') cam++;
            if (cam > 0) {
                  beams += prev * cam;
                  prev = cam;
            }
      }
      return beams;
};
