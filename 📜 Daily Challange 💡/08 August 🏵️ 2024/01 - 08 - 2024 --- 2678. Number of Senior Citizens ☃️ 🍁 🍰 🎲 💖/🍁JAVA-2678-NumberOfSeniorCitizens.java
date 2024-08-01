//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2678

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = details length

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int countSeniors(String[] details) {
            int oldPassenger = 0;

            // extract the age for every passenger
            for (String passenger : details) {
                  // our age lies between 11 and 12 character
                  int age = Integer.parseInt(passenger.substring(11, 13));
                  // Integer.parseInt will do ->
                  // int age = (passenger.charAt(11) - '0') * 10 + (passenger.charAt(12) - '0');

                  // check if age is greater than 60
                  if (age > 60) {
                        // count old Passengers
                        oldPassenger += 1;
                  }
            }

            // return our ans
            return oldPassenger;
      }
}