//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1903

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(num)

//? 🧺 Space complexity ➺ O(1)

char* largestOddNumber(char* num) {
      // Get the length of the string
      int len = strlen(num);

      // Iterate from the last character to the first
      for (int i = len - 1; i >= 0; i--) {
            // Convert current char to integer and check if it is odd
            int digit = num[i] - '0';
            if (digit % 2 != 0) {
                  // Place null terminator right after this position
                  num[i + 1] = '\0';
                  // Return pointer to the start of the updated string
                  return num;
            }
      }

      // If no odd digit found, return an empty string
      num[0] = '\0';
      return num;
}