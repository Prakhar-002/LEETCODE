//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1935

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(text)

//? 🧺 Space complexity ➺ O(n)

#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
      int canBeTypedWords(string text, string brokenLetters) {
            unordered_set<char> broken;    //      Convert brokenLetters to a set for quick lookup
            for (char ch : brokenLetters)
                  broken.insert(ch);

            vector<string> words;
            size_t pos = 0, found;
            //      Split the text into words using spaces
            while ((found = text.find(' ', pos)) != string::npos) {
                  words.push_back(text.substr(pos, found - pos));
                  pos = found + 1;
            }
            words.push_back(text.substr(pos));

            int count = 0;                 //      Counter for typeable words

            //      Check each word
            for (const string& word : words) {
                  bool hasBroken = false;  //      Flag for broken letter in word
                  for (char ch : word) {
                        if (broken.count(ch)) {
                              hasBroken = true;    //      Broken letter found, skip word
                              break;
                        }
                  }

                  if (!hasBroken)
                        count++;           //      No broken letter found, increment counter
            }

            return count;                  //      Return total typeable words
      }
};
