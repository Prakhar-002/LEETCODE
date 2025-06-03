//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 135

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

int candy(int* ratings, int ratingsSize) {
      int* candies = (int*)malloc(sizeof(int) * ratingsSize);

      // Initialize all candies with 1
      for (int i = 0; i < ratingsSize; i++) {
            candies[i] = 1;
      }

      // Pass 1: Left to right
      for (int i = 1; i < ratingsSize; i++) {
            // If current rating is more than the previous
            if (ratings[i] > ratings[i - 1]) {
                  candies[i] = candies[i - 1] + 1;
            }
      }

      int total = candies[ratingsSize - 1]; // Include last child's candy
      // Pass 2: Right to left
      for (int i = ratingsSize - 2; i >= 0; i--) {
            // If current rating is more than the next
            if (ratings[i] > ratings[i + 1]) {
                  // Assign maximum candy needed
                  if (candies[i] < candies[i + 1] + 1) {
                        candies[i] = candies[i + 1] + 1;
                  }
            }

            total += candies[i];
      }

      free(candies); // Free allocated memory
      return total;
}
