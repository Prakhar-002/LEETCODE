//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2353

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(foods)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Food {
      String name;           // Name of the food item
      int rating;            // Rating of the food
      String cuisine;        // Cuisine of the food

      public Food(String name, int rating, String cuisine) {
            this.name = name;
            this.rating = rating;
            this.cuisine = cuisine;
      }
}

class FoodComparator implements Comparator<Food> {
      // Sort by rating (descending), then name (lexicographical)
      public int compare(Food a, Food b) {
            if (a.rating != b.rating) {
                  return b.rating - a.rating;
            }
            return a.name.compareTo(b.name);
      }
}

public class FoodRatings {
      Map<String, TreeSet<Food>> cuisineFoods;    // Stores foods for each cuisine, sorted by rating
      Map<String, Food> foodInfo;                 // Map from food name to its Food object

      // O(n log n)
      public FoodRatings(String[] foods, String[] cuisines, int[] ratings) {
            cuisineFoods = new HashMap<>();
            foodInfo = new HashMap<>();

            for (int i = 0; i < foods.length; i++) {
                  Food foodObj = new Food(foods[i], ratings[i], cuisines[i]);
                  foodInfo.put(foods[i], foodObj); // Map food to info

                  // Add food (will sort by rating and name)
                  cuisineFoods.putIfAbsent(cuisines[i], new TreeSet<>(new FoodComparator()));
                  cuisineFoods.get(cuisines[i]).add(foodObj);
            }
      }

      // O(log n)
      public void changeRating(String food, int newRating) {
            Food foodObj = foodInfo.get(food);
            TreeSet<Food> foodsSet = cuisineFoods.get(foodObj.cuisine);
            foodsSet.remove(foodObj);                    // Remove old entry

            foodObj.rating = newRating;                  // Update rating
            foodsSet.add(foodObj);                       // Add updated entry
      }

      // O(1)
      public String highestRated(String cuisine) {
            // Return name of highest rated food for the cuisine
            return cuisineFoods.get(cuisine).first().name;
      }
}
