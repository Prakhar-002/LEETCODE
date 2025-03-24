//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2115

// ? ⌚ Time complexity ➺ O(R * I) 👉🏻  I = Ingredient

// ? 🧺 Space complexity ➺ O(R + S) 👉🏻 R = recipes, s = supplies

#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
      vector<string> findAllRecipes(vector<string>& recipes, 
                                          vector<vector<string>>& ingredients, 
                                          vector<string>& supplies) {
            // Dictionary to keep track of available supplies
            unordered_map<string, bool> can_make;
            for (const auto& supply : supplies) {
                  can_make[supply] = true;
            }

            // Dictionary to store the index of each recipe for quick lookup
            unordered_map<string, int> recipe_idx;
            for (int i = 0; i < recipes.size(); i++) {
                  recipe_idx[recipes[i]] = i;
            }

            // Create a list of recipes that can be made
            vector<string> result;
            for (const auto& recipe : recipes) {
                  if (_checkRecipe(recipe, can_make, recipe_idx, ingredients)) {
                        result.push_back(recipe);
                  }
            }
            return result;
      }

private:
      // Helper function to check if a recipe can be made
      bool _checkRecipe(const string& recipe, 
                        unordered_map<string, bool>& can_make, 
                        unordered_map<string, int>& recipe_idx, 
                        vector<vector<string>>& ingredients) {
            // If recipe is already checked, return its status
            if (can_make.count(recipe)) {
                  return can_make[recipe];
            }

            // If the recipe is not in the list of recipes, it cannot be made
            if (!recipe_idx.count(recipe)) {
                  return false;
            }

            // Temporarily mark the recipe as False to detect cycles
            can_make[recipe] = false;

            // Recursively check if all ingredients are available
            for (const auto& ingredient : ingredients[recipe_idx[recipe]]) {
                  if (!_checkRecipe(ingredient, can_make, recipe_idx, ingredients)) {
                        return false;
                  }
            }

            // If all ingredients are available, mark recipe as True
            can_make[recipe] = true;
            return true;
      }
};
