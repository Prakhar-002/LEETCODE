//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2418

//? ⌚ Time complexity -> O(NLogN) 👉🏻 Build in sort

//? 🧺 Space complexity -> O(n) 👉🏻 people heights array 

var sortPeople = function (names, heights) {
      // first map height with their name
      let heightNameMap = {};

      for (let i = 0; i < heights.length; i++) {
            // map height : name
            heightNameMap[heights[i]] = names[i];
      }

      let peopleHeights = [];

      // sorted people height in reverse order
      heights.sort((a, b) => b - a);

      // traverse in reverse order with sorted height
      for (let height of heights) {
            // append the corresponding name assigned with height
            peopleHeights.push(heightNameMap[height]);
      }

      return peopleHeights;
};