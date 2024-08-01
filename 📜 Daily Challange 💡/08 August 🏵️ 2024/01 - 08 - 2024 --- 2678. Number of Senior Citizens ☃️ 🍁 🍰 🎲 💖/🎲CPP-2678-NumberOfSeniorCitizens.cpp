//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2678

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = details length

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
      int countSeniors(vector<string>& details) {
            int oldPassenger = 0;

            // extract the age for every passenger 
            for (const auto& passenger : details) {
                  // our age lies between 11 and 12 character
                  int age = stoi(passenger.substr(11, 2));

                  // check if age is greater than 60
                  if (age > 60) {
                        // count old Passengers
                        oldPassenger++;
                  }
            }

            // return our ans
            return oldPassenger;
      }
};
