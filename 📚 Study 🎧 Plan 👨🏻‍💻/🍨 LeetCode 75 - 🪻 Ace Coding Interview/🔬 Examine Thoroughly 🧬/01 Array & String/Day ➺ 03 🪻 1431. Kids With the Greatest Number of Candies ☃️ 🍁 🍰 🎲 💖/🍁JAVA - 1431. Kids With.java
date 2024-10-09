//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1431

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(candies)

//? 🧺 Space complexity ➺ O(n)

import java.util.ArrayList;
import java.util.List;

class Solution {
      public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
            // list `result` where the outcome for each kid
            List<Boolean> result = new ArrayList<>();

            // calculates the maximum number of candies any single kid currently has
            int maxCandy = 0;
            // iterates over each count in the `candies` array
            for (int candy : candies) {
                  // Take the max our of every kid's candy 
                  maxCandy = Math.max(maxCandy, candy);
            }

            // iterates over each count in the `candies` array
            for (int candy : candies) {
                  // if a child has highest candy in hand after taking extra candies
                  if (candy + extraCandies >= maxCandy) {
                        // set True for that child
                        result.add(true);
                  } else {
                        // else set False for that child
                        result.add(false);
                  }
            }

            // return result whether each kid can or cannot have the most candies.
            return result;
      }
}
