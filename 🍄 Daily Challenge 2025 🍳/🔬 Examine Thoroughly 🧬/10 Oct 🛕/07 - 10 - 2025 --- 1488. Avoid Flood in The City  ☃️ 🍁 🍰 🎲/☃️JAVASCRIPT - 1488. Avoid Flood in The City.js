//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1488

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var avoidFlood = function (rains) {
      const n = rains.length;
      const res = Array(n).fill(1);
      const sunnyDays = [];

      // Map to store lake -> last rain day
      const lastRain = new Map();

      // Helper function: binary search for smallest element > target in sorted array sunnyDays
      function binarySearch(target) {
            let l = 0, r = sunnyDays.length;
            while (l < r) {
                  let mid = l + ((r - l) >> 1);
                  if (sunnyDays[mid] > target) r = mid;
                  else l = mid + 1;
            }
            return l;
      }

      for (let day = 0; day < n; day++) {
            let lake = rains[day];
            if (lake === 0) {
                  // Sunny day, add to array
                  sunnyDays.push(day);
            } else {
                  res[day] = -1;

                  if (lastRain.has(lake)) {
                        let lastRainDay = lastRain.get(lake);
                        let idx = binarySearch(lastRainDay);

                        if (idx === sunnyDays.length) {
                              // No sunny day to dry lake -> flood
                              return [];
                        }

                        // Dry the lake on this sunny day
                        let dryDay = sunnyDays[idx];
                        res[dryDay] = lake;

                        // Remove the used sunny day from sunnyDays
                        sunnyDays.splice(idx, 1);
                  }

                  lastRain.set(lake, day);
            }
      }

      return res;
};
