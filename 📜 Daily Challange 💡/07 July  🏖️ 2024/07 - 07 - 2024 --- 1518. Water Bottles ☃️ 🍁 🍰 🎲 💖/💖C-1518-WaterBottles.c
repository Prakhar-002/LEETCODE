//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2181

//? ⌚ Time complexity -> O(LogN Of Base M) n = numBottles , m = numExchange

//? 🧺 Space complexity -> O(1) 

int numWaterBottles(int numBottles, int numExchange) {
      int waterBottles = 0;
      int emptyBottles = 0;

      while (numBottles > 0) {
            // drink all water
            waterBottles += numBottles;
            // we have same empty bottles after drinking
            emptyBottles += numBottles;
            // exchange bottles
            numBottles = emptyBottles / numExchange;
            // after exchanging remaining empty bottle we have
            emptyBottles = emptyBottles % numExchange;
      }

      return waterBottles;
}