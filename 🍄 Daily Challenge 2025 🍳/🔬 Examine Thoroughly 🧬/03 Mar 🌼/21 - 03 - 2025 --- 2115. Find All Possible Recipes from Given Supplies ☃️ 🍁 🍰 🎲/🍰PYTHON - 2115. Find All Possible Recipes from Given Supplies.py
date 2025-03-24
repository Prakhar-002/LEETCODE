#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2115

#? ⌚ Time complexity ➺ O(R * I) 👉🏻  I = Ingredient

#? 🧺 Space complexity ➺ O(R + S) 👉🏻 R = recipes, s = supplies

class Solution:
      def findAllRecipes(self, recipes: list[str], ingredients: list[list[str]], supplies: list[str]) -> list[str]:
            # Dictionary to keep track of available supplies
            can_make = {supply: True for supply in supplies}

            # Dictionary to store the index of each recipe for quick lookup
            recipe_idx = {recipe: idx for idx, recipe in enumerate(recipes)}

            # Helper function to check if a recipe can be made
            def _check_recipe(recipe):
                  # If recipe is already marked as available, return its status
                  if recipe in can_make:
                        return can_make[recipe]

                  # If the recipe is not in the list of recipes, it cannot be made
                  if recipe not in recipe_idx:
                        return False

                  # Temporarily mark the recipe as False to detect cycles
                  can_make[recipe] = False

                  # Recursively check if all ingredients are available
                  for ingredient in ingredients[recipe_idx[recipe]]:
                        if not _check_recipe(ingredient):
                              return False

                  # If all ingredients are available, mark recipe as True
                  can_make[recipe] = True
                  return can_make[recipe]

            # Return a list of recipes that can be made
            return [recipe for recipe in recipes if _check_recipe(recipe)]
