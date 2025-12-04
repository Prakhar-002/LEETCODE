#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L5.1 Q1

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def hasCycle(self, head: Optional[ListNode]) -> bool:
            # Initialize two pointers at the head:
            # slow moves 1 step at a time, fast moves 2 steps at a time.
            slow = head
            fast = head

            # Traverse the list while fast and fast.next are valid.
            # If there is a cycle, fast will eventually meet slow.
            while fast and fast.next:
                  slow = slow.next            # Move slow by 1
                  fast = fast.next.next       # Move fast by 2

                  # If the two pointers meet, there is a cycle.
                  if slow == fast:
                        return True

            # If fast reaches the end (null), there is no cycle.
            return False
