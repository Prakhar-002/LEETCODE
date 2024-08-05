//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2678

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = details length

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countSeniors(char **details, int detailsSize) {
      int oldPassenger = 0;

      // extract the age for every passenger 
      for (int i = 0; i < detailsSize; i++) {
            char *passenger = details[i];
            // our age lies between 11 and 12 character
            char ageStr[3];
            strncpy(ageStr, passenger + 11, 2);
            ageStr[2] = '\0';
            int age = atoi(ageStr);

            // check if age is greater than 60
            if (age > 60) {
                  // count old Passengers
                  oldPassenger += 1;
            }
      }

      // return our ans
      return oldPassenger;
}