#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 138

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
            # Dictionary to map original nodes to their copies
            # Also handles edge case where a node's next or random is None
            oldToCopy = {None: None}

            cur = head  # Start from the head of the original list

            # First pass: create all node copies (only val is copied, no connections yet)
            while cur:
                  copy = Node(cur.val)     # Create a new node with the same value
                  oldToCopy[cur] = copy    # Map the original node to its copy
                  cur = cur.next           # Move to next node in original list
                  
            cur = head  # Reset pointer to head for second pass

            # Second pass: assign next and random pointers using the mapping
            while cur:
                  copy = oldToCopy[cur]           # Get the copied node
                  copy.next = oldToCopy[cur.next] # Set its 'next' to the copy of cur.next
                  copy.random = oldToCopy[cur.random] # Set its 'random' to the copy of cur.random
                  cur = cur.next                  # Move to next node

            return oldToCopy[head]  # Return the copied head node