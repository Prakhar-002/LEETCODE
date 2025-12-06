//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1415

//? ⌚ Time complexity ➺ O(n)

//? 🧺 Space complexity ➺ O(n)

var getHappyString = function (n, k) {
      // Available characters to use in happy strings
      let chars = ['a', 'b', 'c'];
      let choice = ''; // To track the last chosen character
      let lex_string = "";

      // Calculate the total number of happy strings of length 'n'
      let totalHappy = Math.pow(2, n - 1);
      if (k > 3 * totalHappy)
            return ""; // If k is out of range, return an empty string

      while (totalHappy > 0) {
            // Determine the index of the character to choose
            let index = Math.floor((k - 1) / totalHappy);
            let prevIdx = index;

            // Adjust index to ensure no adjacent characters are the same
            if (choice === 'a')
                  index++;
            else if (choice === 'b' && index === 1)
                  index++;

            // Choose the character and append to lex_string
            choice = chars[index];
            lex_string += choice;

            // Update k and totalHappy for the next iteration
            k = k - totalHappy * prevIdx;
            totalHappy = Math.floor(totalHappy / 2);
      }

      return lex_string;
}