//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1395

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(rating array)

//? 🧺 Space complexity ➺ O(1) 

#include <vector>
using namespace std;

class Solution { 
public:
      // Intuition is we go for every soldier we have btw 1 to last 2nd soldier

      // for ascending order

      // we count the soldier that have less rating and left of our current soldier
      // and count the soldier that are right and have greater rating than the current soldier

      // now calculate the descending order 

      // we count the soldier that have greater rating and left of our current soldier
      // and count the soldier that are right and have less rating than the current soldier

      // then we will multiply them and add to our team cause that will be the number of possible teams

      int numTeams(vector<int>& rating) {
            int teams = 0;
            int ratingLength = rating.size();

            // go for every soldier in our rating array 
            for (int soldier = 1; soldier < ratingLength - 1; ++soldier) {
                  int leftSmaller = 0, rightLarger = 0;

                  // first check for the smaller one 
                  // and to the left side of our soldier
                  for (int s = 0; s < soldier; ++s) {
                        if (rating[s] < rating[soldier]) {
                              leftSmaller += 1;
                        }
                  }

                  // now check for the larger one 
                  // and to the right side of our soldier
                  for (int s = soldier + 1; s < ratingLength; ++s) {
                        if (rating[s] > rating[soldier]) {
                              rightLarger += 1;
                        }
                  }

                  // make team of ascending order 
                  teams += leftSmaller * rightLarger;

                  // now check for the larger one 
                  // and to the left side of our current soldier
                  // it will be total left - leftSmaller
                  int leftLarger = soldier - leftSmaller;

                  // now check for the smaller one 
                  // and to the right side of our current soldier
                  // it will be total right - leftLarger
                  int rightSmaller = ratingLength - soldier - 1 - rightLarger;

                  // make teams for descending order 
                  teams += leftLarger * rightSmaller;
            }

            return teams;
      }
};
