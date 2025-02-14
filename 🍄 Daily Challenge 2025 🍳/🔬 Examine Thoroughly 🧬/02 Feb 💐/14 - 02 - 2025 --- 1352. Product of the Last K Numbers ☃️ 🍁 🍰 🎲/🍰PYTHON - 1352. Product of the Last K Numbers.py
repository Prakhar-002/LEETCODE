#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1352

#? ⌚ Time complexity ➺ O(1)

#? 🧺 Space complexity ➺ O(n)

class ProductOfNumbers:
      def __init__(self):
            self.product_prefix = []
            self.last_product = 1
            self.last_zero_position = -1  # Track last zero index

      def add(self, num: int) -> None:
            if num == 0:
                  # Reset since zero breaks multiplication sequence
                  self.product_prefix.clear()
                  self.last_product = 1  # Reset multiplication
                  self.last_zero_position = len(self.product_prefix)  # Track last zero
                  self.product_prefix.append(1)  # Start fresh with 1
                  return

            self.last_product *= num
            self.product_prefix.append(self.last_product)

      def getProduct(self, k: int) -> int:
            size = len(self.product_prefix)

            # If a zero was in the last k elements, product is 0
            if self.last_zero_position >= size - k:
                  return 0

            # If k == size, return the last stored product
            if k == size:
                  return self.product_prefix[-1]

            # Compute product using division
            return self.product_prefix[-1] // self.product_prefix[-(k + 1)]
