//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1415

//? ⌚ Time complexity ➺ O(n)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public String getHappyString(int n, int k) {
            // Available characters to use in happy strings
            char[] chars = new char[]{'a', 'b', 'c'};
            char choice = ' '; // To track the last chosen character
            StringBuilder lex_string = new StringBuilder();

            // Calculate the total number of happy strings of length 'n'
            int totalHappy = (int) Math.pow(2, n - 1);
            if (k > 3 * totalHappy)
                  return ""; // If k is out of range, return an empty string

            while (totalHappy > 0) {
                  // Determine the index of the character to choose
                  int index = (k - 1) / totalHappy;
                  int prevIdx = index;

                  // Adjust index to ensure no adjacent characters are the same
                  if (choice == 'a')
                        index++;
                  else if (choice == 'b' && index == 1)
                        index++;

                  // Choose the character and append to result
                  choice = chars[index];
                  lex_string.append(choice);

                  // Update k and totalHappy for the next iteration
                  k = k - totalHappy * prevIdx;
                  totalHappy = totalHappy / 2;
            }

            return lex_string.toString();
      }
}
