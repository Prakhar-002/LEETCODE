//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2353

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(foods)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <string>
#include <unordered_map>
#include <set>
using namespace std;

// Custom comparator for sorting foods
struct FoodComparator {
      bool operator()(const pair<int, string>& a, const pair<int, string>& b) const {
            if (a.first != b.first) return a.first > b.first;        // Higher rating first
            return a.second < b.second;                              // Lexicographically smaller first
      }
};

class FoodRatings {
      unordered_map<string, set<pair<int, string>, FoodComparator>> cuisineFoods; // Foods for each cuisine, sorted
      unordered_map<string, pair<int, string>> foodInfo;                 // Map food to (rating, cuisine)

public:
      // O(n log n)
      FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
            for (int i = 0; i < foods.size(); ++i) {
                  foodInfo[foods[i]] = {ratings[i], cuisines[i]};
                  cuisineFoods[cuisines[i]].insert({ratings[i], foods[i]}); // Add food, sorted by rating and name
            }
      }

      // O(log n)
      void changeRating(string food, int newRating) {
            auto& [oldRating, cuisine] = foodInfo[food];
            // Remove old entry
            cuisineFoods[cuisine].erase({oldRating, food});
            // Insert new entry and update rating
            cuisineFoods[cuisine].insert({newRating, food});
            oldRating = newRating;
      }

      // O(1)
      string highestRated(string cuisine) {
            // Return the name of the highest rated food for the cuisine
            return cuisineFoods[cuisine].begin()->second;
      }
};
