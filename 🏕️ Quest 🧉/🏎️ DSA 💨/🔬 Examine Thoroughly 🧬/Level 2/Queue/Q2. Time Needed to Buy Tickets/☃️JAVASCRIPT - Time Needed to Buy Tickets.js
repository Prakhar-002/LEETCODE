//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.1 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

// JavaScript version
var timeRequiredToBuy = function (tickets, k) {
      const T = tickets[k];  // Tickets to buy by kth person
      let total = 0;        // Total time variable

      // Loop over all people in the queue
      for (let i = 0; i < tickets.length; i++) {
            if (i <= k) {
                  // People before or at k can buy up to T tickets
                  total += Math.min(tickets[i], T);
            } else {
                  // People after k can buy up to T-1 tickets
                  total += Math.min(tickets[i], T - 1);
            }
      }

      return total;
};
