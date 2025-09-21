//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1912

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

// MovieRentingSystem manages movie copies across shops
class MovieRentingSystem {
      // Node represents a shop-movie-price triple
      private static class Node {
            final int shop;
            final int movie;
            final int price;

            Node(int shop, int movie, int price) {
                  this.shop = shop;
                  this.movie = movie;
                  this.price = price;
            }
      }

      // Comparator: order by price (asc), shop (asc), movie (asc)
      // Guarantees strict order for TreeSet uniqueness
      private static final Comparator<Node> CMP = (a, b) -> {
            int c = Integer.compare(a.price, b.price);
            if (c != 0)
                  return c;
            c = Integer.compare(a.shop, b.shop);
            if (c != 0)
                  return c;
            return Integer.compare(a.movie, b.movie);
      };

      // Map movie -> TreeSet of available nodes (sorted by Comparator)
      private final Map<Integer, TreeSet<Node>> availableByMovie = new HashMap<>();

      // TreeSet of all currently rented copies (sorted by CMP)
      private final TreeSet<Node> rentedSet = new TreeSet<>(CMP);

      // (shop, movie) -> Node, enables quick lookup of exact copy
      private final Map<Long, Node> byPair = new HashMap<>();

      // Helper: create a unique long key from (shop, movie) pair
      private static long key(int shop, int movie) {
            // Avoids collision by bit-shifting shop and movie
            return (((long) shop) << 32) ^ (movie & 0xffffffffL);
      }

      // O(n log n) -- insert all entries into structures
      public MovieRentingSystem(int n, int[][] entries) {
            for (int[] e : entries) {
                  int shop = e[0], movie = e[1], price = e[2];
                  Node node = new Node(shop, movie, price);

                  // Map for quick lookup by (shop, movie)
                  byPair.put(key(shop, movie), node);

                  // Movie-level available set, sorted by price/shop
                  availableByMovie
                              .computeIfAbsent(movie, k -> new TreeSet<>(CMP))
                              .add(node);
            }
      }

      // O(1) to find up to five cheapest shops with this movie
      public List<Integer> search(int movie) {
            List<Integer> ans = new ArrayList<>(5);
            TreeSet<Node> set = availableByMovie.get(movie);
            if (set == null || set.isEmpty())
                  return ans;
            Iterator<Node> it = set.iterator();
            for (int i = 0; i < 5 && it.hasNext(); i++) {
                  ans.add(it.next().shop);
            }
            return ans;
      }

      // O(log n) Remove from available, add to rented.
      public void rent(int shop, int movie) {
            long k = key(shop, movie);
            Node node = byPair.get(k);
            if (node == null)
                  return; // Defensive: shouldn't happen
            TreeSet<Node> set = availableByMovie.get(movie);
            if (set != null)
                  set.remove(node);
            rentedSet.add(node);
      }

      // O(log n) Remove from rented, add back to available
      public void drop(int shop, int movie) {
            long k = key(shop, movie);
            Node node = byPair.get(k);
            if (node == null)
                  return; // Defensive: shouldn't happen
            rentedSet.remove(node);
            availableByMovie
                        .computeIfAbsent(movie, x -> new TreeSet<>(CMP))
                        .add(node);
      }

      // O(1) Iterate top 5 rented movies in order ([shop, movie])
      public List<List<Integer>> report() {
            List<List<Integer>> ans = new ArrayList<>(5);
            Iterator<Node> it = rentedSet.iterator();
            for (int i = 0; i < 5 && it.hasNext(); i++) {
                  Node n = it.next();
                  ans.add(Arrays.asList(n.shop, n.movie));
            }

            return ans;
      }
}
