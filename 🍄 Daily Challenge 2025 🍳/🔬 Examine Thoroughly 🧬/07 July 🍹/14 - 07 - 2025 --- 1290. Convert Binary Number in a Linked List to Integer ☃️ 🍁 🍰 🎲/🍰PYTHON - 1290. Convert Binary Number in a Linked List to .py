#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1290

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def getDecimalValue(self, head: Optional[ListNode]) -> int:
            result = 0  # This will hold the final decimal value

            while head:
                  # Shift result left by 1 (multiply by 2) and add current bit
                  result = (result << 1) | head.val
                  head = head.next  # Move to next node

            return result  # Return the computed decimal value
