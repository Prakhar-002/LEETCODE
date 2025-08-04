#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 23

#? ⌚ Time complexity ➺ O(n Log n) 👉🏻  n = Total Nodes

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def mergeKLists(self, lists: List[ListNode]) -> ListNode:
            # `List` to temporarily store all the values from all linked lists
            merge_list = []

            # iterates through each linked list in the `lists` 
            for linked_list in lists:
                  # a pointer `cur` for current linked list
                  cur = linked_list
                  # iterates through each node in the current linked list
                  while cur:
                        # add values of node to `merge_list`
                        merge_list.append(cur.val)
                        # shift the pointer to next node
                        cur = cur.next

            # sort values are in ascending order
            merge_list.sort()

            # new linked list is initialized with a dummy head node
            merge_linked_list_node = ListNode(0)
            # pointer `cur` is assigned to this dummy node
            cur = merge_linked_list_node

            # iterates over `merge_list`, and for each integer value
            for integer in merge_list:
                  # new node is created and linked to previous node
                  cur.next = ListNode(integer)
                  # `cur` pointer is then moved to this new node
                  cur = cur.next

            # returns the head of the new linked list
            return merge_linked_list_node.next

