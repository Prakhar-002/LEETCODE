//! https://github.com/Prakhar-002/LEETCODE

const isPossible = (bloomDay, day, bouquets, flowers) => {
      let count = 0
      let possibleBouquets = 0;

      for (let i = 0; i < bloomDay.length; i++) {
            // If blooming day is less then our current day
            if (bloomDay[i] <= day) {
                  // IF we have adjacent flowers to make bouquets
                  count++;
            } else {
                  // Count possible bouquets for adjacent flowers
                  possibleBouquets += count / flowers;
                  // Make count 0 cause we got a day where flower not bloomed so adjacent is 0
                  count = 0;
            }
      }

      // Count at last for possible bouquets  
      possibleBouquets += count / flowers;
      return possibleBouquets >= bouquets;
}

var minDays = function(bloomDay, m, k) {
      // base case
      if (m * k > bloomDay.length) {
            return -1;
      }

      // finding the low and high
      let low = Number.MAX_VALUE;
      let high = Number.MIN_VALUE;

      // finding the low and high
      for (let day of bloomDay) {
            low = Math.min(day, low);
            high = Math.max(day, high);
      }

      while(low <= high) {
            // finding mid of low and high
            let mid = low + Math.floor((high - low) / 2);
            // IF it's possible to make m bouquets for k flowers each
            if (isPossible(bloomDay, mid, m, k)) {
                  // Then we'll dec the high to mid - 1
                  high = mid - 1;
            } else {
                  // IF it's not then we'll inc our low to mid + 1
                  low = mid + 1;
            }
      }

      // Low will be our lowest possible waiting day
      return low;
};