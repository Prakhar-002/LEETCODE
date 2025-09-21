//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1912

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

// Node struct represents a shop-movie with rental price
struct Node {
      int shop, movie, price;

      // Order nodes: price ASC, then shop ASC, then movie ASC
      bool operator<(const Node &other) const {
            if (price != other.price)
                  return price < other.price;
            if (shop != other.shop)
                  return shop < other.shop;
            return movie < other.movie;
      }
};

class MovieRentingSystem {
      unordered_map<long long, Node>
          byPair; // (shop, movie) -> Node for quick lookup
      unordered_map<int, set<Node>>
          availableByMovie; // movie -> sorted set of available Nodes
      set<Node> rentedSet;  // Sorted set of all currently rented nodes

      // Helper to generate unique long key from shop and movie ids
      long long key(int shop, int movie) {
            return ((long long)shop << 32) ^ movie;
      }

public:
      // O(n log n): initialize the system with entries
      MovieRentingSystem(int n, vector<vector<int>> &entries) {
            for (auto &e : entries) {
                  int shop = e[0], movie = e[1], price = e[2];
                  Node node{shop, movie, price};
                  byPair[key(shop, movie)] = node;
                  availableByMovie[movie].insert(node);
            }
      }

      // O(1): Get up to 5 cheapest shops with given movie
      vector<int> search(int movie) {
            vector<int> res;
            if (availableByMovie.count(movie) == 0)
                  return res;
            auto &s = availableByMovie[movie];
            int count = 0;
            for (auto it = s.begin(); it != s.end() && count < 5; ++it, ++count) {
                  res.push_back(it->shop);
            }
            return res;
      }

      // O(log n): Rent a movie from a shop (move from available to rented)
      void rent(int shop, int movie) {
            long long k = key(shop, movie);
            Node node = byPair[k];
            availableByMovie[movie].erase(node);
            rentedSet.insert(node);
      }

      // O(log n): Drop a rented copy (move from rented back to available)
      void drop(int shop, int movie) {
            long long k = key(shop, movie);
            Node node = byPair[k];
            rentedSet.erase(node);
            availableByMovie[movie].insert(node);
      }

      // O(1): List up to 5 currently rented [shop, movie] pairs in order
      vector<vector<int>> report() {
            vector<vector<int>> res;
            int count = 0;
            for (auto it = rentedSet.begin(); it != rentedSet.end() && count < 5; ++it, ++count) {
                  res.push_back({it->shop, it->movie});
            }
            return res;
      }
};
