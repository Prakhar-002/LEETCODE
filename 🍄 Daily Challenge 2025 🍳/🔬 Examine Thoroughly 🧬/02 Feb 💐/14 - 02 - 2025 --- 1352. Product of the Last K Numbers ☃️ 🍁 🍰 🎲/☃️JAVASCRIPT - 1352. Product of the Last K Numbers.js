//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1352

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(n)

class ProductOfNumbers {
      constructor() {
            this.productPrefix = [];
            this.lastProduct = 1;
            this.lastZeroPosition = -1; // Track last zero index
      }

      add(num) {
            if (num === 0) {
                  // Reset since zero breaks multiplication sequence
                  this.productPrefix = [];
                  this.lastProduct = 1; // Reset multiplication
                  this.lastZeroPosition = this.productPrefix.length; // Track last zero
                  this.productPrefix.push(1); // Start fresh with 1
                  return;
            }

            this.lastProduct *= num;
            this.productPrefix.push(this.lastProduct);
      }

      getProduct(k) {
            let size = this.productPrefix.length;

            // If a zero was in the last k elements, product is 0
            if (this.lastZeroPosition >= size - k) {
                  return 0;
            }

            // If k == size, return the last stored product
            if (k === size) {
                  return this.productPrefix[size - 1];
            }

            // Compute product using division
            return Math.floor(this.productPrefix[size - 1] / this.productPrefix[size - k - 1]);
      }
}
