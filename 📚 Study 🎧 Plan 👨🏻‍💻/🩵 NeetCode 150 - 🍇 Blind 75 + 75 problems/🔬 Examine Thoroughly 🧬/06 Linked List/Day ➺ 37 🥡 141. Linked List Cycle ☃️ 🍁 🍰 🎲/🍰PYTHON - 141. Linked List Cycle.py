#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 141

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def hasCycle(self, head: ListNode) -> bool:
            # Initialize two pointers starting at the head
            slow = head              # Moves 1 step at a time
            fast = head              # Moves 2 steps at a time

            # Loop while fast and its next node exist
            while fast is not None and fast.next is not None:
                  slow = slow.next              # Move slow one step forward
                  fast = fast.next.next         # Move fast two steps forward

                  # If slow and fast meet, a cycle exists
                  if slow == fast:
                        return True

            # If loop terminates, no cycle is present
            return False