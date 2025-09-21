#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1912

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from sortedcontainers import SortedList

class MovieRentingSystem:
      def __init__(self, n: int, entries: list[list[int]]):
            # available: movie -> SortedList of (price, shop)
            self.available = {}
            # rented: SortedList of (price, shop, movie), keeps globally rented movies sorted
            self.rented = SortedList()
            # shop_movie_price: (shop, movie) -> price, for quick lookup of price for (shop, movie)
            self.shop_movie_price = {(shop, movie): price for shop, movie, price in entries}

            # Initialize available movies for each shop
            for shop, movie, price in entries:
                  if movie not in self.available:
                        self.available[movie] = SortedList()
                  self.available[movie].add((price, shop))

      # O(1) for fetching up to 5 cheapest shops with given movie
      def search(self, movie: int) -> list[int]:
            # Return the shop numbers of the first five cheapest available copies of the given movie
            return [shop for _, shop in self.available.get(movie, [])[:5]]

      # O(log n) for renting a movie (remove and add in sorted lists)
      def rent(self, shop: int, movie: int) -> None:
            price = self.shop_movie_price[(shop, movie)]
            # Remove from available, add to rented (both sorted lists)
            self.available[movie].remove((price, shop))
            self.rented.add((price, shop, movie))

      # O(log n) for returning a movie
      def drop(self, shop: int, movie: int) -> None:
            price = self.shop_movie_price[(shop, movie)]
            # Remove from rented, add back to available
            self.rented.remove((price, shop, movie))
            self.available[movie].add((price, shop))

      # O(1) to get up to 5 cheapest currently rented movies
      def report(self) -> list[list[int]]:
            # Return a list of [shop, movie] for the first five rented movies
            return [[shop, movie] for _, shop, movie in self.rented[:5]]
