//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2785

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
      string sortVowels(string s) {
            unordered_map<char, int> vowCount;      //      Tracks count for each vowel character

            string vowels = "aeiouAEIOU";           //      String containing all possible vowels

            //      Count frequency only for vowels
            for (char ch : s) {
                  if (vowels.find(ch) != string::npos)
                        ++vowCount[ch];
            }

            string sortedVowel = "AEIOUaeiou";      //      Sorted vowels (uppercase then lowercase)
            string ans;                             //      Store final answer
            int j = 0;                              //      Pointer in sortedVowel string

            //      Traverse the string and substitute vowels
            for (size_t i = 0; i < s.size(); i++) {
                  char ch = s[i];
                  if (vowels.find(ch) == string::npos) {
                        ans += ch;                  //      Non-vowel, keep as is
                  } else {
                        //      Find next available vowel, with remaining count
                        while (j < sortedVowel.size()
                                    && (!vowCount.count(sortedVowel[j]) ||
                                    vowCount[sortedVowel[j]] == 0)) {
                              ++j;
                        }

                        ans += sortedVowel[j];      //      Place smallest available vowel
                        --vowCount[sortedVowel[j]]; //      Decrease count after use
                  }
            }

            return ans;                             //      Final answer as string
      }
};


//!----------------------------------------------------------------------------------------------- 

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      string sortVowels(string s) {
            string vowels = "AEIOUaeiou";       //      String containing all vowel letters

            vector<char> vows;                  //      Collect vowels from input

            //      Extract vowels from input string
            for (char ch : s) {
                  if (vowels.find(ch) != string::npos) {
                        vows.push_back(ch);     //      Add vowel character to vows
                  }
            }

            sort(vows.begin(), vows.end());     //      Sort vowels alphabetically

            int i = 0;                          //      Index for vowels in sorted order
            string t;                           //      Build output string

            //      Reconstruct string with sorted vowels
            for (char ch : s) {
                  if (vowels.find(ch) != string::npos) {
                        t += vows[i];    //      Substitute vowel with sorted one
                        i++;
                  } else {
                        t += ch;         //      Keep consonant as is
                  }
            }

            return t;                     //      Return final string
      }
};
