//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2843

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = hight - low + 1

//? 🧺 Space complexity ➺ O(1)

int countSymmetricIntegers(int low, int high) {
      int count = 0;  // Counter for symmetric integers

      for (int num = low; num <= high; num++) {
            if (num < 100 && num % 11 == 0) {
                  // 2-digit symmetric number
                  count++;
            } else if (num >= 1000 && num < 10000) {
                  // For 4-digit numbers
                  int left = num / 1000 + (num % 1000) / 100;  // First two digits
                  int right = (num % 100) / 10 + (num % 10);   // Last two digits

                  if (left == right) {
                        count++;  // Check if symmetric
                  }
            }
      }

      return count;  // Return final result
}
