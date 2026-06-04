//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3751

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums1 - nums2)

//? 🧺 Space complexity ➺ O(1)

var totalWaviness = function(num1, num2) {

      // Count peaks and valleys in the digit sequence of a number
      function waviness(n) {
            let waviness = 0;

            for (let i = 1; i < n.length - 1; i++) {
                  const prev = Number(n[i - 1]);
                  const curr = Number(n[i]);
                  const next = Number(n[i + 1]);

                  const peak   = prev < curr && curr > next;    // Middle digit is highest
                  const valley = prev > curr && curr < next;    // Middle digit is lowest

                  if (peak || valley)
                        waviness++;
            }

            return waviness;
      }

      let ans = 0;

      // Accumulate waviness for every number in the range
      for (let i = num1; i <= num2; i++) {
            ans += waviness(String(i));
      }

      return ans;
};