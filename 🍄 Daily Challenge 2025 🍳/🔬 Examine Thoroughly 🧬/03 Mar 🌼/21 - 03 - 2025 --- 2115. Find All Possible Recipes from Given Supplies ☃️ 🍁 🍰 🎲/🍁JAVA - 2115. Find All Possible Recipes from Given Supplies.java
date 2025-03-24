// ! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2115

// ? ⌚ Time complexity ➺ O(R * I) 👉🏻 I = Ingredient

// ? 🧺 Space complexity ➺ O(R + S) 👉🏻 R = recipes, s = supplies

import java.util.*;

class Solution {
      public List<String> findAllRecipes(String[] recipes, List<List<String>> ingredients, String[] supplies) {
            // Dictionary to keep track of available supplies
            Map<String, Boolean> can_make = new HashMap<>();
            for (String supply : supplies) {
                  can_make.put(supply, true);
            }

            // Dictionary to store the index of each recipe for quick lookup
            Map<String, Integer> recipe_idx = new HashMap<>();
            for (int i = 0; i < recipes.length; i++) {
                  recipe_idx.put(recipes[i], i);
            }

            // Create a list of recipes that can be made
            List<String> result = new ArrayList<>();
            for (String recipe : recipes) {
                  if (_checkRecipe(recipe, can_make, recipe_idx, ingredients)) {
                        result.add(recipe);
                  }
            }
            return result;
      }

      // Helper function to check if a recipe can be made
      private boolean _checkRecipe(String recipe, Map<String, Boolean> can_make,
                  Map<String, Integer> recipe_idx, List<List<String>> ingredients) {
            // If recipe is already checked, return its status
            if (can_make.containsKey(recipe)) {
                  return can_make.get(recipe);
            }

            // If the recipe is not in the list of recipes, it cannot be made
            if (!recipe_idx.containsKey(recipe)) {
                  return false;
            }

            // Temporarily mark the recipe as False to detect cycles
            can_make.put(recipe, false);

            // Recursively check if all ingredients are available
            for (String ingredient : ingredients.get(recipe_idx.get(recipe))) {
                  if (!_checkRecipe(ingredient, can_make, recipe_idx, ingredients)) {
                        return false;
                  }
            }

            // If all ingredients are available, mark recipe as True
            can_make.put(recipe, true);
            return true;
      }
}
