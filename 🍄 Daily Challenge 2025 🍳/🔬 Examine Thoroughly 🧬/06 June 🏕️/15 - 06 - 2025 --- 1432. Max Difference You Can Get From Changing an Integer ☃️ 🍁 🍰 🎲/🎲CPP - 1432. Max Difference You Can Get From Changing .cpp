//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1432

//? ⌚ Time complexity ➺ O(log n)

//? 🧺 Space complexity ➺ O(log n)

class Solution {
public:
      int maxDiff(int num) {
            // Convert the number to a string to manipulate digits
            string maxNum = to_string(num);
            string minNum = maxNum;

            // Create the maximum number by replacing the first non-'9' digit with '9'
            for (char c : maxNum) {
                  if (c != '9') {
                        // Replace all occurrences of this digit with '9'
                        for (char &x : maxNum) {
                              if (x == c) x = '9';
                        }
                        break; // Only replace once
                  }
            }

            // Create the minimum number
            for (int i = 0; i < minNum.length(); ++i) {
                  char c = minNum[i];
                  if (i == 0) {
                        // If the first digit is not '1', replace all its occurrences with '1'
                        if (c != '1') {
                              for (char &x : minNum) {
                                    if (x == c) x = '1';
                              }
                              break;
                        }
                  } else {
                        // If digit is not '0' and not same as first digit, replace all its occurrences with '0'
                        if (c != '0' && c != minNum[0]) {
                              for (char &x : minNum) {
                                    if (x == c) x = '0';
                              }
                              break;
                        }
                  }
            }

            // Convert both modified strings back to integers and return their difference
            return stoi(maxNum) - stoi(minNum);
      }
};
