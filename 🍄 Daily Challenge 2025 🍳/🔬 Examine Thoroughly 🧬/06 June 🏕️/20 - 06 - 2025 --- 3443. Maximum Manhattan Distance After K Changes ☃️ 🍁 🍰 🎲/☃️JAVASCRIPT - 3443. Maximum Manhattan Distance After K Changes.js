//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3443

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1) 

var maxDistance = function (s, k) {
      let latitude = 0;     // Tracks north-south movement
      let longitude = 0;    // Tracks east-west movement
      let ans = 0;
      const n = s.length;

      for (let i = 0; i < n; i++) {
            const ch = s[i];

            // Update coordinates based on direction
            if (ch === 'N') latitude++;
            else if (ch === 'S') latitude--;
            else if (ch === 'E') longitude++;
            else if (ch === 'W') longitude--;

            const currDist = Math.abs(latitude) + Math.abs(longitude); // Manhattan distance
            const maxPossible = currDist + 2 * k;  // Use up to 2k changes

            // Final distance can't exceed number of steps taken (i + 1)
            ans = Math.max(ans, Math.min(maxPossible, i + 1));
      }

      return ans;
};
