#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2807

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

#? 🧺 Space complexity ➺ O(1)

class Solution:
      # Method to find gcd of two integers. It uses the Euclidean algorithm
      def gcd(self, a, b):
            # The loop continues until `b` equals 0 ...
            while b > 0:
                  # repeatedly sets `a` to `b`, and `b` to `a % b` (the remainder of `a` divided by `b`)
                  a, b = b, a % b

            # ... at which point `a` will contain the gcd.
            return a

      def insertGreatestCommonDivisors(self, head: Optional[ListNode]) -> Optional[ListNode]:
            #  initializes a pointer `cur` to keep track of the current position
            cur = head

            # loop continues as long as the current node (`cur`) has a next node
            while cur.next:
                  # These variables store the values of the current node and its next node.
                  numOne, numTwo = cur.val, cur.next.val

                  # A new `ListNode` is created with the value set to the gcd of `numOne` and `numTwo`
                  # The `next` pointer of this new node points to what was originally `cur.next`
                  cur.next = ListNode(self.gcd(numOne, numTwo), cur.next)

                  # The `cur` pointer then skips the newly inserted node to move to the next original node in the list
                  cur = cur.next.next

            # Returning the linked list after insertion
            return head
