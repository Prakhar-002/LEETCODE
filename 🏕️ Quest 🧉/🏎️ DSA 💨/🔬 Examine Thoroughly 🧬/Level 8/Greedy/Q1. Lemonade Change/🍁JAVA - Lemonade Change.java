//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L8.1 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(bills)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public boolean lemonadeChange(int[] bills) {
            int five = 0;
            int ten = 0;

            for(int bill : bills){
                  // if we get 5$ 
                  if (bill == 5) {
                        five++;
                  } else if (bill == 10) { // If we get 10$ 
                        if (five >= 1) { // we have to return 5$ so we should have it first
                              five--;
                              ten++;
                        } else { 
                              return false;
                        }
                  } else { // If we get 20$ 
                        if (five >= 1 && ten >= 1) { // We have to return 15$ so 1 -- 10$ and 1 -- 5$
                              ten--;
                              five--;
                        } else if (five >= 3) { // OR we can return 3-- 5% 
                              five -= 3;
                        } else {
                              return false;
                        }
                  }
            }

            return true;
      }
}