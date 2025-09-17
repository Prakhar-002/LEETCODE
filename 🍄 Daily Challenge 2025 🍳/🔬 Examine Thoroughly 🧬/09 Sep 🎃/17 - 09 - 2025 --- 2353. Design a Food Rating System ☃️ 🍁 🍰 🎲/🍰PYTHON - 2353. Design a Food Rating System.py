#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2353

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(foods)

#? 🧺 Space complexity ➺ O(n)

from typing import List
from collections import defaultdict
from sortedcontainers import SortedSet 

class FoodRatings:

      # O(n log n)
      def __init__(self, foods: List[str], cuisines: List[str], ratings: List[int]):
            # Store foods sorted by rating (descending), for each cuisine
            self.cuisines_food = defaultdict(SortedSet)
            # Map from food name to its cuisine
            self.cuisines = {}
            # Map from food name to its rating
            self.ratings = {}

            # Populate the maps and sets
            for i in range(len(foods)):
                  # Add food (with negative rating for descending sort) to the cuisine set
                  self.cuisines_food[cuisines[i]].add((-ratings[i], foods[i]))
                  self.cuisines[foods[i]] = cuisines[i]  # Map food to its cuisine
                  self.ratings[foods[i]] = ratings[i]  # Map food to its rating

      # O(log n)
      def changeRating(self, food: str, newRating: int) -> None:
            c = self.cuisines[food]  # Get the cuisine of the food
            r = self.ratings[food]  # Get the old rating of the food

            self.cuisines_food[c].remove((-r, food))  # Remove the old entry from the cuisine's sorted set
            self.cuisines_food[c].add((-newRating, food))  # Add the new entry with updated rating

            self.ratings[food] = newRating  # Update the rating for the food

      # O(1)
      def highestRated(self, cuisine: str) -> str:
            # Return the food with the highest rating for the cuisine
            return self.cuisines_food[cuisine][0][1]
