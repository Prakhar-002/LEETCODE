//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3403

//? ⌚ Time complexity ➺ 	O(n × (n - numFriends + 1)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺  O(n - numFriends + 1)

class Solution {
public:
      string answerString(string word, int numFriends) {
            // If there's only 1 friend, return the whole word
            if (numFriends == 1) {
                  return word;
            }

            // Get the total length of the input string
            int n = word.length();

            // Result string to store the maximum lexicographical substring
            string res = "";

            // Length of the substring each friend will get
            int length = n - numFriends + 1;

            // Loop over each character as a potential start of the substring
            for (int i = 0; i < n; i++) {
                  // Calculate the end index, capped by the string's length
                  int end = min(i + length, n);

                  // Extract the substring from index i to end
                  string temp = word.substr(i, end - i);

                  // Update result if the current substring is greater or equal
                  if (res <= temp) {
                        res = temp;
                  }
            }

            // Return the final result
            return res;
      }
};
