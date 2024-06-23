//! https://github.com/Prakhar-002/LEETCODE

class Solution {

      public boolean isPossible(int bloomDay[], int day, int bouquets, int flowers){
            int count = 0;
            int possibleBouquets = 0;

            for (int i = 0; i < bloomDay.length; i++) {
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

      public int minDays(int[] bloomDay, int m, int k) { // m = bouquets ; k = flowers
            int n = bloomDay.length;
            // base case
            if ((long) m * k > n) {
                  return -1;
            }

            int low = Integer.MAX_VALUE;
            int high = Integer.MIN_VALUE;

            // finding the low and high
            for (int day : bloomDay) {
                  low = Math.min(day, low);
                  high = Math.max(day, high);
            }

            while (low <= high) {
                  // finding mid of low and high
                  int mid = low + (high - low) / 2;
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
      }
}