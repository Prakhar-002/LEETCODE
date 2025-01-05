#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2130

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

#? 🧺 Space complexity ➺ O(1)

class Solution: 
      def pairSum(self, head: ListNode) -> int:
            # If the list has only two elements, return their sum directly
            if head.next and head.next.next is None:
                  return head.val + head.next.val

            # Initialize slow and fast pointers for finding the middle of the list
            slow, fast = head, head

            # Move slow by 1 step and fast by 2 steps to reach the middle
            while fast:
                  slow = slow.next
                  fast = fast.next.next if fast.next else None

            # Reverse the second half of the list starting from the slow pointer
            prev = None
            while slow:
                  next_node = slow.next  # Save the next node
                  slow.next = prev       # Reverse the link
                  prev = slow            # Move prev to current node
                  slow = next_node       # Move slow to the next node

            # At this point, prev points to the head of the reversed second half
            max_sum = 0
            second_half = prev  # The second half of the list

            # Compare nodes from the first half and the reversed second half
            while second_half:
                  max_sum = max(max_sum, head.val + second_half.val)  # Calculate max pair sum
                  head = head.next  # Move head to the next node in the first half
                  second_half = second_half.next  # Move second_half to the next node

            # Return the maximum pair sum found
            return max_sum
