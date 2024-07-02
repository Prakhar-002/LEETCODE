//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 701

var addTwoNumbers = function (l1, l2) {
      let temp1 = l1;
      let temp2 = l2;
      let sumVal = 0;
      let carry = 0;
      let dummy = new ListNode(0);
      let head = dummy;

      while (temp1 && temp2) {
            sumVal = temp1.val + temp2.val + carry;
            head.next = new ListNode(sumVal % 10);
            carry = sumVal > 9 ? Math.floor(sumVal / 10) : 0;
            temp1 = temp1.next;
            temp2 = temp2.next;
            head = head.next;
      }

      while (temp1) {
            sumVal = temp1.val + carry;
            head.next = new ListNode(sumVal % 10);
            carry = sumVal > 9 ? Math.floor(sumVal / 10) : 0;
            temp1 = temp1.next;
            head = head.next;
      }

      while (temp2) {
            sumVal = temp2.val + carry;
            head.next = new ListNode(sumVal % 10);
            carry = sumVal > 9 ? Math.floor(sumVal / 10) : 0;
            temp2 = temp2.next;
            head = head.next;
      }

      if (carry !== 0) {
            head.next = new ListNode(carry);
      }

      return dummy.next;
};