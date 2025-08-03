#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 143

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def reorderList(self, head: Optional[ListNode]) -> None:
            # Step 1: Use slow and fast pointer to find the middle of the list
            slow = head                     # Slow pointer moves one step
            fast = head                     # Fast pointer moves two steps

            while fast and fast.next:
                  slow = slow.next
                  fast = fast.next.next

            # Step 2: Reverse the second half of the list starting from slow.next
            second = slow.next              # Second half begins after the middle
            prev = None                     # Used to build the reversed list
            slow.next = None                # Cut off the first half

            while second:
                  temp = second.next        # Store next node
                  second.next = prev        # Reverse the link
                  prev = second             # Move prev forward
                  second = temp             # Move to the next node

            # Step 3: Merge the two halves — first half and reversed second half
            first, second = head, prev      # Start merging from head and reversed head

            while second:
                  t1, t2 = first.next, second.next   # Save next pointers
                  first.next = second                # Link first to second
                  second.next = t1                   # Link second to original next of first
                  first, second = t1, t2             # Move both pointers forward