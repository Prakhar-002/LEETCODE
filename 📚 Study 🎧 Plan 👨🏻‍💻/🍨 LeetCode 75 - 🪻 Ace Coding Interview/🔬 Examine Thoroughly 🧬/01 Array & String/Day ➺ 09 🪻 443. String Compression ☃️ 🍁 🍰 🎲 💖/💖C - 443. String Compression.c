//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 443

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(chars)

//? 🧺 Space complexity ➺ O(1)

int compress(char* chars, int charsSize) {
      int i = 0; // Position to read characters
      int j = 0; // Position to write the compressed result

      while (i < charsSize) {
            char ch = chars[i];
            int count = 0;

            // Count the occurrences of the current character
            while (i < charsSize && chars[i] == ch) {
                  i++;
                  count++;
            }

            // Write the character to the result
            chars[j] = ch;
            j++;

            // If count > 1, write the count as digits
            if (count > 1) {
                  char countStr[10];
                  sprintf(countStr, "%d", count);
                  for (int k = 0; countStr[k] != '\0'; k++) {
                        chars[j] = countStr[k];
                        j++;
                  }
            }
      }

      // The final length of the compressed array
      return j;
}
