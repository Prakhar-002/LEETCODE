//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 860

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(bills)

//? 🧺 Space complexity ➺ O(1)

var lemonadeChange = function (bills) {
      // Initialize counters for $5 and $10 bills
      let five = 0;
      let ten = 0;

      // Iterate through each bill in the input array
      for (let bill of bills) {
            // Case 1: Customer pays with $5
            if (bill === 5) {
                  five++;
            }
            // Case 2: Customer pays with $10
            else if (bill === 10) {
                  // Check if we have a $5 bill to give as change
                  if (five >= 1) {
                        five--;
                        ten++;
                  } else {
                        return false;  // Can't provide change
                  }
            }
            // Case 3: Customer pays with $20
            else {
                  // Option 1: Give change as $10 + $5
                  if (five >= 1 && ten >= 1) {
                        ten--;
                        five--;
                  }
                  // Option 2: Give change as $5 + $5 + $5
                  else if (five >= 3) {
                        five -= 3;
                  }
                  // If neither option is possible, we can't provide change
                  else {
                        return false;
                  }
            }
      }

      // If we've made it through all transactions, return true
      return true;
};