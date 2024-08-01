//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2678

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = details length

//? 🧺 Space complexity ➺ O(1)

var countSeniors = function (details) {
      let oldPassenger = 0;

      // extract the age for every passenger 
      for (let passenger of details) {
            // our age lies between 11 and 12 character
            let age = parseInt(passenger.substring(11, 13));

            // check if age is greater than 60
            if (age > 60) {
                  // count old Passengers
                  oldPassenger++;
            }
      }

      // return our ans
      return oldPassenger;
};

//-------------------------------------------------

//* One line code 

var countSeniors = function (details) {
      return details.reduce((count, passenger) => count + (parseInt(passenger.substring(11, 13)) > 60 ? 1 : 0), 0);
};