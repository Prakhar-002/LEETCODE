//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 2285

//? ⌚ Time complexity -> O(NLogN + E) 👉 N is given E is number of edges

//? 🧺 Space complexity -> O(N) 👉 given 

var maximumImportance = function(n, roads) {
      // making array to count nodes of every edge
      // what ever times a city comes in our way that will be it's importance
      const cityCount = new Array(n).fill(0);

      // Roads is 2D array looks like a web of roads
      for (const road of roads) {
            // Taking one road extract both cities connecting by that road 
            let cityOne = road[0];
            let cityTwo = road[1];
            // counting the city to have it's road importance
            cityCount[cityOne]++;
            cityCount[cityTwo]++;
      }

      // # city label will start from 1 to N
      let cityLabel = 1;
      // importance will be 0 in starting
      let importance = 0;

      // sort our array to have arrange them by importance order
      // city label will be given by number of city occur in our web of roads
      cityCount.sort((a, b) => a - b);

      for (const city of cityCount) {
            // as given importance of city will be based on it's label
            importance += cityLabel * city;
            // assigning label according the number of occurrence of that city 
            cityLabel++;
      }

      return importance;
};