//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.1 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int timeRequiredToBuy(int[] tickets, int k) {
            int k_ticket = tickets[k];  // Tickets desired by kth person
            int total = 0;       // Total time counter

            // Loop through people in line
            for (int i = 0; i < tickets.length; i++) {
                  if (i <= k) {
                        // People at or before k buy up to k_ticket tickets
                        total += Math.min(tickets[i], k_ticket);
                  } else {
                        // People after k buy up to k_ticket - 1 tickets
                        total += Math.min(tickets[i], k_ticket - 1);
                  }
            }
            return total;
      }
}
