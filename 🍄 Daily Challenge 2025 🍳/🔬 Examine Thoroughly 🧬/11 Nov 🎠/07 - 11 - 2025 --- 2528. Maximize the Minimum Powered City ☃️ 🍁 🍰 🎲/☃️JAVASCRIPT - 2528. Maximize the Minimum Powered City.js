//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2528

//? ⌚ Time complexity ➺ O(n lod D) 👉🏻  n = len(stations)

//? 🧺 Space complexity ➺ O(n)

var maxPower = function (stations, r, k) {
      const n = stations.length;
      // cnt array used for difference array technique to efficiently handle range power updates
      const cnt = new Array(n + 1).fill(0);

      // Build the difference array by adding and removing station powers within radius influence
      for (let i = 0; i < n; i++) {
            const left = Math.max(0, i - r);           // Left boundary of influence
            const right = Math.min(n, i + r + 1);      // Right boundary (+1 for exclusive)
            cnt[left] += stations[i];                   // Add power at left boundary
            cnt[right] -= stations[i];                  // Subtract power beyond right boundary
      }

      // Check if minimum power 'val' can be achieved using at most k extra stations
      const check = (val) => {
            const diff = [...cnt];     // Copy the difference array for simulation
            let sum = 0;               // Running power sum at current city
            let remaining = k;         // Extra stations left to add

            for (let i = 0; i < n; i++) {
                  sum += diff[i];      // Calculate current city's power
                  if (sum < val) {    // If less than required
                        const add = val - sum;      // Amount needed to reach val
                        if (remaining < add) {     // Not enough extra stations left
                              return false;
                        }
                        remaining -= add;           // Use extra stations
                        const end = Math.min(n, i + 2 * r + 1);  // End of influence range for added stations
                        diff[end] -= add;          // Remove influence of added stations after end
                        sum += add;                // Update current city power
                  }
            }
            return true;                    // Successfully met the power 'val' for all cities
      };

      // Initialize binary search boundaries
      let lo = Math.min(...stations);
      let hi = stations.reduce((a, b) => a + b, 0) + k;
      let res = 0;

      // Binary search to find maximum minimum achievable power level
      while (lo <= hi) {
            const mid = Math.floor(lo + (hi - lo) / 2);
            if (check(mid)) {
                  res = mid;
                  lo = mid + 1;   // Try higher values
            } else {
                  hi = mid - 1;   // Try lower values
            }
      }
      return res;
};
