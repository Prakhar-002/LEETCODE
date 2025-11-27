#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L2.1 Q2

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def timeRequiredToBuy(self, tickets: List[int], k: int) -> int:
            k_ticket = tickets[k]  # Number of tickets the kth person wants to buy
            total = 0       # Total time accumulated

            # Iterate over all people in the queue
            for i, ticket in enumerate(tickets):
                  if i <= k:
                        # For people before or at position k, they can buy up to k_ticket tickets
                        total += min(ticket, k_ticket)
                  else:
                        # For people after position k, they can buy up to k_ticket-1 tickets
                        total += min(ticket, k_ticket - 1)

            return total 
