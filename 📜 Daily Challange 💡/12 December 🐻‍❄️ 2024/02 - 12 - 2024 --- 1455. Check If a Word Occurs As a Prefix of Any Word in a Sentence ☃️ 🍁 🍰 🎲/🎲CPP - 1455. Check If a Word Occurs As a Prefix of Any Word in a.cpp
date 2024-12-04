//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1455

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of words

//? 🧺 Space complexity ➺ O(n)

#include <sstream>
#include <string>
using namespace std;

class Solution {
public:
      int isPrefixOfWord(string sentence, string searchWord) {
            // Use istringstream to split the sentence into words
            istringstream stream(sentence);
            string word;

            // Initialize the 1-based index
            int index = 1;

            // Iterate through each word
            while (stream >> word) {
                  // Check if the word starts with the searchWord
                  if (word.find(searchWord) == 0) {
                        return index; // Return the current index if it's a prefix
                  }

                  // Increment the index for the next word
                  index++;
            }

            // Return -1 if no word starts with the searchWord
            return -1;
      }
};

