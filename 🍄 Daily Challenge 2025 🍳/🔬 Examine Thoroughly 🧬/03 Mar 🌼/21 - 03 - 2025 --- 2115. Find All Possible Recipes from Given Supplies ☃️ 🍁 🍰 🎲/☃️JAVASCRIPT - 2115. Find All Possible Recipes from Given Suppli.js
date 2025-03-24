//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2115

// ? ⌚ Time complexity ➺ O(R * I) 👉🏻  I = Ingredient

// ? 🧺 Space complexity ➺ O(R + S) 👉🏻 R = recipes, s = supplies

var findAllRecipes = function (recipes, ingredients, supplies) {
      // Dictionary to keep track of available supplies
      let can_make = new Map();
      for (let supply of supplies) {
            can_make.set(supply, true);
      }

      // Dictionary to store the index of each recipe for quick lookup
      let recipe_idx = new Map();
      recipes.forEach((recipe, idx) => {
            recipe_idx.set(recipe, idx);
      });

      // Helper function to check if a recipe can be made
      const _check_recipe = (recipe) => {
            // If recipe is already checked, return its status
            if (can_make.has(recipe)) {
                  return can_make.get(recipe);
            }

            // If the recipe is not in the list of recipes, it cannot be made
            if (!recipe_idx.has(recipe)) {
                  return false;
            }

            // Temporarily mark the recipe as False to detect cycles
            can_make.set(recipe, false);

            // Recursively check if all ingredients are available
            for (let ingredient of ingredients[recipe_idx.get(recipe)]) {
                  if (!_check_recipe(ingredient)) {
                        return false;
                  }
            }

            // If all ingredients are available, mark recipe as True
            can_make.set(recipe, true);
            return true;
      };

      // Create a list of recipes that can be made
      return recipes.filter(recipe => _check_recipe(recipe));
}
