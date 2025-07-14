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

#!----------------------------------------------------------------------- 

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def getDecimalValue(self, head: Optional[ListNode]) -> int:
            # Step 1: Count the total number of bits in the binary number
            bitCount = -1
            nodePointer = head

            while nodePointer:
                  bitCount += 1
                  nodePointer = nodePointer.next  # Move to the next node

            result = 0  # This will store the final decimal value

            # Step 2: Traverse again and compute the decimal value
            while head:
                  if head.val == 1:
                        # Add 2 raised to the current bit position if the bit is 1
                        result += 2 ** bitCount

                  bitCount -= 1  # Move to the next lower bit
                  head = head.next  # Move to the next node

            return result  # Return the computed decimal value
