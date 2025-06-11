//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3445

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

var maxDifference = function (s, k) {
      const n = s.length;
      let ans = -Infinity; // Initialize the maximum difference as the smallest possible value

      // Function to compute a 2-bit parity status:
      // Bit 1 for cnt_a's parity, Bit 0 for cnt_b's parity
      const getStatus = (cnt_a, cnt_b) => {
            return ((cnt_a & 1) << 1) | (cnt_b & 1);
      };

      // Try all combinations of characters a and b from '0' to '5'
      for (const a of ["0", "1", "2", "3", "4", "5"]) {
            for (const b of ["0", "1", "2", "3", "4", "5"]) {
                  if (a === b) continue; // Skip if characters are the same

                  const best = [Infinity, Infinity, Infinity, Infinity]; // best[status] stores minimum (prev_a - prev_b)

                  let cnt_a = 0, cnt_b = 0;       // Running count of a's and b's in full window
                  let prev_a = 0, prev_b = 0;     // Count of a's and b's in left segment
                  let left = -1;                  // Left pointer (before the start initially)

                  // Slide the right pointer across the string
                  for (let right = 0; right < n; right++) {
                        // Update total count of a's and b's
                        cnt_a += s[right] === a ? 1 : 0;
                        cnt_b += s[right] === b ? 1 : 0;

                        // Shrink window from left to maintain size >= k and at least 2 'b's on the left
                        while (right - left >= k && cnt_b - prev_b >= 2) {
                              const left_status = getStatus(prev_a, prev_b); // Parity of left segment
                              // Store the minimum difference for this status
                              best[left_status] = Math.min(
                                    best[left_status],
                                    prev_a - prev_b
                              );
                              // Move the left boundary of the window
                              left++;
                              prev_a += s[left] === a ? 1 : 0;
                              prev_b += s[left] === b ? 1 : 0;
                        }

                        const right_status = getStatus(cnt_a, cnt_b); // Parity of full window

                        // If there is a matching left segment with flipped 'a' parity
                        if (best[right_status ^ 0b10] !== Infinity) {
                              ans = Math.max(
                                    ans,
                                    cnt_a - cnt_b - best[right_status ^ 0b10]
                              );
                        }
                  }
            }
      }

      return ans; // Return the maximum difference found
};
