//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 23

//? ⌚ Time complexity ➺ O(n Log n) 👉🏻  n = Total Nodes

//? 🧺 Space complexity ➺ O(n)

var mergeKLists = function (lists) {
      // Array to temporarily store all the values from all linked lists
      let mergeList = [];

      // iterates through each linked list in the `lists` 
      for (let linkedList of lists) {
            // a pointer `cur` for current linked list
            let cur = linkedList;
            // iterates through each node in the current linked list
            while (cur !== null) {
                  // add values of node to `mergeList`
                  mergeList.push(cur.val);
                  // shift the pointer to next node
                  cur = cur.next;
            }
      }

      // sort values in ascending order
      mergeList.sort((a, b) => a - b);

      // new linked list is initialized with a dummy head node
      let mergeLinkedListNode = new ListNode(0);
      // pointer `cur` is assigned to this dummy node
      let cur = mergeLinkedListNode;

      // iterates over `mergeList`, and for each integer value
      for (let integer of mergeList) {
            // new node is created and linked to previous node
            cur.next = new ListNode(integer);
            // `cur` pointer is then moved to this new node
            cur = cur.next;
      }

      // returns the head of the new linked list
      return mergeLinkedListNode.next;
};