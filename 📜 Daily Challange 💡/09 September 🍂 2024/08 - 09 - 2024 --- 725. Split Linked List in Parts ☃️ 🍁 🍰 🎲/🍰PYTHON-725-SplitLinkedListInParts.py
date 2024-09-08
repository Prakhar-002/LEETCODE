#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 725

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

#? 🧺 Space complexity ➺ O(k)

class Solution:
      def splitListToParts(self, head: Optional[ListNode], k: int) -> List[Optional[ListNode]]:
            # `length` is initialized to `0` to keep track of the total number of nodes in the linked list
            length = 0
            # `cur` is initialized to `head` and iterates over the linked list to count the nodes
            cur = head

            # while cur is not `None`
            while cur:
                  # update the cur pointer
                  cur = cur.next
                  # increment the length of linked list by 1 for each node
                  length += 1

            #  `base_len`: the base length for each part
            base_len  = length // k
            # `remainingNode`: any left-over nodes after equally dividing the nodes
            remainingNode = length % k

            # Initialize `cur` again to start from the `head` of the linked list
            cur = head
            #  Define `partsArr` to store each part of the split linked lis
            partsArr = []

            # For each part from `0` to `k-1
            for _ in range(k):
                  # Append the current node (`cur`) to `partsArr` to mark the beginning of this part
                  partsArr.append(cur)

                  # Move the pointer `cur` forward by `base_len - 1` nodes
                  # If there are `remainingNode`s, one additional node is included in the current part by checking 
                  for _ in range(base_len - 1 + (1 if remainingNode else 0)):
                        if not cur:
                              break
                        cur = cur.next

                  # If `remainingNode` is positive, decrement it to distribute the remaining nodes among the initial parts.
                  remainingNode -= (1 if remainingNode else 0)

                  # After setting the last node of the current part, if `cur` is not `None`, detach this part from the rest by:
                  if cur:
                        #  Setting the `next` pointer of `cur` to `None`.
                        #  Moving `cur` to the next node.
                        cur.next, cur = None, cur.next

            # return `partsArr` containing the head nodes of each part.
            return partsArr