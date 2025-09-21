//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1912

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

/**
 * MovieRentingSystem allows searching, renting, dropping, and reporting movies from multiple shops, 
 * always keeping results in price-ascending and shop-ascending order.
 */
var MovieRentingSystem = function (_n, entries) {
      // Maximum search/report results allowed per spec
      this.maxNumSearchResults = 5;

      // Pre-sort entries globally by price then shop for initialization
      let sorted = [...entries]
            .sort(([shop1, _1, price1], [shop2, _2, price2]) => {
                  let priceDiff = price1 - price2;
                  return priceDiff ? priceDiff : shop1 - shop2;
            });

      // Build 'movies': movie -> sorted list of shop IDs by price, then shop #
      this.movies = sorted
            .reduce((movies, [shop, movie]) => {
                  let shops = movies[movie];
                  if (shops == undefined)
                        shops = movies[movie] = [];
                  shops.push(shop);
                  return movies;
            }, {});

      /*
            this.shops: 
            shopId => { movieId: { price, rented? } }
      */
      this.shops = sorted
            .reduce((shops, [shop, movie, price]) => {
                  let data = shops[shop];
                  if (data == undefined)
                        data = shops[shop] = {};
                  data[movie] = { price };
                  return shops;
            }, {});

      // Array of currently rented [shop, movie] pairs
      this.rented = [];
};

/** 
 * Returns up to 5 shops with available copies of the movie, in price/shop ASC order. O(1) for scan/ordering.
 */
MovieRentingSystem.prototype.search = function (movie) {
      let results = [],
            shops = this.movies[movie]; // Pre-sorted by price, then shop #
      if (shops) {
            for (let i = 0, l = shops.length; results.length < this.maxNumSearchResults && i < l; i++) {
                  let shop = shops[i];
                  // Include shop if movie not currently rented
                  if (!this.shops[shop][movie].rented) results.push(shop);
            }
      }
      return results;
};

/** 
 * Rents a movie from shop: marks as rented and adds to the rented array. O(1).
 */
MovieRentingSystem.prototype.rent = function (shop, movie) {
      if (this.shops[shop][movie].rented == undefined) {
            let rentData = [shop, movie];
            this.shops[shop][movie].rented = rentData;
            this.rented.push(rentData);
      }
};

/** 
 * Returns (drops) a rented copy back to available. O(n) for removal from rented.
 */
MovieRentingSystem.prototype.drop = function (shop, movie) {
      let movieData = this.shops[shop]?.[movie].rented;
      if (movieData) {
            this.rented.splice(this.rented.indexOf(movieData), 1); // Remove from rented array
            delete this.shops[shop][movie].rented;                // Mark as not rented
      }
};

/**
 * Returns up to 5 rented [shop, movie] pairs, sorted by price, shop, then movie. O(n log n) due to sorting.
 */
MovieRentingSystem.prototype.report = function () {
      return this.rented
            .sort(([shop1, movie1], [shop2, movie2]) => {
                  let priceDiff = this.shops[shop1][movie1].price - this.shops[shop2][movie2].price;
                  if (!priceDiff)
                        return shop1 == shop2 ? movie1 - movie2 : shop1 - shop2;
                  return priceDiff;
            })
            .slice(0, this.maxNumSearchResults);
};