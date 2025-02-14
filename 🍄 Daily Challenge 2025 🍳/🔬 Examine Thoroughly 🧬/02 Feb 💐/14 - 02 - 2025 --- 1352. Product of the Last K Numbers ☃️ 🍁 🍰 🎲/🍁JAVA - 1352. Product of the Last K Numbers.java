//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1352

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(n)

import java.util.ArrayList;

class ProductOfNumbers {
      private ArrayList<Integer> productPrefix;
      private int lastProduct;
      private int lastZeroPosition;

      public ProductOfNumbers() {
            productPrefix = new ArrayList<>();
            lastProduct = 1;
            lastZeroPosition = -1; // Track last zero index
      }

      public void add(int num) {
            if (num == 0) {
                  // Reset since zero breaks multiplication sequence
                  productPrefix.clear();
                  lastProduct = 1; // Reset multiplication
                  lastZeroPosition = productPrefix.size(); // Track last zero
                  productPrefix.add(1); // Start fresh with 1
                  return;
            }

            lastProduct *= num;
            productPrefix.add(lastProduct);
      }

      public int getProduct(int k) {
            int size = productPrefix.size();

            // If a zero was in the last k elements, product is 0
            if (lastZeroPosition >= size - k) {
                  return 0;
            }

            // If k == size, return the last stored product
            if (k == size) {
                  return productPrefix.get(size - 1);
            }

            // Compute product using division
            return productPrefix.get(size - 1) / productPrefix.get(size - k - 1);
      }
}
