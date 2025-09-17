//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2353

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(foods)

//? 🧺 Space complexity ➺ O(n)

var FoodRatings = function (foods, cuisines, ratings) {
      // Stores cuisine to the PriorityQueue of [rating, food] pairs
      this.cuisines = {};
      // Stores each food's info: its cuisine and rating
      this.foods = {};

      for (let i = 0; i < foods.length; i++) {
            const food = foods[i];
            const cuisine = cuisines[i];
            const rating = ratings[i];

            // Map each food to its cuisine and its rating
            this.foods[food] = { cuisine, rating };

            // If cuisine is not yet mapped, initialize its PriorityQueue
            if (!this.cuisines[cuisine]) {
                  // PriorityQueue sorts by rating (desc) and then name (lex)
                  this.cuisines[cuisine] = new PriorityQueue((a, b) => {
                        if (a[0] !== b[0]) return b[0] - a[0];
                        return a[1].localeCompare(b[1]);
                  });
            }

            // Add initial [rating, food] pair to the cuisine heap
            this.cuisines[cuisine].enqueue([rating, food]);
      }
};

// Change the rating of a food
FoodRatings.prototype.changeRating = function (food, newRating) {
      // Update the food's rating
      const { cuisine } = this.foods[food];
      this.foods[food].rating = newRating;
      // Add new [rating, food] into the cuisine queue
      this.cuisines[cuisine].enqueue([newRating, food]);
};

// Get the highest-rated food for a cuisine
FoodRatings.prototype.highestRated = function (cuisine) {
      const heap = this.cuisines[cuisine];

      // Loop to skip stale entries (if food rating was changed after last enqueue)
      while (!heap.isEmpty()) {
            const [rating, name] = heap.front();

            // If the front food's rating matches the latest rating, return name
            if (this.foods[name].rating === rating) {
                  return name;
            } else {
                  // Rating is outdated, remove from heap and check next
                  heap.dequeue();
            }
      }
};
