//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 725

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(k)

var splitListToParts = function (head, k) {
      // `length` is initialized to `0` to keep track of the total number of nodes in the linked list
      let length = 0;
      // `cur` is initialized to `head` and iterates over the linked list to count the nodes
      let cur = head;

      // while cur is not `null`
      while (cur) {
            // update the cur pointer
            cur = cur.next;
            // increment the length of linked list by 1 for each node
            length++;
      }

      //  `baseLen`: the base length for each part
      const baseLen = Math.floor(length / k);
      // `remainingNode`: any left-over nodes after equally dividing the nodes
      let remainingNode = length % k;

      // Initialize `cur` again to start from the `head` of the linked list
      cur = head;
      //  Define `partsArr` to store each part of the split linked list
      const partsArr = [];

      // For each part from `0` to `k-1`
      for (let i = 0; i < k; i++) {
            // Append the current node (`cur`) to `partsArr` to mark the beginning of this part
            partsArr.push(cur);

            // Move the pointer `cur` forward by `baseLen - 1` nodes
            // If there are `remainingNode`s, one additional node is included in the current part
            for (let j = 0; j < baseLen - 1 + (remainingNode > 0 ? 1 : 0); j++) {
                  if (!cur) break;
                  cur = cur.next;
            }

            // If `remainingNode` is positive, decrement it to distribute the remaining nodes among the initial parts.
            remainingNode = Math.max(0, remainingNode - 1);

            // After setting the last node of the current part, if `cur` is not `null`, detach this part from the rest
            if (cur) {
                  const next = cur.next;
                  cur.next = null;
                  cur = next;
            }
      }

      // return `partsArr` containing the head nodes of each part.
      return partsArr;
};