//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1431

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(candies)

//? 🧺 Space complexity ➺ O(n)

function kidsWithCandies(candies, extraCandies) {
      // array `result` where the outcome for each kid
      const result = [];

      // calculates the maximum number of candies any single kid currently has
      const maxCandy = Math.max(...candies);

      // iterates over each count in the `candies` array
      for (const candy of candies) {
            // if a child has highest candy in hand after taking extra candies
            if (candy + extraCandies >= maxCandy) {
                  // set true for that child
                  result.push(true);
            } else {
                  // else set false for that child
                  result.push(false);
            }
      }

      // return result indicating whether each kid can or cannot have the most candies.
      return result;
}

//!----------------------------------------------------------------------------------------------

//* One liner 

const kidsWithCandies = (candies, extraCandies) => candies.map(candy => candy + extraCandies >= Math.max(...candies));
