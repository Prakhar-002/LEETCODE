//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3016

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(word)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {

// Intuition -> we'll find the freq of each char in word
// most occurring char will go to first position and in separate button
// we have only 8 distinct keypads so upto 8 we have to push 1 to get that char
// after 8 upto 16 we have to assign char that will be pushed twice to print char

public:
      int minimumPushes(const string& word) {
            // we need only the occurrences of char 
            // so we'll build an array of count freq of len 26

            vector<int> freqCounter(26, 0); // store freq

            for (char ch : word) {
                  // inc the index assign for that char 
                  // for every occurrence ord(ch) - ord('a') gives index
                  freqCounter[ch - 'a']++;
            }

            // sort in reverse order cause we want max freq first
            sort(freqCounter.rbegin(), freqCounter.rend());

            // this count total pushes 
            int pushes = 0;

            // number of push for getting char to be print will be
            // 0 to 7 -> 1 Idx
            // 8 to 15 -> 2 
            // 16 to 23 -> 3
            // 24 to 25 -> 4
            int distinctPush = 0;

            for (int freq : freqCounter) {
                  // pushes will be equal to 
                  // number of time a keypad push to get that char 
                  //  multiply by *
                  // number of time that char occur
                  pushes += freq * (1 + distinctPush / 8);
                  // inc distinctPush every time acc to upper explanation
                  // 0 to 7 -> 1 ; 8 to 15 -> 2 ...
                  distinctPush++;
            }

            return pushes;
      }
};