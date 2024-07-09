//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1701

//? ⌚ Time complexity -> O(n) 👉 Total customers 

//? 🧺 Space complexity -> O(1) 

class Solution {
      public double averageWaitingTime(int[][] customers) {
            long curTime = 0;
            long totalTime = 0;

            for (int[] customer : customers) {
                  int arrivalTime = customer[0];
                  int orderTime = customer[1];

                  // if chef prepare food pervious order
                  // after the arrival time of next customer
                  if (curTime > arrivalTime) {
                        // so customer will wait extra time
                        // extra will be current time - arrival time
                        // cause current time is that time when chef prepared one order
                        totalTime += curTime - arrivalTime;
                  } else {
                        // if customer comes in idle time when chef was free
                        // curTime will be equal to the arrival time
                        curTime = arrivalTime;
                  }

                  // Total time will update by time took to made a dish of previous customer
                  totalTime += orderTime;
                  // current time will also update by time took to made a dish of previous customer
                  curTime += orderTime;
            }

            // Calculate and return average waiting time
            return (double) totalTime / customers.length;
      }
}